#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/zinux.kernel isodir/boot/zinux.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "zinux" {
	multiboot /boot/zinux.kernel
}
EOF
grub-mkrescue -o zinux.iso isodir
