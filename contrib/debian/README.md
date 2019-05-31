
Debian
====================
This directory contains files used to package fxbd/fxb-qt
for Debian-based Linux systems. If you compile fxbd/fxb-qt yourself, there are some useful files here.

## fxb: URI support ##


fxb-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install fxb-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your fxbqt binary to `/usr/bin`
and the `../../share/pixmaps/fxb128.png` to `/usr/share/pixmaps`

fxb-qt.protocol (KDE)

