# compile
CC=g++ ${RPM_OPT_FLAGS}
CXX=g++ ${RPM_OPT_FLAGS}

#compile flags
CFLAGS = -Wall

# all targets
all: msvtest

# target msvtest: use msvtest.o
msvtest: msvtest.o

# target msvtest.o: use cpp
msvtest.o: msvtest.cpp

.PHONY: clean

# target clean: delete files
clean:
	rm -f msvtest msvtest.o