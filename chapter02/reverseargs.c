/*****************************************************************************
  Title          : reverseargs.c
  Author         : Sam Tredgett
  Created on     : Februrary 28, 2026
  Description    : prints out words received on command line in reverse order
  Purpose        :
  Usage          : reverseargs <list of words>
  Build with     : gcc -o reverseargs reverseargs.c

******************************************************************************
* Copyright (C) 2025 - Stewart Weiss                                         *
*                                                                            *
* This code is free software; you can use, modify, and redistribute it       *
* under the terms of the GNU General Public License as published by the      *
* Free Software Foundation; either version 3 of the License, or (at your     *
* option) any later version. This code is distributed WITHOUT ANY WARRANTY;  *
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A      *
* PARTICULAR PURPOSE. See the file COPYING.gplv3 for details.                *
*****************************************************************************/
#include <stdio.h>

int main( int argc, char *argv[])
{
    printf("%s arguments:\n", argv[0]);
    int i = 0;

    while ( argv[i] != NULL) {
        i++; // get the end position of the final item in the args list
    }
    i--; // decrement so we back off from the NULL pointer at end of args

    while (i > 0) {
        printf("%s\n", argv[i]);
        i--;
    }

    return 0;
}
