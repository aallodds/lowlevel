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