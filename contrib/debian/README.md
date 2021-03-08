
Debian
====================
This directory contains files used to package surged/surge-qt
for Debian-based Linux systems. If you compile surged/surge-qt yourself, there are some useful files here.

## surge: URI support ##


surge-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install surge-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your surge-qt binary to `/usr/bin`
and the `../../share/pixmaps/surge128.png` to `/usr/share/pixmaps`

surge-qt.protocol (KDE)

