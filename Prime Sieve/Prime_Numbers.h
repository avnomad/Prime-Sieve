#ifndef _Prime_Numbers_
#define _Prime_Numbers_

#include "Linear_Linked_List.h"
#define MAX 1000

typedef struct element_tag
{
	unsigned int number;
	struct element_tag *next;
	struct element_tag *previous;
} element;

list primes(unsigned int n);
list primes2(unsigned int n);

#endif