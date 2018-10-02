#include <cstdio>
#include <cstdlib>
#include <list>
#include <iostream>
#include "landscape.hh"
#include "search.hh"

void solve(search & algorithm);

int main(void)
{
	print_grid();
	return 0;
}

void solve(search & algorithm)
{
	print_grid();
	algorithm.print_position();
	char c;
	while ((c = getchar()) != 'q') {
		algorithm.solve_step();	
		algorithm.print_position();
	}
}
