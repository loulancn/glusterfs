xlator_LTLIBRARIES = write-behind.la
xlatordir = $(libdir)/glusterfs/$(PACKAGE_VERSION)/xlator/performance

write_behind_la_LDFLAGS = $(GF_XLATOR_DEFAULT_LDFLAGS)

write_behind_la_SOURCES = write-behind.c
write_behind_la_LIBADD = $(top_builddir)/libglusterfs/src/libglusterfs.la

noinst_HEADERS = write-behind-mem-types.h write-behind-messages.h

AM_CPPFLAGS = $(GF_CPPFLAGS) -I$(top_srcdir)/libglusterfs/src

AM_CFLAGS = -Wall $(GF_CFLAGS)

CLEANFILES = 
