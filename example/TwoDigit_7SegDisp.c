/*
 ============================================================================
 Name        : TwoDigit_7SegDisp.c
 Author      : Andres R
 Version     : 1.0.0
 Description : use case of the TwoDigit_7SegDisp library
 ============================================================================
 */

#include <stdio.h>

/*two digit seven segment display driver include*/
#include "TwoDigit_7SegDisp.h"

int main(void) {
	/*input to the display driver*/
	NumInput_UInt8 = 99U;

	UInt8 LeftNumber;
	UInt8 RightNumber;

	/*display driver call*/
	TwoDigit_7SegDisp();

	/*use example of the output from the display driver*/
	LeftNumber = (b3_Bool_L * 8U) + (b2_Bool_L * 4U) + (b1_Bool_L * 2U) + (b0_Bool_L * 1U);
	RightNumber = (b3_Bool_R * 8U) + (b2_Bool_R * 4U) + (b1_Bool_R * 2U) + (b0_Bool_R * 1U);

	printf("Left : %d %d %d %d disp: %d \n", b3_Bool_L, b2_Bool_L, b1_Bool_L, b0_Bool_L, LeftNumber);
	printf("Right: %d %d %d %d disp: %d ", b3_Bool_R, b2_Bool_R, b1_Bool_R, b0_Bool_R, RightNumber);

	return 0;
}
