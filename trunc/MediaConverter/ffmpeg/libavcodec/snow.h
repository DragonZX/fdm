/*
  Free Download Manager Copyright (c) 2003-2011 FreeDownloadManager.ORG
*/



#ifndef AVCODEC_SNOW_H
#define AVCODEC_SNOW_H

#include "dsputil.h"
#include "dwt.h"

#define MID_STATE 128

#define MAX_PLANES 4
#define QSHIFT 5
#define QROOT (1<<QSHIFT)
#define LOSSLESS_QLOG -128
#define FRAC_BITS 4
#define MAX_REF_FRAMES 8

#define LOG2_OBMC_MAX 8
#define OBMC_MAX (1<<(LOG2_OBMC_MAX))



static av_always_inline void snow_interleave_line_header(int * i, int width, IDWTELEM * low, IDWTELEM * high){
    (*i) = (width) - 2;

    if (width & 1){
        low[(*i)+1] = low[((*i)+1)>>1];
        (*i)--;
    }
}

static av_always_inline void snow_interleave_line_footer(int * i, IDWTELEM * low, IDWTELEM * high){
    for (; (*i)>=0; (*i)-=2){
        low[(*i)+1] = high[(*i)>>1];
        low[*i] = low[(*i)>>1];
    }
}

static av_always_inline void snow_horizontal_compose_lift_lead_out(int i, IDWTELEM * dst, IDWTELEM * src, IDWTELEM * ref, int width, int w, int lift_high, int mul, int add, int shift){
    for(; i<w; i++){
        dst[i] = src[i] - ((mul * (ref[i] + ref[i + 1]) + add) >> shift);
    }

    if((width^lift_high)&1){
        dst[w] = src[w] - ((mul * 2 * ref[w] + add) >> shift);
    }
}

static av_always_inline void snow_horizontal_compose_liftS_lead_out(int i, IDWTELEM * dst, IDWTELEM * src, IDWTELEM * ref, int width, int w){
        for(; i<w; i++){
            dst[i] = src[i] + ((ref[i] + ref[(i+1)]+W_BO + 4 * src[i]) >> W_BS);
        }

        if(width&1){
            dst[w] = src[w] + ((2 * ref[w] + W_BO + 4 * src[w]) >> W_BS);
        }
}

#endif 
