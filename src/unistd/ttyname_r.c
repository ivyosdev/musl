#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>
#include <paths.h>

void __procfdname(char *, unsigned);

int ttyname_r(int fd, char *name, size_t size)
{
	struct stat st1, st2;
	char procname[sizeof(_PATH_PROC "/self/fd/") + 3*sizeof(int) + 2];
	ssize_t l;

	if (!isatty(fd)) return ENOTTY;

	__procfdname(procname, fd);
	l = readlink(procname, name, size);

	if (l < 0) return errno;
	else if (l == size) return ERANGE;

	name[l] = 0;

	if (stat(name, &st1) || fstat(fd, &st2))
		return errno;
	if (st1.st_dev != st2.st_dev || st1.st_ino != st2.st_ino)
		return ENOENT;

	return 0;
}
