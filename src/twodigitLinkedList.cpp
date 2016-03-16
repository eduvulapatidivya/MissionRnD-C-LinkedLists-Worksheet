 /*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};
int gen_number(int sum, int data)
{
	sum = sum * 10 + data;
	return sum;
}

int convert_sll_2digit_to_int(struct node *head){
	int sum = 0,data1,data2;
	struct node*temp;
	temp = head;
	while (temp->next != NULL)
	{
		data1 = temp->digit1;
		sum=gen_number(sum, data1);
		data2 = temp->digit2;
		sum=gen_number(sum, data2);
		temp = temp->next;
	
	}
	data1 = temp->digit1;
	sum = gen_number(sum, data1);
	data2 = temp->digit2;
	sum = gen_number(sum, data2);
	return sum;
}
