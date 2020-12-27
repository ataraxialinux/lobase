#	$OpenBSD: Makefile,v 1.3 1997/09/21 11:34:47 deraadt Exp $

.TOPDIR?=../..

PROG=	more
CFLAGS+= -I. -I${.CURDIR}/
SRCS=	more.c tputs.c termcap.c tgoto.c

CLEANFILES+=morehelp.h

morehelp.h: ${.CURDIR}/more.help
	echo -n 'const char *more_help = "' > morehelp.h
	sed -e 's/[\\"]/\\&/g' -e 's/$$/\\n\\/' ${.CURDIR}/more.help >> morehelp.h
	echo '";' >> morehelp.h

more.o: morehelp.h

include ${.TOPDIR}/mk/bsd.prog.mk
