/*****************************************************************************
  Title          : sortedargs.c
  Author         : Sam Tredgett
  Created on     : Februrary 28, 2026
  Description    : prints out args received from command line sorted by len
  Purpose        :
  Usage          : sortedargs <list of words>
  Build with     : gcc -o sortedargs sortedargs.c

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
#include <string.h>
#include <stdlib.h>

// lencmp is a comparison function for two strings, for use with things like qsort
int lencmp(const char* s1, const char* s2) {
    size_t s1_len = strlen(s1);
    size_t s2_len = strlen(s2);

    if (s1_len == s2_len) {
        return 0;
    } else if (s1_len > s2_len) {
        return 1;
    } else {
        return -1;
    }
}

// wrapper func for making lencmp work with void pointers
static int cmpstringp(const void *p1, const void *p2) {
    return lencmp(*(const char **) p1, *(const char **) p2);
}

int main( int argc, char *argv[])
{
    qsort(&argv[1], argc-1, sizeof(char *), cmpstringp);

    for(size_t j = 1; j < argc; j++)
        puts(argv[j]);

    exit(EXIT_SUCCESS);

}
