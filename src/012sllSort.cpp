/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *temp;
	struct node *temp1;
	int count = 0, i = 0,k=0;
	temp = head;
	while ((temp->next) != NULL)
	{
		if (temp->data == (temp->next)->data)
		{
			count++;
			
		}
		i++;
		temp = temp->next;
	}
	if (count != i)
	{
		for (temp = head; temp != NULL; temp = temp->next)
		{
			for (temp1 = temp->next; temp1 != NULL; temp1 = temp1->next)
			{
				if ((temp->data) > (temp1->data))
				{
					k = temp->data;
					temp->data = temp1->data;
					temp1->data = k;
				}
			}
		}
	}
	
}