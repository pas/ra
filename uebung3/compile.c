/* TODO: Task (b) Please fill in the following lines, then remove this line.
 *
 * author(s):   FIRSTNAME LASTNAME 
 *              (FIRSTNAME2 LASTNAME2)
 * modified:    2010-01-07
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include "memory.h"
#include "mips.h"
#include "compiler.h"
 
int main ( int argc, char** argv) {
    if (argc != 3) {
	printf("usage: %s expression filename\n", argv[0]);
    }
    else {
    	printf("Input:	%s\n", argv[1]);
	printf("Postfix: "); verbose = TRUE;
	compiler(argv[1], argv[2]);
	printf("\n");
	printf("MIPS binary saved to %s\n", argv[2]);
    }
    return EXIT_SUCCESS;
}

