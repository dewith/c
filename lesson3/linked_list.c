/*
 * Program: Linked list
 * Author: Udacity
 * Date: 2025-06-07
 * Description: Implementation of a linked list in C.
 */

#include <stdio.h>
#include <stdlib.h>

// base structures
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
} LinkedList;


void add_node(LinkedList *list, int data) {
    // create a new node
    Node *new_node = (Node *) malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // set the data and next pointer
    new_node->data = data;
    new_node->next = NULL;

    // add the node to the list
    if (list->head == NULL) {
        // if the list is empty, add the new node as the head and tail
        list->head = new_node;
        list->tail = new_node;
    } else {
        // else, add the new node to the end of the list
        list->tail->next = new_node;
        list->tail = new_node;
    }

    printf("| Added %d to the list\n", data);
}


void remove_node(LinkedList *list, int data) {
    // check if the list is empty
    if (list->head == NULL) {
        printf("| List is empty. Can't remove %d item.\n", data);
        return;
    }

    // find the node to remove
    Node *prev_node = NULL;
    Node *current_node = list->head;

    // if the first node is the one to remove
    if (current_node->data == data) {
        // change head of the list
        list->head = current_node->next;
        // if the list is now empty, update tail
        if (list->head == NULL) list->tail = NULL;

        // free the node
        free(current_node);
        printf("| Removed item %d from list\n", data);
        return;
    }

    // find the node to remove
    while (current_node != NULL && current_node->data != data) {
        prev_node = current_node;
        current_node = current_node->next;
    }

    // if the node is not found in the list, return
    if (current_node == NULL) {
        printf("| Item %d not found in list\n", data);
        return;
    }

    // remove the node
    prev_node->next = current_node->next;
    if (current_node == list->tail) list->tail = prev_node;
    free(current_node);
    printf("| Removed item %d from list\n", data);
    
}


void print_list(LinkedList *list) {
    printf("| List: ");

    // check if the list is empty
    if (list->head == NULL) {
        printf("EMPTY\n");
        return;
    }

    // print the list
    Node *current_node = list->head;
    
    while (current_node != NULL) {
        printf("%d -> ", current_node->data);
        current_node = current_node->next;
    }
    printf("NULL\n");
}


void free_list(LinkedList *list) {
    // free the allocated memory
    Node *current_node = list->head;
    while (current_node != NULL) {
        Node *next_node = current_node->next;
        free(current_node);
        current_node = next_node;
    }
    list->head = NULL;
    list->tail = NULL;
}

int main() {
    LinkedList list = {NULL, NULL};
    char option;

    printf("Option (1) Add a node\n");
    printf("Option (2) Remove a node\n");
    printf("Option (3) Print the list\n");
    printf("Option (4) Exit\n");
    
    printf("----------------\n");
    printf("Enter your option: ");
    scanf(" %c", &option);

    while (option == '1' || option == '2' || option == '3' || option == '4') {
        int item;
        switch (option) {
            case '1': 
                printf("| Enter item to add: ");
                scanf("%d", &item);
                add_node(&list, item);
                break;
            case '2': 
                printf("| Enter item to remove: ");
                scanf("%d", &item);
                remove_node(&list, item);
                break;
            case '3': 
                print_list(&list);
                break;
            case '4': 
                printf("| Freeing allocated memory and exiting.\n");
                free_list(&list);
                return 0;
            default: 
                printf("| Invalid option. Please try again.\n");
                break;
        }

        printf("----------------\n");
        printf("Enter your option: ");
        scanf(" %c", &option);
    }

    free_list(&list);
    return 0;
}