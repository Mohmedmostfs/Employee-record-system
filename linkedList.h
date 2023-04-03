#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdlib.h>
#include <stdio.h>

typedef int node_type;

typedef struct tag_node{
    char name[50];
    unsigned int age;
    node_type salary;
    char titel[50];
    unsigned int ID;

    struct tag_node * next;
}node_t;






void create_new_empoyee(node_t *head_ptr);
void delete_employee_data(node_t **head ,node_t **head_ptr);
void print_Empolyee_data(node_t *head);
void print_Empolyee_all_data(node_t *head);
int modyfay_employee_data(node_t *head );


#endif
