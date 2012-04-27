/* WARNING!!! if programs using these functions run out of free memory they will crush and burn! */

#ifndef _Linear_Linked_List_
#define _Linear_Linked_List_
#include <stdlib.h>
#include <stdio.h>

#define OBJECT unsigned int

typedef struct node_tag
{
	OBJECT content;
	struct node_tag *next;
} node;
typedef node *list;

#define initialize(list) (list = 0)

/* WARNING!!! the macros wont work properly if given "______6" or an    */
/* expression contaning it as an argument							    */
#define addtostart(data,list) \
		{\
			node *______6;\
			______6 = malloc(sizeof(node));\
			______6->content = data;\
			______6->next = list;\
			list = ______6;\
		}
#define add(data,position) \
		{\
			node *______6;\
			______6 = malloc(sizeof(node));\
			______6->content = data;\
			______6->next = position->next;\
			position->next = ______6;\
		}
/* the argument "position" contains the position of the added element after the call */
#define addbefore(data,position) \
		{\
			node *______6;\
			______6 = malloc(sizeof(node));\
			______6->content = position->content;\
			______6->next = position->next;\
			position->next = ______6;\
			position->content = data;\
		}
#define first(list) (list)
#define next(position) (position->next)				  /* we assume there is a next element */
#define empty(list) (list == 0)
/* a first element must exist */
#define deletefirst(list) \
		{\
			node *______6;\
			______6 = list;\
			list = list->next;\
			free(______6);\
		}
/* a next element must exist */
#define deletenext(position) \
		{\
			node *______6;\
			______6 = position->next;\
			position->next = ______6->next;\
			free(______6);\
		}
#define content(position) (position->content)
#define put(data,position) (position->content = data)

void show(char *format,list target);
unsigned int lengh(list target);					  /* the "int" may need to be replaced with "long" for very long lists */
node *find(OBJECT data,list target);				  /* the function is based on the assumption that the left operant of && evaluates before the right */
void addsorted(OBJECT data,list target);			  /* the list must be sorted. doesn't work with empty lists */
void sort(list target);								  /* doesn't work with empty lists */
list merge(list a, list b);
#endif