#ifndef __SEARCH
#define __SEARCH

#include <list>
#include "landscape.hh"

struct location {
	int x, y;
	location(int x=0, int y=0) : x{ x }, y{ y }{}
};

class search {
private:
	std::list<location> open_list, closed_list;
protected:
	location position;
	std::list<location> near_locations() const;
public:
	void print_position() const;
	virtual void solve_step() = 0;
	virtual ~search() {}
};

class hill_climb : public search {
public:
	virtual void solve_step() override;
};

class tabu : public search {
private:
	size_t list_size;

public:
	tabu(size_t list_size) : list_size{list_size} {}
	virtual void solve_step() override;
};

#endif
