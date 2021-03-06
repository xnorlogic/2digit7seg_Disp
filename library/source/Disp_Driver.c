/**************************************************************************************************\
 *** 
 *** Simulink model       : TwoDigit_7SegDisp_TL
 *** TargetLink subsystem : TwoDigit_7SegDisp_TL/TwoDigit_7SegDisp
 *** Codefile             : Disp_Driver.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2018-09-18 11:25:13
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : Standard
 *** Compiler                                 : <unknown>
 *** Target                                   : Generic
 *** ANSI-C compatible code                   : yes
 *** Code Optimization                        : enabled
 *** Constant style                           : decimal
 *** Clean code option                        : disabled
 *** Logging mode                             : According to block-specific data
 *** Code Coverage                            : disabled
 *** Generate empty conditional branches      : disabled
 *** Loop unroll threshold                    : 5
 *** Shift mode                               : automatic
 *** Handle unscaled SF expr. with TL type    : enabled
 *** Assignment of conditions                 : AllBooleanOutputs 
 *** Scope reduction only to function level   : disabled
 *** Exploit ranges if not erasable           : disabled
 *** Exploit Compute Through Overflow         : optimized
 *** Linker sections                          : enabled
 *** Enable Assembler                         : disabled
 *** Variable name length                     : 31 chars
 *** Use global bitfields                     : disabled
 *** Stateflow: use of bitfields              : enabled
 *** State activity encoding limit            : 5
 *** Omit zero inits in restart function      : disabled
 *** Share functions between TL subsystems    : disabled
 *** Generate 64bit functions                 : enabled
 *** Inlining Threshold                       : 6
 *** Line break limit                         : 100
 *** Target optimized boolean data type       : enabled
 *** Keep saturation elements                 : disabled
 *** Extended variable sharing                : disabled
 *** Extended lifetime optimization           : enabled
 *** Style definition file                    : C:\dSPACE TargetLink 4.2\Matlab\Tl\Config\codegen\cc
 ***                                            onfig.xml
 *** Root style sheet                         : C:\dSPACE TargetLink 4.2\Matlab\Tl\XML\CodeGen\Style
 ***                                            sheets\TL_CSourceCodeSS.xsl
 ***
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** Sa1                      TwoDigit_7SegDisp
 *** Sa2                      TwoDigit_7SegDisp/Disp_Driver
 *** Sa3                      TwoDigit_7SegDisp/Disp_Driver/To_SevenSeg_Disp
 *** Sa4                      TwoDigit_7SegDisp/Disp_Driver/UInt_8_2_Bits_Left
 *** Sa5                      TwoDigit_7SegDisp/Disp_Driver/UInt_8_2_Bits_Right
 *** 
 *** SUBSYS                   CORRESPONDING MODEL BLOCK (REFERENCED MODEL)
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 4.2 from 14-Oct-2016
 *** Code generator version  : Build Id 4.2.0.26 from 2016-10-17 16:31:48

\**************************************************************************************************/

#ifndef DISP_DRIVER_C
#define DISP_DRIVER_C

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/

#include "UInt_8_2_Bits_Right.h"
#include "UInt_8_2_Bits_Left.h"
#include "To_SevenSeg_Disp.h"
#include "Disp_Driver.h"

/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INLINE FUNCTIONS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

/**************************************************************************************************\
 ***  FUNCTION:
 ***      Disp_Driver
 *** 
 ***  DESCRIPTION:
 ***      
 *** 
 ***  PARAMETERS:
 ***      Type               Name                Description
 ***      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ***
 ***  RETURNS:
 ***      void
 ***
 ***  SETTINGS:
 ***
\**************************************************************************************************/
void Disp_Driver(void)
{
   /* call of function: TwoDigit_7SegDisp/Disp_Driver/To_SevenSeg_Disp */
   To_SevenSeg_Disp();

   /* call of function: TwoDigit_7SegDisp/Disp_Driver/UInt_8_2_Bits_Right */
   UInt_8_2_Bits_Right();

   /* call of function: TwoDigit_7SegDisp/Disp_Driver/UInt_8_2_Bits_Left */
   UInt_8_2_Bits_Left();
}

/*----------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/
#endif /* DISP_DRIVER_C */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
