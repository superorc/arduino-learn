
# build, optimize for speed, 16MHz 
#   -c                       Compile and assemble, but do not link
default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -o blink.o -c blink.c
	avr-gcc -o blink.bin blink.o
	avr-objcopy -O ihex -R .eeprom blink.bin blink.hex
