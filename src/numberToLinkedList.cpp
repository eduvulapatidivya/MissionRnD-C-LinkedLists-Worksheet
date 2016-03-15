/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node* insert1(int data, struct node *start1)
{
	struct node* nn1;
	nn1 = (struct node*)malloc(sizeof(struct node));
	nn1->num = data;
	nn1->next = NULL;

	if (start1 == NULL)
	{

		start1 = nn1;
	}
	else
	{
		nn1->next = start1;
		start1 = nn1;

	}

	return start1;
}




struct node * numberToLinkedList(int N) {

	int quo = 0;
	struct node *start1 = NULL;
	if (N < 0)
	{
		N = N*-1;
	}
	if (N == 0)
	{
		start1 = insert1(quo, start1);
	}
	while (N > 0)
	{
		quo = N % 10;
		start1 = insert1(quo, start1);
		N = N / 10;
	}
	return start1;

}