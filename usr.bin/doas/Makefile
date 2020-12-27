#	$OpenBSD: Makefile,v 1.3 2017/07/03 22:21:47 espie Exp $

SRCS=	parse.y doas.c env.c persist.c


TOPDIR?=../..

PROG=	doas
MAN=	doas.1 doas.conf.5

BINOWN= root
BINMODE=4555

CFLAGS+= -I${.CURDIR}
COPTS+=	-Wall
YFLAGS=

afterinstall:
	chown ${BINOWN}:${BINOWN} ${DESTDIR}/${BINDIR}/doas
	chmod ${BINMODE} ${DESTDIR}/${BINDIR}/doas

include ${.TOPDIR}/mk/bsd.prog.mk
