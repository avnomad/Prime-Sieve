//	Copyright (C) 2006, 2008, 2012 Vaptistis Anogeianakis <nomad@cornercase.gr>
/*
 *	This file is part of Prime Sieve.
 *
 *	Prime Sieve is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	Prime Sieve is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with Prime Sieve.  If not, see <http://www.gnu.org/licenses/>.
 */

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