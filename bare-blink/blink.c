
/*
https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf

led builtin - PB5 port, 11 leg on controller
Port B is an 8-bit bi-directional I/O port with internal pull-up resistor

Need to set DDRB(The Port B Data Direction Register) DDB5 to high, to configure PORTB5 as output

Install packages: sudo dnf install avr-libc avrdude avr-binutils avr-gcc

Run make

Use blink.hex to flash:

export A_PORT=/dev/ttyUSB0
sudo avrdude -F -V -c arduino -p ATMEGA328P -P $A_PORT -b 115200 -U flash:w:blink.hex

*/


#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // set PORTB5 as output
    DDRB = DDRB | (1 << DDB5);

    while(1) {
        // set PORTB5 (0010000)
        PORTB = PORTB | (1 << PORTB5);
        _delay_ms(1000);
        // unset
        PORTB = PORTB & ~(1 << PORTB5);
        _delay_ms(1000);
    }

}
