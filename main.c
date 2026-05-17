#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>

const uint16_t LED_uptime = 500;
const uint16_t LED_downtime = 300;


void ledBlink(uint16_t uptime, uint16_t downtime);
void ledInit();


uint8_t main()
{	
	while (1)
	{
		ledBlink(LED_uptime, LED_downtime);
	}
	return 0;
}

void ledBlink(uint16_t uptime, uint16_t downtime)
{
	PORTB |= (1 << 5);
	_delay_ms(uptime);
	PORTB &= ~(1 << 5);
	_delay_ms(downtime);
}
void ledInit()
{
	DDRB |= (1 << 5);
}
