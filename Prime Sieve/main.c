#include <stdio.h>
#include "Prime_Numbers.h"
#include <time.h>

int main()
{
	unsigned int n;
	/*unsigned int t;*/
	printf("The sieve will find all primes in the range 0 - N,\nwhere N is the natural number you will supply.\n\nSupply it N: ");
	scanf("%u",&n);

	/*t = clock();*/
	show("%u\t",primes(n));
	/*show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));*/
	/*t = clock() - t;
	printf("\n\nThe sieve took %ums to run.\n",t/(CLOCKS_PER_SEC/1000));*/
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}