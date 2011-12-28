/*
  Free Download Manager Copyright (c) 2003-2011 FreeDownloadManager.ORG
*/



#ifndef AVFORMAT_QTPALETTE_H
#define AVFORMAT_QTPALETTE_H

#include <inttypes.h>

static const uint8_t ff_qt_default_palette_4[4 * 3] = {
  0x93, 0x65, 0x5E,
  0xFF, 0xFF, 0xFF,
  0xDF, 0xD0, 0xAB,
  0x00, 0x00, 0x00
};

static const uint8_t ff_qt_default_palette_16[16 * 3] = {
  0xFF, 0xFB, 0xFF,
  0xEF, 0xD9, 0xBB,
  0xE8, 0xC9, 0xB1,
  0x93, 0x65, 0x5E,
  0xFC, 0xDE, 0xE8,
  0x9D, 0x88, 0x91,
  0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF,
  0x47, 0x48, 0x37,
  0x7A, 0x5E, 0x55,
  0xDF, 0xD0, 0xAB,
  0xFF, 0xFB, 0xF9,
  0xE8, 0xCA, 0xC5,
  0x8A, 0x7C, 0x77,
  0x00, 0x00, 0x00
};

static const uint8_t ff_qt_default_palette_256[256 * 3] = {
    0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xCC,
    0xFF, 0xFF, 0x99,
    0xFF, 0xFF, 0x66,
    0xFF, 0xFF, 0x33,
    0xFF, 0xFF, 0x00,
    0xFF, 0xCC, 0xFF,
    0xFF, 0xCC, 0xCC,
    0xFF, 0xCC, 0x99,
    0xFF, 0xCC, 0x66,
    0xFF, 0xCC, 0x33,
    0xFF, 0xCC, 0x00,
    0xFF, 0x99, 0xFF,
    0xFF, 0x99, 0xCC,
    0xFF, 0x99, 0x99,
    0xFF, 0x99, 0x66,
    0xFF, 0x99, 0x33,
    0xFF, 0x99, 0x00,
    0xFF, 0x66, 0xFF,
    0xFF, 0x66, 0xCC,
    0xFF, 0x66, 0x99,
    0xFF, 0x66, 0x66,
    0xFF, 0x66, 0x33,
    0xFF, 0x66, 0x00,
    0xFF, 0x33, 0xFF,
    0xFF, 0x33, 0xCC,
    0xFF, 0x33, 0x99,
    0xFF, 0x33, 0x66,
    0xFF, 0x33, 0x33,
    0xFF, 0x33, 0x00,
    0xFF, 0x00, 0xFF,
    0xFF, 0x00, 0xCC,
    0xFF, 0x00, 0x99,
    0xFF, 0x00, 0x66,
    0xFF, 0x00, 0x33,
    0xFF, 0x00, 0x00,
    0xCC, 0xFF, 0xFF,
    0xCC, 0xFF, 0xCC,
    0xCC, 0xFF, 0x99,
    0xCC, 0xFF, 0x66,
    0xCC, 0xFF, 0x33,
    0xCC, 0xFF, 0x00,
    0xCC, 0xCC, 0xFF,
    0xCC, 0xCC, 0xCC,
    0xCC, 0xCC, 0x99,
    0xCC, 0xCC, 0x66,
    0xCC, 0xCC, 0x33,
    0xCC, 0xCC, 0x00,
    0xCC, 0x99, 0xFF,
    0xCC, 0x99, 0xCC,
    0xCC, 0x99, 0x99,
    0xCC, 0x99, 0x66,
    0xCC, 0x99, 0x33,
    0xCC, 0x99, 0x00,
    0xCC, 0x66, 0xFF,
    0xCC, 0x66, 0xCC,
    0xCC, 0x66, 0x99,
    0xCC, 0x66, 0x66,
    0xCC, 0x66, 0x33,
    0xCC, 0x66, 0x00,
    0xCC, 0x33, 0xFF,
    0xCC, 0x33, 0xCC,
    0xCC, 0x33, 0x99,
    0xCC, 0x33, 0x66,
    0xCC, 0x33, 0x33,
    0xCC, 0x33, 0x00,
    0xCC, 0x00, 0xFF,
    0xCC, 0x00, 0xCC,
    0xCC, 0x00, 0x99,
    0xCC, 0x00, 0x66,
    0xCC, 0x00, 0x33,
    0xCC, 0x00, 0x00,
    0x99, 0xFF, 0xFF,
    0x99, 0xFF, 0xCC,
    0x99, 0xFF, 0x99,
    0x99, 0xFF, 0x66,
    0x99, 0xFF, 0x33,
    0x99, 0xFF, 0x00,
    0x99, 0xCC, 0xFF,
    0x99, 0xCC, 0xCC,
    0x99, 0xCC, 0x99,
    0x99, 0xCC, 0x66,
    0x99, 0xCC, 0x33,
    0x99, 0xCC, 0x00,
    0x99, 0x99, 0xFF,
    0x99, 0x99, 0xCC,
    0x99, 0x99, 0x99,
    0x99, 0x99, 0x66,
    0x99, 0x99, 0x33,
    0x99, 0x99, 0x00,
    0x99, 0x66, 0xFF,
    0x99, 0x66, 0xCC,
    0x99, 0x66, 0x99,
    0x99, 0x66, 0x66,
    0x99, 0x66, 0x33,
    0x99, 0x66, 0x00,
    0x99, 0x33, 0xFF,
    0x99, 0x33, 0xCC,
    0x99, 0x33, 0x99,
    0x99, 0x33, 0x66,
    0x99, 0x33, 0x33,
    0x99, 0x33, 0x00,
    0x99, 0x00, 0xFF,
    0x99, 0x00, 0xCC,
    0x99, 0x00, 0x99,
    0x99, 0x00, 0x66,
    0x99, 0x00, 0x33,
    0x99, 0x00, 0x00,
    0x66, 0xFF, 0xFF,
    0x66, 0xFF, 0xCC,
    0x66, 0xFF, 0x99,
    0x66, 0xFF, 0x66,
    0x66, 0xFF, 0x33,
    0x66, 0xFF, 0x00,
    0x66, 0xCC, 0xFF,
    0x66, 0xCC, 0xCC,
    0x66, 0xCC, 0x99,
    0x66, 0xCC, 0x66,
    0x66, 0xCC, 0x33,
    0x66, 0xCC, 0x00,
    0x66, 0x99, 0xFF,
    0x66, 0x99, 0xCC,
    0x66, 0x99, 0x99,
    0x66, 0x99, 0x66,
    0x66, 0x99, 0x33,
    0x66, 0x99, 0x00,
    0x66, 0x66, 0xFF,
    0x66, 0x66, 0xCC,
    0x66, 0x66, 0x99,
    0x66, 0x66, 0x66,
    0x66, 0x66, 0x33,
    0x66, 0x66, 0x00,
    0x66, 0x33, 0xFF,
    0x66, 0x33, 0xCC,
    0x66, 0x33, 0x99,
    0x66, 0x33, 0x66,
    0x66, 0x33, 0x33,
    0x66, 0x33, 0x00,
    0x66, 0x00, 0xFF,
    0x66, 0x00, 0xCC,
    0x66, 0x00, 0x99,
    0x66, 0x00, 0x66,
    0x66, 0x00, 0x33,
    0x66, 0x00, 0x00,
    0x33, 0xFF, 0xFF,
    0x33, 0xFF, 0xCC,
    0x33, 0xFF, 0x99,
    0x33, 0xFF, 0x66,
    0x33, 0xFF, 0x33,
    0x33, 0xFF, 0x00,
    0x33, 0xCC, 0xFF,
    0x33, 0xCC, 0xCC,
    0x33, 0xCC, 0x99,
    0x33, 0xCC, 0x66,
    0x33, 0xCC, 0x33,
    0x33, 0xCC, 0x00,
    0x33, 0x99, 0xFF,
    0x33, 0x99, 0xCC,
    0x33, 0x99, 0x99,
    0x33, 0x99, 0x66,
    0x33, 0x99, 0x33,
    0x33, 0x99, 0x00,
    0x33, 0x66, 0xFF,
    0x33, 0x66, 0xCC,
    0x33, 0x66, 0x99,
    0x33, 0x66, 0x66,
    0x33, 0x66, 0x33,
    0x33, 0x66, 0x00,
    0x33, 0x33, 0xFF,
    0x33, 0x33, 0xCC,
    0x33, 0x33, 0x99,
    0x33, 0x33, 0x66,
    0x33, 0x33, 0x33,
    0x33, 0x33, 0x00,
    0x33, 0x00, 0xFF,
    0x33, 0x00, 0xCC,
    0x33, 0x00, 0x99,
    0x33, 0x00, 0x66,
    0x33, 0x00, 0x33,
    0x33, 0x00, 0x00,
    0x00, 0xFF, 0xFF,
    0x00, 0xFF, 0xCC,
    0x00, 0xFF, 0x99,
    0x00, 0xFF, 0x66,
    0x00, 0xFF, 0x33,
    0x00, 0xFF, 0x00,
    0x00, 0xCC, 0xFF,
    0x00, 0xCC, 0xCC,
    0x00, 0xCC, 0x99,
    0x00, 0xCC, 0x66,
    0x00, 0xCC, 0x33,
    0x00, 0xCC, 0x00,
    0x00, 0x99, 0xFF,
    0x00, 0x99, 0xCC,
    0x00, 0x99, 0x99,
    0x00, 0x99, 0x66,
    0x00, 0x99, 0x33,
    0x00, 0x99, 0x00,
    0x00, 0x66, 0xFF,
    0x00, 0x66, 0xCC,
    0x00, 0x66, 0x99,
    0x00, 0x66, 0x66,
    0x00, 0x66, 0x33,
    0x00, 0x66, 0x00,
    0x00, 0x33, 0xFF,
    0x00, 0x33, 0xCC,
    0x00, 0x33, 0x99,
    0x00, 0x33, 0x66,
    0x00, 0x33, 0x33,
    0x00, 0x33, 0x00,
    0x00, 0x00, 0xFF,
    0x00, 0x00, 0xCC,
    0x00, 0x00, 0x99,
    0x00, 0x00, 0x66,
    0x00, 0x00, 0x33,
    0xEE, 0x00, 0x00,
    0xDD, 0x00, 0x00,
    0xBB, 0x00, 0x00,
    0xAA, 0x00, 0x00,
    0x88, 0x00, 0x00,
    0x77, 0x00, 0x00,
    0x55, 0x00, 0x00,
    0x44, 0x00, 0x00,
    0x22, 0x00, 0x00,
    0x11, 0x00, 0x00,
    0x00, 0xEE, 0x00,
    0x00, 0xDD, 0x00,
    0x00, 0xBB, 0x00,
    0x00, 0xAA, 0x00,
    0x00, 0x88, 0x00,
    0x00, 0x77, 0x00,
    0x00, 0x55, 0x00,
    0x00, 0x44, 0x00,
    0x00, 0x22, 0x00,
    0x00, 0x11, 0x00,
    0x00, 0x00, 0xEE,
    0x00, 0x00, 0xDD,
    0x00, 0x00, 0xBB,
    0x00, 0x00, 0xAA,
    0x00, 0x00, 0x88,
    0x00, 0x00, 0x77,
    0x00, 0x00, 0x55,
    0x00, 0x00, 0x44,
    0x00, 0x00, 0x22,
    0x00, 0x00, 0x11,
    0xEE, 0xEE, 0xEE,
    0xDD, 0xDD, 0xDD,
    0xBB, 0xBB, 0xBB,
    0xAA, 0xAA, 0xAA,
    0x88, 0x88, 0x88,
    0x77, 0x77, 0x77,
    0x55, 0x55, 0x55,
    0x44, 0x44, 0x44,
    0x22, 0x22, 0x22,
    0x11, 0x11, 0x11,
    0x00, 0x00, 0x00
};

#endif 
