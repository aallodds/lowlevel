/*===========================================================================*/
/* Copyright (c) Grant Abernathy & Kendalynn Kohler. All rights reserved.    */
/* Copyright (c) Against All Odds. All rights reserved.                      */
/*                                                                           */
/* Licensed under the MIT License. See LICENSE in the project root for       */
/* license information.                                                      */
/*===========================================================================*/

#ifndef _lol_endian_h_
#define _lol_endian_h_

/* Core headers */
#include "lol_core.h"

/* test value */
static const u32 lol_endian_test_value = 0x01020304;
/* pointer to the bytes */
static u8* lol_endian_test_bytes = (u8 *)&lol_endian_test_value;

/**
 * table of known endianness models
 * 
 * little-endian
 * big-endian
 * 
 * !!! pdp-endian is uncommon, so i don't know if this is right !!!
 * 
 * pdp-endian small word
 * pdp-endian big word
 * pdp-endian mixed word
 */
static const u8* lol_endian_models[] = 
{
    (u8[]){0x04, 0x03, 0x02, 0x01}, /* little-endian */
    (u8[]){0x01, 0x02, 0x03, 0x04}, /* big-endian */
    (u8[]){0x03, 0x04, 0x01, 0x02}, /* pdp-endian small word */
    (u8[]){0x02, 0x01, 0x04, 0x03}, /* pdp-endian big word */
    (u8[]){0x02, 0x03, 0x04, 0x01}  /* pdp-endian mixed word */
};

/* function to print the byte order */
void lol_print_byte_order()
{
    usize i;
    printf("[lol_endian] | Byte order:  ");
    for (i = 0; i < sizeof(lol_endian_test_value); i++)
    {
        printf("0x%02X ", lol_endian_test_bytes[i]);
    }
    printf("\n");
}

/* function to get the lsb */
void lol_get_lsb()
{
    printf("[lol_endian] | LSB byte: 0x%02X\n", lol_endian_test_bytes[0]);
}

/* function to get the msb */
void lol_get_msb()
{
    printf("[lol_endian] | MSB byte: 0x%02X\n", lol_endian_test_bytes[3]);
}

/* function to get the endianness */
void lol_get_endianness()
{
    printf("[lol_endian] | ===--- Endianness ---===\n");
    usize i;   /* iterator */
    for (i = 0; i < sizeof(lol_endian_models)/sizeof(lol_endian_models[0]); i++)
    {
        if (   lol_endian_test_bytes[0] == lol_endian_models[i][0]
            && lol_endian_test_bytes[1] == lol_endian_models[i][1]
            && lol_endian_test_bytes[2] == lol_endian_models[i][2]
            && lol_endian_test_bytes[3] == lol_endian_models[i][3])
        {
            switch (i)
            {
                case 0:
                    printf("[lol_endian] | Endianness:  Little-endian\n");
                    return;
                case 1:
                    printf("[lol_endian] | Endianness:  Big-endian\n");
                    return;
                case 2:
                    printf("[lol_endian] | Endianness:  PDP-endian small word\n");
                    return;
                case 3:
                    printf("[lol_endian] | Endianness:  PDP-endian big word\n");
                    return;
                case 4:
                    printf("[lol_endian] | Endianness:  PDP-endian mixed word\n");
                    return;
                default:
                    printf("[lol_endian] | Endianness:  Unknown\n");
                    return;
            }
        }
    }
    printf("[lol_endian] |  Endianness: Unknown\n");
}

#endif /* _lol_endian_h_ */