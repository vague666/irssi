noinst_LIBRARIES = libirc_notifylist.a

AM_CPPFLAGS = \
	-I$(top_builddir) \
	$(GLIB_CFLAGS)

libirc_notifylist_a_SOURCES = \
	notifylist.c \
	notify-commands.c \
	notify-ison.c \
	notify-setup.c \
	notify-whois.c

pkginc_irc_notifylistdir=$(pkgincludedir)/src/irc/notifylist
pkginc_irc_notifylist_HEADERS = \
	notifylist.h \
	notify-setup.h \
	module.h

EXTRA_DIST = meson.build
