#ifndef _COMPAT_SYS_TTYCOM_H_
#define _COMPAT_SYS_TTYCOM_H_

#ifndef TIOCEXT
#define	TIOCEXT		_IOW('t', 96, int)	/* pty: external processing */
#endif

#ifndef TIOCSTOP
#define	TIOCSTOP	 _IO('t', 111)		/* stop output, like ^S */
#endif
#ifndef TIOCSTART
#define	TIOCSTART	 _IO('t', 110)		/* start output, like ^Q */
#endif

#ifndef TTYDISC
#define	TTYDISC		0		/* termios tty line discipline */
#endif

#endif /* _COMPAT_SYS_TTYCOM_H_ */
