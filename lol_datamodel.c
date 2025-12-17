/*===========================================================================*/
/* Copyright (c) Grant Abernathy & Kendalynn Kohler. All rights reserved.    */
/* Copyright (c) Against All Odds. All rights reserved.                      */
/*                                                                           */
/* Licensed under the MIT License. See LICENSE in the project root for       */
/* license information.                                                      */
/*===========================================================================*/

/* File header */
#include "lol_datamodel.h"

/* entry point */
int main(void)
{
    printf("\n");
    lol_print_datamodel_sizes();
    printf("\n[lol_datamodel] | ===--- Data Model ---===\n");
    lol_print_datamodel();
    printf("\n");
    return 0;
}