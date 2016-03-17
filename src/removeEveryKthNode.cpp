/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *temp;
	int count = 0, c=1,len=0,i=1,n=0,j;
	temp = head;
	if (head==NULL||K<=1)
	{
		return NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			count++;
			temp = temp->next;
		}
		len = count + 1;

		
		if (K > len)
			return head;

		else
		{ 
			for (j = 1; j <= len; j++)
			{
				if (j%K == 0)
				{
					n++;
				}
			}

		
			j = 0;
			i = 1;
			temp = head;
			while (j < n)
			{
				c = i + 1;
				if (c % K == 0)
				{
					temp->next = (temp->next)->next;
					j++;
					temp = temp ->next;
					i = i + 2;
				}
				else
				{
					temp = temp->next;
					i++;
				}
			}

			
			return head;
		}
	}
	
}