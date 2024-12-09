/*
 * EXT_RELAY.c
 *
 *  Created on: Jan 1, 2023
 *      Author: Khaled
 */

#include "EXT_RELAY.h"

void EXTRELAY_vidextrelayInit(void)
{
	Dio_vidconfigChannel(DIO_PORTD,DIO_PIN1,DIO_OUTPUT);
}
void EXTRELAY_vidextrelay2Init(void)
{
	Dio_vidconfigChannel(DIO_PORTD,DIO_PIN1,DIO_OUTPUT);
}
void EXTRELAY_vidextrelayOn(void)
{
	Dio_vidwriteChannel(DIO_PORTD,DIO_PIN0,DIO_HIGH);
}
void EXTRELAY_vidextrelayOff(void)
{
	Dio_vidwriteChannel(DIO_PORTD,DIO_PIN0,DIO_LOW);
}
void EXTRELAY_vidextrelay2On(void)
{
	Dio_vidwriteChannel(DIO_PORTD,DIO_PIN1,DIO_HIGH);
}
void EXTRELAY_vidextrelay2Off(void)
{
	Dio_vidwriteChannel(DIO_PORTD,DIO_PIN1,DIO_LOW);
}





