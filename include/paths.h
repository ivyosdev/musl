#ifndef _PATHS_H
#define _PATHS_H

#define _PATH_DEV    "/system/device"
#define _PATH_PROC   "/system/process"
#define _PATH_SYS    "/system/kernel"
#define _PATH_TMP    "/system/temporary"
#define _PATH_CFG    "/system/config"
#define _PATH_LIB    "/system/library"
#define _PATH_SHELL  "/system/program/shell"

#define _PATH_CONSOLE  _PATH_DEV   "/console"
#define _PATH_DEVNULL  _PATH_DEV   "/null"
#define _PATH_TTY      _PATH_DEV   "/tty"
#define _PATH_LOG      _PATH_DEV   "/log"
#define _PATH_MOUNTED  _PATH_PROC  "/mounts"
#define _PATH_KLOG     _PATH_PROC  "/kmsg"
#define _PATH_SHM      _PATH_TMP   "/shared_memory"
#define _PATH_RESCONF  _PATH_CFG   "/nameservers"
#define _PATH_HOSTS    _PATH_CFG   "/hostnames"
#define _PATH_SERVICES _PATH_CFG   "/portnames"
#define _PATH_MNTTAB   _PATH_CFG   "/mountpoints"
#define _PATH_SHADOW   _PATH_CFG   "/passwords"
#define _PATH_PASSWD   _PATH_CFG   "/users"
#define _PATH_GROUP    _PATH_CFG   "/groups"
#define _PATH_DEFPATH  _PATH_SHELL "/bin"
#define _PATH_STDPATH  _PATH_SHELL "/bin"
#define _PATH_BSHELL   _PATH_SHELL "/bin/sh"

/* Unused in Ivy, or has no business being libc. */
#define _PATH_VARDB       "/invalid_libc_path" // "/var/lib/misc/"
#define _PATH_VARRUN      "/invalid_libc_path" // "/var/run/"
#define _PATH_NSCD_SOCKET "/invalid_libc_path" // "/var/run/nscd/socket"
#define _PATH_VARTMP      "/invalid_libc_path" // "/var/tmp/"
#define _PATH_LASTLOG     "/invalid_libc_path" // "/var/log/lastlog"
#define _PATH_MAILDIR     "/invalid_libc_path" // "/var/mail"
#define _PATH_UTMP        "/invalid_libc_path" // "/dev/null/utmp"
#define _PATH_WTMP        "/invalid_libc_path" // "/dev/null/wtmp"
#define _PATH_NOLOGIN     "/invalid_libc_path" // "/etc/nologin"
#define _PATH_SHELLS      "/invalid_libc_path" // "/etc/shells"
#define _PATH_SENDMAIL    "/invalid_libc_path" // "/usr/sbin/sendmail"
#define _PATH_MAN         "/invalid_libc_path" // "/usr/share/man"

#endif
