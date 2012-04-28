//	Copyright (C) 2006, 2008, 2012 Vaptistis Anogeianakis <el05208@mail.ntua.gr>
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

#include "Linear_Linked_List.h"

void show(char *format,list target)
{
	while (target)
	{
		printf(format,target->content);
		target = target->next;
	}
	return;
}

unsigned int lengh(list target)
{
	register unsigned int counter=0;
	while (target)
	{
		counter++;
		target = target->next;
	}
	return counter;
}

node *find(OBJECT data,list target)
{
	while (target && target->content!=data)
	{
		target = target->next;
	}
	if(target && target->content == data)
		return target;
	else
		return 0;
}

void addsorted(OBJECT data,list target)
{
	while (target->next)
	{
		if (target->content>=data)
			break;
		target = target->next;
	}
	if (target->content>data)
		addbefore(data,target)
	else
		add(data,target);
}

void sort(list target)
{
	node *p,*temp;

	p = target->next;
	target->next = 0;
	while (p)
	{
		temp = p;
		p = p->next;
		addsorted(temp->content,target);
		free(temp);
	}
}

list merge(list a, list b)
{
	list c;
	node *p;

	if (a && b)
	{
		if (a->content<b->content)
		{
			c = a;
			a = a->next;
		}
		else
		{
			c = b;
			b = b->next;
		}
		p = c;
		while (a && b)
			if (a->content<b->content)
			{
				p->next = a;
				p = a;
				a = a->next;				
			}
			else
			{
				p->next = b;
				p = b;
				b = b->next;				
			}
		if (a)
			p->next = a;
		else
			p->next = b;
	}
	else
		if (a)
			c = a;
		else
			c = b;
	return c;
}

