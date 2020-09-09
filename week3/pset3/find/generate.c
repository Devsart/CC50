/***************************************************************************
 * generate.c
 *
 * CC50
 * Pset 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 ***************************************************************************/
       
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMIT 65536

int
main(int argc, char *argv[])
{
    // Verifies if the number of arguments given excepts
    // or are under the expectable
    if (argc != 2 && argc != 3)
    {
        printf("Usage: %s n [s]\n", argv[0]);
        return 1;
    }

    // Transform the cli argument in an integer to do the operations
    int n = atoi(argv[1]);

    // Defines what to do with the 3rd argument (seed)
    // And then generates a randon seeds if you didn't given
    if (argc == 3)
        srand((unsigned int) atoi(argv[2]));
    else
        srand((unsigned int) time(NULL));

    // for n elements, prints a random element 
    // wich the maximum number is the LIMIT
    for (int i = 0; i < n; i++)
        printf("%d\n", rand() % LIMIT);

    // that's all folks
    return 0;
}
