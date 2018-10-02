#include <cstdio>
#include <cstdlib>
#include <list>
#include <iostream>
#include "landscape.hh"
#include "search.hh"

void solve(search & algorithm);

int main(void)
{
	printf("rows: %d, cols: %d\n", ROWS, COLS);
	print_grid();
	std::list<location> locations;
	int x = 0, y = 0;

	locations.push_back(location(x, y + 1));
	locations.push_back(location(x, y - 1));
	locations.push_back(location(x + 1, y));
	locations.push_back(location(x + 1, y - 1));
	locations.push_back(location(x + 1, y + 1));
	locations.push_back(location(x - 1, y - 1));
	locations.push_back(location(x - 1, y + 1));
	locations.push_back(location(x - 1, y));
	locations.remove_if([](location pos) {
			return ((pos.x < 0 || pos.x >= COLS) ||
					(pos.y < 0 || pos.y >= ROWS));
			});
	std::cout << locations.size() << '\n';	
	return 0;
}

void solve(search & algorithm)
{
	algorithm.print_position();
	char c;
	while ((c = getchar()) != 'q') {
		algorithm.solve_step();	
		algorithm.print_position();
	}
}
