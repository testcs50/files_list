SRCS += ls.c
HFILES += ls.h
LIBNAME += libls.so

all:
	gcc $(SRCS) -o $(LIBNAME) -shared -fPIC

install:
	cp $(LIBNAME) /usr/lib
	cp $(HFILES) /usr/include

uninstall:
	rm -f /usr/lib/$(LIBNAME) /usr/include/$(HFILES)

clean:
	rm -f $(LIBNAME) *.o