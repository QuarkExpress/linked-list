/*
 * list.c
 *
 * Created on: Jul 1, 2013
 * Author: tbowker
 *
 * This file contains a basic implementation of a linked list written in c.
 * You are expected to create a list by allocating a head pointer by setting it
 * to NULL. The list head pointer is passed into the various functions that
 * operate on the list.
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include "list.h"


/**
 * Add new items to the end of the list. When adding the first item,
 * the list head pointer should be NULL.
 *
 * A pointer to a pointer is passed in as the list head so that the head
 * pointer can be set to the first item in the list in the case of an
 * empty list.
 */
void add_list_item(Node *item, Node **head)
{
    if(*head == NULL) {
        *head = item;
        return;
    }

    Node *current = *head;
    while(current->next != NULL) {
        current = current->next;
    }
    current->next = item;
    item->next = NULL;
    return;


}


/**
 * Returns the number of nodes in the linked list.
 */
int get_list_size(Node *head)
{
    if(head == NULL) {
        return 0;
    }
    unsigned int count = 0;
    Node *current = head;
    while(current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}


/**
 * Will free all the nodes in the list.
 * The head of the list will be set to NULL.
 */
void dispose_list(Node **head)
{
    Node *next;
    while(*head != NULL) {
        next = (*head)->next;
        free(*head);
        *head = next;
    }
}


/**
 * Debug the list by displaying it's contents.
 */
void display_list(Node *head)
{
    if(head == NULL) {
        printf("\nList is empty.");
        return;
    }
    Node *current = head;
    while(current != NULL) {
        printf("\nList Node:");
        printf("\n  data = %d",current->data);
        current = current->next;
    }

}
