#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	List* lst = new_list();
	add_value(lst, 10);
	add_value(lst, 11);
	add_first(lst, 111);
	reverse_list(lst);
	print_list(lst);
	
	return EXIT_SUCCESS;
}