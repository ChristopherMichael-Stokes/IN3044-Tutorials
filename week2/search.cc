#include <iostream>
#include <list>
#include "search.hh"
#include "landscape.hh"

void search::print_position() const {
	std::cout << "\tcurrent position(x: " << position.x << ", y: ";
}

std::list<location> search::near_locations() const {
	std::list<location> locations;
	const int & x = position.x, y = position.y;

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
	return locations;
}

void hill_climb::solve_step() {

}

void tabu::solve_step() {

}
