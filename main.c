#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>

const uint16_t LED_uptime = 500;
const uint16_t LED_downtime = 300;

void ledInit()

uint8_t main()
{	
	while (1)
	{
		PORTB |= (1 << 5);
		_delay_ms(LED_uptime);
		PORTB &= ~(1 << 5);
		_delay_ms(LED_downtime);
	}
	return 0;
}

void ledInit()
{
	DDRB |= (1 << 5);
}
