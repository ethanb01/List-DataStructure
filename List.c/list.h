#include <stdbool.h>

typedef struct Node {
	int value;
	struct Node* next;
} Node;

typedef struct List {
	Node* head;
	Node* last;
	int length;
	int count_evens;
} List;

List* new_list(void);
void add_value(List*, int);
bool is_empty(List*);
void add_first(List*,int);
void print_list(List*);
void reverse_list(List*);
int number_events(List*);




