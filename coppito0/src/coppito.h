#pragma once
#include <vector>
#include <iostream>
#include "loadscene.h"

extern double cell_length;
extern double cell_width;
extern int cell_no;

extern int vertical_cell_allocation_block;
extern int non_standard_vertical_cell_allocation;

struct wall_vertices{
	double x;
	double y;
};

struct vertex{
	double x;
	double y;
	bool wall;
};

struct edge{
	double startx;
	double starty;

	double endx;
	double endy;
};

struct cell_structure{
	int cell_number;
	bool door;
	int cell_next[8];
	std::vector<edge> edge_line;
	std::vector<std::vector<edge> > cell_outline;
};

class Coppito{
private:

	vertex v[4];
	vertex start;
	
	//Temporary structures to hold the values of start.x and start.y
	vertex temp;

	vertex end[2];
	vertex iterator_vertices[2];

	edge e;
	cell_structure cs;
	
	std::vector<vertex> edge_vertices;
	std::vector<edge> edge_line;
	std::vector<cell_structure> cell;
	std::vector<std::vector<cell_structure> > block;


	std::vector<edge> edge_wall;

	wall_vertices wv;
	std::vector<wall_vertices> walls;
	std::vector<std::vector<edge> > list_walls;

	void cell_structure_allocation(vertex start, vertex end[], int size);
	void vertical_cell_allocation(vertex start, vertex end[], int size);
	void non_standard_vertical_allocation(vertex start, vertex end[], int size);

	void wall_allocation(std::vector<std::vector<cell_structure> > block);
	void wall_divison_horizontal(std::vector<wall_vertices> walls, std::vector<std::vector<cell_structure> > block);
	void wall_divison_vertical(std::vector<wall_vertices> walls, std::vector<std::vector<cell_structure> > block);

public:
	Coppito();
	void divide_Cells();
	void print_cells();
	void print(std::vector<coordinates> scene_coordinates);
};