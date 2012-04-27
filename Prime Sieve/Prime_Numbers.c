#include "Prime_Numbers.h"



list primes(unsigned int n)
{
	static element pool[MAX/2];
	static element *blacklist[MAX/4];
	element *current,*multiplier;
	unsigned int counter,ereaser,product;
	list primepool;
	node *p;
	unsigned int t;

	t = clock();
	printf("\nstart at: %u\n",t);
	initialize(primepool);
	n = n/2-1;
	/* initialize the pool of natural numbers */
	pool[0].number = 3;
	pool[0].next = &pool[1];
	for(counter=1;counter<n-1;counter++)
	{
		pool[counter].number = counter*2+3;
		pool[counter].next = &pool[counter+1];
		pool[counter].previous = &pool[counter-1];
	}
	pool[n-1].number = n*2+1;
	pool[n-1].next = 0;
	pool[n-1].previous = &pool[n-2];

	/* add '2' to the list */
	addtostart(2,primepool);

	/* start the main loop */
	n = 2*(n+1);
	p = first(primepool);
	multiplier = current = pool;
	product = current->number*multiplier->number;
	while(product<=n)
	{
		add(current->number,p);
		p = next(p);
		ereaser = 0;
		while(product<=n)
		{
			/*printf("|%u|",product);*/
			blacklist[ereaser++] = &pool[product/2-1];
			printf("-%u-",blacklist[ereaser-1]->number);
			multiplier = multiplier->next;
			product = current->number*multiplier->number;
		}		
		while(ereaser--)
		{
			/*printf("^%u^",blacklist[ereaser]->number);*/
			blacklist[ereaser]->previous->next = blacklist[ereaser]->next;
			if (blacklist[ereaser]->next) blacklist[ereaser]->next->previous = blacklist[ereaser]->previous;
		}
		puts("\n");
		system("PAUSE");
		/*printf("++!++",product);*/
		multiplier = current = current->next;
		product = current->number*multiplier->number;
	}

	/* add the rest primes to the list */
	while(current)
	{
		add(current->number,p);
		p = next(p);
		current = current->next;
	}

	/* finished. */
	t = clock() - t;
	printf("\nTime: %u\n",t);
	system("PAUSE");
	return primepool;
}

list primes2(unsigned int n)
{
	list primepool;
	node *p;
	static unsigned char pool[MAX/2];
	unsigned int counter;
	unsigned int multiple,number;
	unsigned int t;

	t = clock();
	printf("\nstart at: %u\n",t);

	initialize(primepool);
	n = n/2-1;
		/* initialize the pool of natural numbers */
	for(counter = 0;counter<n;counter++)
		pool[counter] = 1;

		/* add '2' to the list */
	addtostart(2,primepool);
	p = first(primepool);

	n = 2*(n+1);
	counter = 0;
	while((multiple = (number = counter*2+3)*number)<n)
	{

		/*printf("->%u",number);
		system("PAUSE");*/

		if (pool[counter])
		{			
			add(number,p);
			p = next(p);
			number = 2*number;
			while (multiple<n)
			{
				pool[(multiple-3)/2] = 0;
				multiple += number;
			}
		}
		counter++;
	}

	n = n/2-1;
	for(;counter<n;counter++)
	{
		if (pool[counter])
		{
			add(2*counter+3,p);
			p = next(p);
		}
	}

	t = clock() - t;
	printf("\nTime: %u\n",t);
	system("PAUSE");
	return primepool;
}
