#include <cstdio>
#include "landscape.hh"


const char* tabs = "________";

void print_grid(void)
{
	for (int i = 0; i <= COLS; ++i)
		printf("\t%d", i);
	printf("\n\t");

	for (int i = 0; i < COLS; ++i)
		printf(tabs);
	putchar('\n');

	for (int i = 0; i < ROWS; ++i) {
		printf("\t%d\t|", i+1);
		for (int j = 0; j < COLS; ++j) {
			printf("%d\t", grid[i][j]);
		}
		putchar('\n');
	}
}
