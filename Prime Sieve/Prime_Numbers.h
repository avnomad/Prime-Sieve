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