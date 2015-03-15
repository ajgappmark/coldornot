CC=gcc
CFLAGS=-I.
SRC=main.c
MAIN=coldornot
INSTALL=install
INSTALL_DIRECTORY=$(INSTALL) -dm755
INSTALL_PROGRAM=$(INSTALL) -Dpm 0755
 
all: $(MAIN)
 
$(MAIN): $(SRC)
	$(CC) $(SRC) -o $(MAIN)
 
clean:
	$(RM) *~ $(MAIN)
 
install:
	$(INSTALL_DIRECTORY) $(DESTDIR)/usr/bin
	$(INSTALL_PROGRAM) $(MAIN) $(DESTDIR)/usr/bin/
 
uninstall:
	rm -f $(DESTDIR)/usr/bin/$(MAIN)

