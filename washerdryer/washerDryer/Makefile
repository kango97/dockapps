LIBDIR = -L/usr/X11R6/lib -L/usr/lib -L/opt/gnome/lib
LIBS   = -lXpm -lXext -lX11 `pkg-config gtk+-2.0 --libs` -ldockapp
CFLAGS = `pkg-config gtk+-2.0 --cflags`
OBJS =	washerDryer.o

.c.o:
	cc -c -O2 -Wall $< -o $*.o $(CFLAGS)

washerDryer: $(OBJS)
	cc -Wall -pedantic -o washerDryer $^ $(LIBDIR) $(LIBS)

all:: washerDryer

clean::
	for i in $(OBJS) ; do \
		rm -f $$i; \
	done
	rm -f washerDryer

install::   washerDryer
	@echo
	@echo "Installing config file..."
	cp wdryerrc $(HOME)/.wdryerrc
	chmod 600 $(HOME)/.wdryerrc
	@echo
	@echo "Installing executable..."
	cp -f washerDryer /usr/local/bin/
	chmod 755 /usr/local/bin/washerDryer
	chown root:root /usr/local/bin/washerDryer
	@echo
	@echo "Installing man page..."
	cp -f man/washerDryer.1.gz /usr/man/man1/
	chmod 644 /usr/man/man1/washerDryer.1.gz
	@echo
	@echo "washerDryer installation finished."

uninstall::
	@echo
	@echo "Removing executable..."
	rm -f /usr/local/bin/washerDryer
	@echo
	@echo "Removing config file..."
	rm -f $(HOME)/.wdryerrc
	@echo
	@echo "Removing man page..."
	rm -f /usr/man/man1/washerDryer.1.gz
	@echo
	@echo "washerDryer uninstall finished."

