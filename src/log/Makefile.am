
nodist_noinst_DATA = mlogger.h
dist_noinst_DATA = mlogger.h.erb

noinst_LIBRARIES = libkumo_log.a

libkumo_log_a_SOURCES = \
		mlogger.cc \
		mlogger_null.cc \
		mlogger_ostream.cc \
		mlogger_syslog.cc \
		mlogger_tty.cc \
		logpack.c \
		logpacker.cc

# FIXME GNU make extension
%.h: %.h.erb
	$(ERB) < $< > $@.tmp
	mv $@.tmp $@

%.hpp: %.hpp.erb
	$(ERB) < $< > $@.tmp
	mv $@.tmp $@

MOSTLYCLEANFILES = mlogger.h logpack.hpp

noinst_HEADERS = \
		mlogger.h \
		mlogger_null.h \
		mlogger_ostream.h \
		mlogger_syslog.h \
		mlogger_tty.h \
		logpack.h \
		logpack.hpp \
		logpacker.h

$(libkumo_log_a_SOURCES): mlogger.h logpack.hpp

