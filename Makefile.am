# Makefile for libstatgrab
# http://www.i-scream.org/libstatgrab/
# $Id$

AUTOMAKE_OPTIONS = gnu

SUBDIRS = src docs examples

ChangeLog:
	cvs2cl --stdout --no-wrap -r -t -w -S -g "-d :pserver:anonymous@cvs.i-scream.org:/cvs/i-scream" -g "-q" > ChangeLog

EXTRA_DIST = libstatgrab.pc.in PLATFORMS COPYING COPYING.LGPL

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libstatgrab.pc
