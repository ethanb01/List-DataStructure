#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	List* lst = new_list();
	add_value(lst, 2);
	add_value(lst, 4);
	add_first(lst, 5);
	//reverse_list(lst);
	print_list(lst);
	//printf("\n%d \n", number_events(lst));
	
	return EXIT_SUCCESS;
}