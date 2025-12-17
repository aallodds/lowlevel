/*===========================================================================*/
/* Copyright (c) Grant Abernathy & Kendalynn Kohler. All rights reserved.    */
/* Copyright (c) Against All Odds. All rights reserved.                      */
/*                                                                           */
/* Licensed under the MIT License. See LICENSE in the project root for       */
/* license information.                                                      */
/*===========================================================================*/

/* File header */
#include "lol_endian.h"

/* entry point */
int main(void)
{
    printf("\n");
    printf("\n[lol_endian] | ===--- LSB and MSB ---===\n");
    lol_get_lsb();
    lol_get_msb();
    printf("\n");
    lol_get_endianness();
    lol_print_byte_order();
    printf("\n");
    return 0;
}