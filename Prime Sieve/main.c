#include <stdio.h>
#include "Prime_Numbers.h"
#include <time.h>

int main()
{
	unsigned int t;
	t = clock();
	show("%u\t",primes(MAX));
	/*show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));
	show("%u\t",primes(MAX));*/
	t = clock() - t;
	printf("\n%u\n",t);
	system("PAUSE");
	return 0;
}