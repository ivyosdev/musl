#define _GNU_SOURCE
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <paths.h>

char *getpass(const char *prompt)
{
	int fd;
	struct termios s, t;
	ssize_t l;
	static char password[128];

	if ((fd = open(_PATH_TTY, O_RDWR|O_NOCTTY|O_CLOEXEC)) < 0) return 0;

	tcgetattr(fd, &t);
	s = t;
	t.c_lflag &= ~(ECHO|ISIG);
	t.c_lflag |= ICANON;
	t.c_iflag &= ~(INLCR|IGNCR);
	t.c_iflag |= ICRNL;
	tcsetattr(fd, TCSAFLUSH, &t);
	tcdrain(fd);

	dprintf(fd, "%s", prompt);

	l = read(fd, password, sizeof password);
	if (l >= 0) {
		if (l > 0 && password[l-1] == '\n') l--;
		password[l] = 0;
	}

	tcsetattr(fd, TCSAFLUSH, &s);

	dprintf(fd, "\n");
	close(fd);

	return l<0 ? 0 : password;
}
