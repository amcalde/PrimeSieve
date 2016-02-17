#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define u64 long long unsigned 

char *BooleanIsComposite( int Limit )
{
	u64 Length, RootLimit, i, j;
	Length = (Limit - 1)/2;
	RootLimit = ((u64) sqrt( Limit ) - 1)/2;
	char *sieve = calloc( Length + 1, sizeof( char ) );
	for( i = 1; i <= RootLimit; ++i )
		if(! sieve[i] )							//2*i + 1 is prime
			for( j = 2*i*(i + 1); j <= Length; j += 2*i + 1 )
				sieve[j] = 1;
	return sieve;
}
