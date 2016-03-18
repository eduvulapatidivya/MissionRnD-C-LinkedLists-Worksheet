/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node*temp;
	struct node*temp1;
	int k;
	if (head == NULL)
		return NULL;
	else if (head->next == NULL)
		return head;
	else
	{
		for (temp = head; temp != NULL; temp = temp->next)
		{
			for (temp1 = temp->next; temp1 != NULL; temp1 = temp1->next)
			{
				if ((temp->num) > (temp1->num))
				{
					k = temp->num;
					temp->num = temp1->num;
					temp1->num = k;
				}
			}
		}
		return head;
	}
}