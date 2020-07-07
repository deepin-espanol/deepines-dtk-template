 
PREFIX = /usr

all:

install:
	mkdir -p $(DESTDIR)$(PREFIX)/share/qtcreator/templates/wizards/projects
	cp -r deepinesdtk $(DESTDIR)$(PREFIX)/share/qtcreator/templates/wizards/projects/
	chmod 755 $(DESTDIR)$(PREFIX)/share/qtcreator/templates/wizards/projects/deepinesdtk
