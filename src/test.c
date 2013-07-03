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

	int i = 0;
	for(i = 0; i < 5; i++) {
		Node *item = (Node *)malloc(sizeof(Node));
		item->data = i;
		item->next = NULL;
		add_list_item(item, &head);
	}
	printf("\n size = %d",get_list_size(head));
	display_list(head);

	dispose_list(&head);
	display_list(head);

	printf("\n");
    printf("exit");

	return 0;
}

