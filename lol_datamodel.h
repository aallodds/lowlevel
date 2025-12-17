#ifndef _lol_datamodel_h_
#define _lol_datamodel_h_

/* Core headers */
#include "lol_core.h"

/* size of char in bytes */
static const char lol_char_size = sizeof(char);
/* size of short in bytes */
static const char lol_short_size = sizeof(short);
/* size of int in bytes */
static const char lol_int_size = sizeof(int);
/* size of long in bytes */
static const char lol_long_size = sizeof(long);
/* size of pointer in bytes */
static const char lol_pointer_size = sizeof(void *);

/* size of char in bits */
static const char lol_char_size_bits = sizeof(char) * 8;
/* size of short in bits */
static const char lol_short_size_bits = sizeof(short) * 8;
/* size of int in bits */
static const char lol_int_size_bits = sizeof(int) * 8;
/* size of long in bits */
static const char lol_long_size_bits = sizeof(long) * 8;
/* size of pointer in bits */
static const char lol_pointer_size_bits = sizeof(void *) * 8;

/**
 * table of known data models
 * 
 * lp32
 * ilp32
 * lp64
 * llp64
 * 
 * !!! these are uncommon !!!
 * 
 * ilp64
 * silp64
 */
static const u8* lol_data_model[] =
{
    /* bytes: char, short, int, long, pointer */

    (u8[]){8, 16, 16, 32, 32}, /* lp32 */
    (u8[]){8, 16, 32, 32, 32}, /* ilp32 */
    (u8[]){8, 16, 32, 64, 64}, /* lp64 */
    (u8[]){8, 16, 32, 32, 64}, /* llp64 */
    (u8[]){8, 16, 64, 64, 64}, /* ilp64 */
    (u8[]){8, 16, 32, 64, 64}  /* silp64 */
};

/* function to print the size of the types in bytes */
void lol_print_data_model_bytes()
{
    printf("[lol_datamodel] | ===--- Data model Sizes (bytes) ---===\n");
    printf("[lol_datamodel] | char:    %d\n", lol_char_size);
    printf("[lol_datamodel] | short:   %d\n", lol_short_size);
    printf("[lol_datamodel] | int:     %d\n", lol_int_size);
    printf("[lol_datamodel] | long:    %d\n", lol_long_size);
    printf("[lol_datamodel] | pointer: %d\n", lol_pointer_size);
}

/* function to print the size of types in bits */
void lol_print_data_model_bits()
{
    printf("[lol_datamodel] | ===--- Data model Sizes (bits) ---===\n");
    printf("[lol_datamodel] | char:    %d\n", lol_char_size_bits);
    printf("[lol_datamodel] | short:   %d\n", lol_short_size_bits);
    printf("[lol_datamodel] | int:     %d\n", lol_int_size_bits);
    printf("[lol_datamodel] | long:    %d\n", lol_long_size_bits);
    printf("[lol_datamodel] | pointer: %d\n", lol_pointer_size_bits);
}

/* function to print the size of types both in bytes and bits */
void lol_print_datamodel_sizes()
{
    printf("[lol_datamodel] | ===--- Data model Sizes ---===\n");
    printf("[lol_datamodel] | char:       %d bytes (%d bits)\n", lol_char_size, lol_char_size_bits);
    printf("[lol_datamodel] | short:      %d bytes (%d bits)\n", lol_short_size, lol_short_size_bits);
    printf("[lol_datamodel] | int:        %d bytes (%d bits)\n", lol_int_size, lol_int_size_bits);
    printf("[lol_datamodel] | long:       %d bytes (%d bits)\n", lol_long_size, lol_long_size_bits);
    printf("[lol_datamodel] | pointer:    %d bytes (%d bits)\n", lol_pointer_size, lol_pointer_size_bits);
}

/* function to print the target data model */
void lol_print_datamodel()
{
    usize i;   /* iterator */
    for (i = 0; i < sizeof(lol_data_model)/sizeof(lol_data_model[0]); i++)
    {
        if (   lol_char_size_bits    == lol_data_model[i][0]
            && lol_short_size_bits   == lol_data_model[i][1]
            && lol_int_size_bits     == lol_data_model[i][2]
            && lol_long_size_bits    == lol_data_model[i][3]
            && lol_pointer_size_bits == lol_data_model[i][4])
        {
            switch (i)
            {
                case 0:
                    printf("[lol_datamodel] | Data model: lp32\n");
                    return;
                case 1:
                    printf("[lol_datamodel] | Data model: ilp32\n");
                    return;
                case 2:
                    printf("[lol_datamodel] | Data model: lp64\n");
                    return;
                case 3:
                    printf("[lol_datamodel] | Data model: llp64\n");
                    return;
                case 4:
                    printf("[lol_datamodel] | Data model: ilp64\n");
                    return;
                case 5:
                    printf("[lol_datamodel] | Data model: silp64\n");
                    return;
                default:
                    break;
            }
        }
    }
    printf("[lol_datamodel] | Data model: unknown\n");
}

#endif /* _lol_datamodel_h_ */