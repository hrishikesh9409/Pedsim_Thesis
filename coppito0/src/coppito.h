#pragma once
#include <vector>
#include <iostream>
#include "loadscene.h"

extern double cell_length;
extern double cell_width;
extern int cell_no;

extern int vertical_cell_allocation_block;
extern int non_standard_vertical_cell_allocation;


struct vertex{
	double x;
	double y;
	bool wall;
};

struct cell_structure{
	int cell_number;
	bool door;
	int cell_next[8] = {999999};
	std::vector<std::vector<vertex> > cell_outline;
};

class Coppito{
private:

	vertex v[4];
	vertex start;
	
	//Temporary structures to hold the values of start.x and start.y
	vertex temp;

	vertex end[2];
	vertex iterator_vertices[2];

	cell_structure cs;
	
	std::vector<vertex> edge_vertices;
	//std::vector<std::vector<vertex> > cell;

	std::vector<cell_structure> cell;
	std::vector<std::vector<cell_structure> > block;

	void cell_structure_allocation(vertex start, vertex end[], int size);
	void vertical_cell_allocation(vertex start, vertex end[], int size);
	void non_standard_vertical_allocation(vertex start, vertex end[], int size);

public:
	Coppito();
	void divide_Cells();
	void print_cells();
	void print(std::vector<coordinates> scene_coordinates);
};