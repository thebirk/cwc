@echo off
gcc -E window.c main.c player.c input.c -BSDL2/lib/x86 -BSDL2/include -lSDL2main -lSDL2
