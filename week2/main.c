#include <stdio.h>
#include <stdlib.h>
#include "landscape.h"
#include "list.h"

void solve(void (*search)(location *));

int main(void)
{
	printf("rows: %d, cols: %d\n", ROWS, COLS);
	print_grid();
	//char c = getchar();
	location a; a.x = 0; a.y = 0;
	print_location(&a);
	return 0;
}

void solve(void (*search)(location *)) 
{
	location position; 
	position.x = START; position.y = START;
	//int *x = &position.x, *y = &position.y;

	print_grid();

	printf("press any key to iterate, or \'q\' to stop");
	char c;
	while((c = getchar()) != 'q') {
		print_location(&position);	

		(*search)(&position);
	}
}
