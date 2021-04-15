/*
 * ADC.c
 *
 *  Created on: Dec 18, 2020
 *      Author: Karim Hussein
 */


#include "ADC.h"
#include "Regmap.h"
#include "util.h"


void ADC_Init(void)
{
	// Activate ADC1
	SetBit(RCC_APB2ENR,9);

	//Prescaler (Divide System Clock By 8) --> 1 MHz
	SetBit(RCC_CFGR,14);
	SetBit(RCC_CFGR,15);

	// Enable ADC NVIC
	SetBit(NVIC_ISER0,18);
}

void ADC_SelectChannel(ADC_CHANNEL adc_channel,CHANNEL_SEQUENCE channel_sequence)
{
	switch(adc_channel)
	{
	case CH0:
		if(!GetBit(RCC_APB2ENR,2))
			SetBit(RCC_APB2ENR,2);
		ClrBit(GPIOA_CRL,2);

		switch(channel_sequence)
		{
			case SQ1:
				ADC1_SQR3 |= adc_channel<<0;
				break;
			case SQ2:
				ADC1_SQR3 |= adc_channel<<5;
				break;
			case SQ3:
				ADC1_SQR3 |= adc_channel<<10;
				break;
			case SQ4:
				ADC1_SQR3 |= adc_channel<<15;
				break;
			case SQ5:
				ADC1_SQR3 |= adc_channel<<20;
				break;
			case SQ6:
				ADC1_SQR3 |= adc_channel<<25;
				break;
			case SQ7:
				ADC1_SQR2 |= adc_channel<<0;
				break;
			case SQ8:
				ADC1_SQR2 |= adc_channel<<5;
				break;
			case SQ9:
				ADC1_SQR2 |= adc_channel<<10;
				break;
			case SQ10:
				ADC1_SQR2 |= adc_channel<<15;
				break;
			case SQ11:
				ADC1_SQR2 |= adc_channel<<20;
				break;
			case SQ12:
				ADC1_SQR2 |= adc_channel<<25;
				break;
			case SQ13:
				ADC1_SQR1 |= adc_channel<<0;
				break;
			case SQ14:
				ADC1_SQR1 |= adc_channel<<5;
				break;
			case SQ15:
				ADC1_SQR1 |= adc_channel<<10;
				break;
			case SQ16:
				ADC1_SQR1 |= adc_channel<<15;
				break;
			default:break;
		}

		break;
	case CH1:
		if(!GetBit(RCC_APB2ENR,2))
			SetBit(RCC_APB2ENR,2);
		ClrBit(GPIOA_CRL,6);

		switch(channel_sequence)
		{
			case SQ1:
				ADC1_SQR3 |= adc_channel<<0;
				break;
			case SQ2:
				ADC1_SQR3 |= adc_channel<<5;
				break;
			case SQ3:
				ADC1_SQR3 |= adc_channel<<10;
				break;
			case SQ4:
				ADC1_SQR3 |= adc_channel<<15;
				break;
			case SQ5:
				ADC1_SQR3 |= adc_channel<<20;
				break;
			case SQ6:
				ADC1_SQR3 |= adc_channel<<25;
				break;
			case SQ7:
				ADC1_SQR2 |= adc_channel<<0;
				break;
			case SQ8:
				ADC1_SQR2 |= adc_channel<<5;
				break;
			case SQ9:
				ADC1_SQR2 |= adc_channel<<10;
				break;
			case SQ10:
				ADC1_SQR2 |= adc_channel<<15;
				break;
			case SQ11:
				ADC1_SQR2 |= adc_channel<<20;
				break;
			case SQ12:
				ADC1_SQR2 |= adc_channel<<25;
				break;
			case SQ13:
				ADC1_SQR1 |= adc_channel<<0;
				break;
			case SQ14:
				ADC1_SQR1 |= adc_channel<<5;
				break;
			case SQ15:
				ADC1_SQR1 |= adc_channel<<10;
				break;
			case SQ16:
				ADC1_SQR1 |= adc_channel<<15;
				break;
			default:break;
		}

		break;
	case CH2:
		if(!GetBit(RCC_APB2ENR,2))
			SetBit(RCC_APB2ENR,2);
		ClrBit(GPIOA_CRL,10);

		switch(channel_sequence)
		{
			case SQ1:
				ADC1_SQR3 |= adc_channel<<0;
				break;
			case SQ2:
				ADC1_SQR3 |= adc_channel<<5;
				break;
			case SQ3:
				ADC1_SQR3 |= adc_channel<<10;
				break;
			case SQ4:
				ADC1_SQR3 |= adc_channel<<15;
				break;
			case SQ5:
				ADC1_SQR3 |= adc_channel<<20;
				break;
			case SQ6:
				ADC1_SQR3 |= adc_channel<<25;
				break;
			case SQ7:
				ADC1_SQR2 |= adc_channel<<0;
				break;
			case SQ8:
				ADC1_SQR2 |= adc_channel<<5;
				break;
			case SQ9:
				ADC1_SQR2 |= adc_channel<<10;
				break;
			case SQ10:
				ADC1_SQR2 |= adc_channel<<15;
				break;
			case SQ11:
				ADC1_SQR2 |= adc_channel<<20;
				break;
			case SQ12:
				ADC1_SQR2 |= adc_channel<<25;
				break;
			case SQ13:
				ADC1_SQR1 |= adc_channel<<0;
				break;
			case SQ14:
				ADC1_SQR1 |= adc_channel<<5;
				break;
			case SQ15:
				ADC1_SQR1 |= adc_channel<<10;
				break;
			case SQ16:
				ADC1_SQR1 |= adc_channel<<15;
				break;
			default:break;
		}
		break;
	case CH3:
		if(!GetBit(RCC_APB2ENR,2))
			SetBit(RCC_APB2ENR,2);
		ClrBit(GPIOA_CRL,14);

		switch(channel_sequence)
		{
			case SQ1:
				ADC1_SQR3 |= adc_channel<<0;
				break;
			case SQ2:
				ADC1_SQR3 |= adc_channel<<5;
				break;
			case SQ3:
				ADC1_SQR3 |= adc_channel<<10;
				break;
			case SQ4:
				ADC1_SQR3 |= adc_channel<<15;
				break;
			case SQ5:
				ADC1_SQR3 |= adc_channel<<20;
				break;
			case SQ6:
				ADC1_SQR3 |= adc_channel<<25;
				break;
			case SQ7:
				ADC1_SQR2 |= adc_channel<<0;
				break;
			case SQ8:
				ADC1_SQR2 |= adc_channel<<5;
				break;
			case SQ9:
				ADC1_SQR2 |= adc_channel<<10;
				break;
			case SQ10:
				ADC1_SQR2 |= adc_channel<<15;
				break;
			case SQ11:
				ADC1_SQR2 |= adc_channel<<20;
				break;
			case SQ12:
				ADC1_SQR2 |= adc_channel<<25;
				break;
			case SQ13:
				ADC1_SQR1 |= adc_channel<<0;
				break;
			case SQ14:
				ADC1_SQR1 |= adc_channel<<5;
				break;
			case SQ15:
				ADC1_SQR1 |= adc_channel<<10;
				break;
			case SQ16:
				ADC1_SQR1 |= adc_channel<<15;
				break;
			default:break;
		}

		break;
	case CH4:
		if(!GetBit(RCC_APB2ENR,2))
			SetBit(RCC_APB2ENR,2);
		ClrBit(GPIOA_CRL,18);

		switch(channel_sequence)
		{
			case SQ1:
				ADC1_SQR3 |= adc_channel<<0;
				break;
			case SQ2:
				ADC1_SQR3 |= adc_channel<<5;
				break;
			case SQ3:
				ADC1_SQR3 |= adc_channel<<10;
				break;
			case SQ4:
				ADC1_SQR3 |= adc_channel<<15;
				break;
			case SQ5:
				ADC1_SQR3 |= adc_channel<<20;
				break;
			case SQ6:
				ADC1_SQR3 |= adc_channel<<25;
				break;
			case SQ7:
				ADC1_SQR2 |= adc_channel<<0;
				break;
			case SQ8:
				ADC1_SQR2 |= adc_channel<<5;
				break;
			case SQ9:
				ADC1_SQR2 |= adc_channel<<10;
				break;
			case SQ10:
				ADC1_SQR2 |= adc_channel<<15;
				break;
			case SQ11:
				ADC1_SQR2 |= adc_channel<<20;
				break;
			case SQ12:
				ADC1_SQR2 |= adc_channel<<25;
				break;
			case SQ13:
				ADC1_SQR1 |= adc_channel<<0;
				break;
			case SQ14:
				ADC1_SQR1 |= adc_channel<<5;
				break;
			case SQ15:
				ADC1_SQR1 |= adc_channel<<10;
				break;
			case SQ16:
				ADC1_SQR1 |= adc_channel<<15;
				break;
			default:break;
		}

		break;
	case CH5:
		if(!GetBit(RCC_APB2ENR,2))
			SetBit(RCC_APB2ENR,2);
		ClrBit(GPIOA_CRL,22);

		switch(channel_sequence)
		{
			case SQ1:
				ADC1_SQR3 |= adc_channel<<0;
				break;
			case SQ2:
				ADC1_SQR3 |= adc_channel<<5;
				break;
			case SQ3:
				ADC1_SQR3 |= adc_channel<<10;
				break;
			case SQ4:
				ADC1_SQR3 |= adc_channel<<15;
				break;
			case SQ5:
				ADC1_SQR3 |= adc_channel<<20;
				break;
			case SQ6:
				ADC1_SQR3 |= adc_channel<<25;
				break;
			case SQ7:
				ADC1_SQR2 |= adc_channel<<0;
				break;
			case SQ8:
				ADC1_SQR2 |= adc_channel<<5;
				break;
			case SQ9:
				ADC1_SQR2 |= adc_channel<<10;
				break;
			case SQ10:
				ADC1_SQR2 |= adc_channel<<15;
				break;
			case SQ11:
				ADC1_SQR2 |= adc_channel<<20;
				break;
			case SQ12:
				ADC1_SQR2 |= adc_channel<<25;
				break;
			case SQ13:
				ADC1_SQR1 |= adc_channel<<0;
				break;
			case SQ14:
				ADC1_SQR1 |= adc_channel<<5;
				break;
			case SQ15:
				ADC1_SQR1 |= adc_channel<<10;
				break;
			case SQ16:
				ADC1_SQR1 |= adc_channel<<15;
				break;
			default:break;
		}

		break;
	case CH6:
		if(!GetBit(RCC_APB2ENR,2))
			SetBit(RCC_APB2ENR,2);
		ClrBit(GPIOA_CRL,26);

		switch(channel_sequence)
		{
			case SQ1:
				ADC1_SQR3 |= adc_channel<<0;
				break;
			case SQ2:
				ADC1_SQR3 |= adc_channel<<5;
				break;
			case SQ3:
				ADC1_SQR3 |= adc_channel<<10;
				break;
			case SQ4:
				ADC1_SQR3 |= adc_channel<<15;
				break;
			case SQ5:
				ADC1_SQR3 |= adc_channel<<20;
				break;
			case SQ6:
				ADC1_SQR3 |= adc_channel<<25;
				break;
			case SQ7:
				ADC1_SQR2 |= adc_channel<<0;
				break;
			case SQ8:
				ADC1_SQR2 |= adc_channel<<5;
				break;
			case SQ9:
				ADC1_SQR2 |= adc_channel<<10;
				break;
			case SQ10:
				ADC1_SQR2 |= adc_channel<<15;
				break;
			case SQ11:
				ADC1_SQR2 |= adc_channel<<20;
				break;
			case SQ12:
				ADC1_SQR2 |= adc_channel<<25;
				break;
			case SQ13:
				ADC1_SQR1 |= adc_channel<<0;
				break;
			case SQ14:
				ADC1_SQR1 |= adc_channel<<5;
				break;
			case SQ15:
				ADC1_SQR1 |= adc_channel<<10;
				break;
			case SQ16:
				ADC1_SQR1 |= adc_channel<<15;
				break;
			default:break;
		}

		break;
	case CH7:
		if(!GetBit(RCC_APB2ENR,2))
			SetBit(RCC_APB2ENR,2);
		ClrBit(GPIOA_CRL,30);

		switch(channel_sequence)
		{
			case SQ1:
				ADC1_SQR3 |= adc_channel<<0;
				break;
			case SQ2:
				ADC1_SQR3 |= adc_channel<<5;
				break;
			case SQ3:
				ADC1_SQR3 |= adc_channel<<10;
				break;
			case SQ4:
				ADC1_SQR3 |= adc_channel<<15;
				break;
			case SQ5:
				ADC1_SQR3 |= adc_channel<<20;
				break;
			case SQ6:
				ADC1_SQR3 |= adc_channel<<25;
				break;
			case SQ7:
				ADC1_SQR2 |= adc_channel<<0;
				break;
			case SQ8:
				ADC1_SQR2 |= adc_channel<<5;
				break;
			case SQ9:
				ADC1_SQR2 |= adc_channel<<10;
				break;
			case SQ10:
				ADC1_SQR2 |= adc_channel<<15;
				break;
			case SQ11:
				ADC1_SQR2 |= adc_channel<<20;
				break;
			case SQ12:
				ADC1_SQR2 |= adc_channel<<25;
				break;
			case SQ13:
				ADC1_SQR1 |= adc_channel<<0;
				break;
			case SQ14:
				ADC1_SQR1 |= adc_channel<<5;
				break;
			case SQ15:
				ADC1_SQR1 |= adc_channel<<10;
				break;
			case SQ16:
				ADC1_SQR1 |= adc_channel<<15;
				break;
			default:break;
		}

		break;
	case CH8:
		if(!GetBit(RCC_APB2ENR,3))
			SetBit(RCC_APB2ENR,3);
		ClrBit(GPIOB_CRL,2);

		switch(channel_sequence)
		{
			case SQ1:
				ADC1_SQR3 |= adc_channel<<0;
				break;
			case SQ2:
				ADC1_SQR3 |= adc_channel<<5;
				break;
			case SQ3:
				ADC1_SQR3 |= adc_channel<<10;
				break;
			case SQ4:
				ADC1_SQR3 |= adc_channel<<15;
				break;
			case SQ5:
				ADC1_SQR3 |= adc_channel<<20;
				break;
			case SQ6:
				ADC1_SQR3 |= adc_channel<<25;
				break;
			case SQ7:
				ADC1_SQR2 |= adc_channel<<0;
				break;
			case SQ8:
				ADC1_SQR2 |= adc_channel<<5;
				break;
			case SQ9:
				ADC1_SQR2 |= adc_channel<<10;
				break;
			case SQ10:
				ADC1_SQR2 |= adc_channel<<15;
				break;
			case SQ11:
				ADC1_SQR2 |= adc_channel<<20;
				break;
			case SQ12:
				ADC1_SQR2 |= adc_channel<<25;
				break;
			case SQ13:
				ADC1_SQR1 |= adc_channel<<0;
				break;
			case SQ14:
				ADC1_SQR1 |= adc_channel<<5;
				break;
			case SQ15:
				ADC1_SQR1 |= adc_channel<<10;
				break;
			case SQ16:
				ADC1_SQR1 |= adc_channel<<15;
				break;
			default:break;
		}

		break;
	case CH9:
		if(!GetBit(RCC_APB2ENR,3))
			SetBit(RCC_APB2ENR,3);
		ClrBit(GPIOB_CRL,6);

		switch(channel_sequence)
		{
			case SQ1:
				ADC1_SQR3 |= adc_channel<<0;
				break;
			case SQ2:
				ADC1_SQR3 |= adc_channel<<5;
				break;
			case SQ3:
				ADC1_SQR3 |= adc_channel<<10;
				break;
			case SQ4:
				ADC1_SQR3 |= adc_channel<<15;
				break;
			case SQ5:
				ADC1_SQR3 |= adc_channel<<20;
				break;
			case SQ6:
				ADC1_SQR3 |= adc_channel<<25;
				break;
			case SQ7:
				ADC1_SQR2 |= adc_channel<<0;
				break;
			case SQ8:
				ADC1_SQR2 |= adc_channel<<5;
				break;
			case SQ9:
				ADC1_SQR2 |= adc_channel<<10;
				break;
			case SQ10:
				ADC1_SQR2 |= adc_channel<<15;
				break;
			case SQ11:
				ADC1_SQR2 |= adc_channel<<20;
				break;
			case SQ12:
				ADC1_SQR2 |= adc_channel<<25;
				break;
			case SQ13:
				ADC1_SQR1 |= adc_channel<<0;
				break;
			case SQ14:
				ADC1_SQR1 |= adc_channel<<5;
				break;
			case SQ15:
				ADC1_SQR1 |= adc_channel<<10;
				break;
			case SQ16:
				ADC1_SQR1 |= adc_channel<<15;
				break;
			default:break;
		}

		break;
	}
}

