/*
 * main.c
 *
 * Created on: Jun 30, 2013
 * Author: tbowker
 */

#include<stdio.h>
#include<stdlib.h>
#include"list.h"


int main(int argc, char *argv[])
{
	printf("start");

	Node *head = NULL;

	// add a bunch of items
	int i = 0;
	for(i = 0; i < 5; i++) {
		Node *item = (Node *)malloc(sizeof(Node));
		item->data = i;
		item->next = NULL;
		head = add_item(item, head);
	}
	printf("\n size = %d",get_size(head));
	display_list(head);

    printf("\nexit");

	return 0;
}

