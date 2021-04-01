/* smr.h
   =====
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



double smr_find(FILE *fp,struct RadarParm *prm,
                struct FitData *fit,int fbeam,double sdate,
                double stime);
  
double smr_scan(double ctime,FILE *fp,int fbeam,int rflg,
                struct RadarParm *prm,
                struct FitData *fit,
                int bmnum,int chnum,int cpid,int sflg,int scan);

