#ifndef __LANDSCAPE
#define __LANDSCAPE

#define TABS_EIGHT

typedef struct { int x,y; } location;

enum {START=0, ROWS=15, COLS=8};
const int grid[ROWS][COLS] = 
{
	{1,1,1,1,1,1,1,1}, {3,2,2,1,1,1,1,1}, {4,3,2,1,1,1,3,1},
	{3,3,5,2,2,4,3,1}, {6,4,3,3,2,4,3,1}, {3,5,2,2,2,2,3,1}, 
	{2,2,2,4,4,4,5,1}, {2,2,2,1,5,7,5,2}, {2,3,3,3,6,6,6,6}, 
	{8,7,7,7,7,7,7,6}, {1,1,2,6,6,6,6,6}, {1,1,2,2,7,7,7,7}, 
	{1,1,2,2,4,8,8,4}, {1,1,2,2,4,9,10,4}, {1,1,2,3,4,4,4,4}
};
	
void print_grid(void) 
{
	for (int i = 0; i <= COLS; ++i)
		printf("\t%d", i);
	printf("\n\t");

	for (int i = 0; i < COLS; ++i)
		printf(
#ifdef TABS_EIGHT
		"________"
#elif TABS_FOUR
		"____"
#endif
		);
	putchar('\n');

	for (int i = 0; i < ROWS; ++i) {
		printf("\t%d\t|", i+1);
		for (int j = 0; j < COLS; ++j) {
			printf("%d\t", grid[i][j]);
		}
		putchar('\n');
	}
}

void print_location(const location * pos)
{
	printf("\tx: %d, y: %d\n", pos->x, pos->y);
}


#endif
