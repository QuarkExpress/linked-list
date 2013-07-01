/*
 * list.c
 *
 *  Created on: Jul 1, 2013
 *      Author: tbowker
 */

#include<stdio.h>
#include<stdlib.h>
#include "list.h"



Node *add_item(Node *item, Node *head)
{
	if(head == NULL) {
		head = item;
		return head;
	}

	Node *current = head;
	while(current->next != NULL) {
		current = current->next;
	}
	current->next = item;
	item->next = NULL;
	return head;


}

int get_size(Node *list)
{
    if(list == NULL) {
    	return 0;
    }
    int count = 0;
    Node *current = list;
    while(current != NULL) {
    	count++;
    	current = current->next;
    }
    return count;
}


void display_list(Node *head)
{
	if(head == NULL) {
	    return;
	}
	Node *current = head;
    while(current != NULL) {
        printf("\nList Node:");
        printf("\n  data = %d",current->data);
        current = current->next;
    }

}
