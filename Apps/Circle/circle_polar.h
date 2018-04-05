/*
** svn $Id$
*******************************************************************************
** Copyright (c) 2002-2010 The ROMS/TOMS Group
**
**   Licensed under a MIT/X style license
**
**   See License_ROMS.txt
**
*******************************************************************************
**
**  Options for Circle:
*/

#define CIRCLE

#undef UV_VIS2
#define UV_COR
#undef UV_QDRAG
#define UV_LDRAG
#define CURVGRID
#define NS_PERIODIC

#undef AVERAGES
#define ANA_GRID
#define ANA_INITIAL
#define ANA_SMFLUX
#undef MASKING
#undef ANA_MASK
