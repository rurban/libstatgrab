# Makefile for libstatgrab/examples
# http://www.i-scream.org/libstatgrab/
# $Id$

noinst_LTLIBRARIES = libtestlib.la

EXTRA_DIST = mix_tests.pm run_tests.pm mk_run_tests.pl run_tests.t.in testlib.h

# BUILT_HEADERS = helpers.h
libtestlib_la_SOURCES = err.c opt.c routines.c
libtestlib_la_LIBADD = $(top_builddir)/src/libstatgrab/libstatgrab.la
libtestlib_la_LDFLAGS = @LINKFLAGS@

AM_CPPFLAGS = -I$(top_srcdir) -I$(top_builddir)\
	      -I$(top_srcdir)/src -I$(top_builddir)/src\
	      -I$(top_srcdir)/src/libstatgrab -I$(top_builddir)/src/libstatgrab \
	       @CLIBFLAGS@
