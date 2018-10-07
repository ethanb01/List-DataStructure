#include "list.h"
#include <stdlib.h>
#include <stdio.h>



bool is_empty(List*);

Node* new_node(int num) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->value = num;
	node->next = NULL;
	return node;
}


// create list: gets void and returns new list
List* new_list(void) {
	List *lst = (List*)malloc(sizeof(List));
	lst->head = NULL;
	lst->last = NULL;
	lst->length = 0;
	return lst;
}

// function gets int and add Node to the list
void add_value(List* self, int num) {
	Node* to_add = new_node(num);
	if (is_empty(self)) {
		self->head = to_add;
		self->last = to_add;
	}
	else
	{
		self->last->next = to_add;
		self->last = to_add;
	}
	self->length++;
}

bool is_empty(List* self ) {
	return (self->length == 0);
}

void add_first(List* self, int num) {
	Node* first_to_add = new_node(num);
	first_to_add->next = self->head;
	self->head = first_to_add;
}


void reverse_list(List* self)
{
	Node* prev = NULL;
	Node* current = self->head;
	Node* next = NULL;
	while (current != NULL)
	{
		next = current->next;

		current->next = prev;

		prev = current;
		current = next;
	}
	self->head = prev;
}

void print_list(List* self) {
	while (!is_empty(self)) {
		printf("%d ", self->head->value);
		self->head = self->head->next;
	}
}