void ADC_Mode(ADC_MODE adc_mode)
{
	switch(adc_mode)
	{
		case SingleConversion:
			ClrBit(ADC1_CR2,1);
			break;
		case ContinuousConversion:
			SetBit(ADC1_CR2,1);
			break;
		case Scan:
			SetBit(ADC1_CR2,1);
			SetBit(ADC1_CR1,8);
			SetBit(ADC1_CR2,8);
			break;
		default:break;
	}
}

void ADC_SequenceLength(unsigned char SequenceLength)
{
	SequenceLength--;

	if (SequenceLength > 16)
		SequenceLength = 16;

	ADC1_SQR1 |=  SequenceLength << 20 ;
}

void ADC_Enable(void)
{
	SetBit(ADC1_CR2,0);
}

void ADC_Disable(void)
{
	ClrBit(ADC1_CR2,0);
}

void ADC_EnableInterrupt(void)
{
	SetBit(ADC1_CR1,5);
}
void ADC_DisableInterrupt(void)
{
	ClrBit(ADC1_CR1,5);
}
void ADC_StartConversion(void)
{
	SetBit(ADC1_CR2,0);
}

unsigned char ADC_EOC_Flag(void)
{
	return (GetBit(ADC1_SR,1));
}

void ADC_WaitUntilConversionEnd(void)
{
	while(!(ADC_EOC_Flag()));

}

unsigned short ADC_Result()
{
	return(ADC1_DR);
}

// if you have two adc it will not work properly
void (*ADC_ISR)(void) = 0;

void ADC_SetISR(void (*ptr)(void))
{
	ADC_ISR = ptr;
}

void ADC1_2_IRQHandler(void)
{
	ADC_ISR();
	//Clear Flag;
	if (GetBit(ADC1_SR,1))
		ClrBit(ADC1_SR,1);//clear pending bit
}
