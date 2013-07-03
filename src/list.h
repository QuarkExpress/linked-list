/*
 * linkedlist.h
 *
 *  Created on: Jul 1, 2013
 *      Author: tbowker
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_



typedef struct node
{
	int data;
	struct node *next;
} Node;


void add_list_item(Node *item, Node **head);

int get_list_size(Node *list);

void display_list(Node *head);

void dispose_list(Node **head);


#endif /* LINKEDLIST_H_ */
