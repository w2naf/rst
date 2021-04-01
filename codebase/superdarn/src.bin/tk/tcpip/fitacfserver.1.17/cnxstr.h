/* cnxstr.h
   ========
   Author: R.J.Barnes
*/


/*
 Copyright (c) 2012 The Johns Hopkins University/Applied Physics Laboratory

This file is part of the Radar Software Toolkit (RST).

RST is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of

MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <https://www.gnu.org/licenses/>.

Modifications:
*/




#define FIT_RECL 1024
#define INX_RECL 16

#define ORIG_COMBF_SIZE 80
#define ORIG_PULSE_PAT_LEN   16             
#define ORIG_LAG_TAB_LEN     48              
#define ORIG_MAX_RANGE  75              

#ifdef SEC
#undef SEC
#endif

struct radar_parms {

  struct {
    char MAJOR,MINOR;
  } REV;/* REV.MAJOR is the major revision #, REV.MINOR is the minor # */

  int16  NPARM,	/* the total number of 16-bit words in the parameter block */
	 ST_ID,	/* station ID code: 1=Goose Bay, 2=Schefferville,
					4=Halley Station, 8=Syowa */
	 YEAR,	/* date and start time of the record.  Year=19xx */
	 MONTH,
	 DAY,
	 HOUR,
	 MINUT,
	 SEC,
	 TXPOW,	/* transmitted power (kW) */
	 NAVE,	/* number of times the pulse sequence was transmitted */
	 ATTEN,	/* attenuation setting of the receiver (0-3) */
	 LAGFR,	/* the lag to the first range (microsecs) (see note 2 below) */
	 SMSEP,	/* the sample separation (microsecs) (see note 2) */
	 ERCOD,	/* error flag (see error definitions) */
	 AGC_STAT,	/* AGC status word */
	 LOPWR_STAT,	/* Low power status word */
	 NBAUD; 		/* number of elements in pulse code */
  int32 NOISE,	/* the noise level determined during the clear freq. search */
        NOISE_MEAN;  /* average noise across frequency band */
  int16 CHANNEL;
  int16 RXRISE;	/* receiver rise time */
  /* The second set of parameters are set by the user */	
  /* These parameters can either be set manually or by a RADLANG program */
  /* There are a total of 24 words in this parameter list */
  int16 INTT,	/* the integration period */
	TXPL,	/* the pulse length (in micro seconds) */
	MPINC,	/* the basic lag separation (in microseconds) */
	MPPUL,	/* the number of pulses in the pulse pattern */
	MPLGS,	/* the number of lags in the pulse pattern (note 1 below) */
	NRANG,	/* the number of range gates */
	FRANG,	/* the distance to the first range (see note 2 below) */
	RSEP,	/* the range separation (in km) */
	BMNUM,	/* beam number */				
	XCF,	/* flag indicating if cross-correlations were being done */
	TFREQ,	/* the transmitted frequency (in KHz) */
	SCAN;	/* flag indicating the scan mode  */
	int32 MXPWR,	/*	Maximum power allowed (see note 3) */
	      LVMAX;	/*  Maximum noise level allowed (see note 3) */
	/* user defined variables */
	int32 usr_resL1,
              usr_resL2;
	int16 CP,
	      usr_resS1,
	      usr_resS2,
	      usr_resS3;
};
