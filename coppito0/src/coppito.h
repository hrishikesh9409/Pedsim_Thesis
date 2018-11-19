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
};

struct edge{
	double startx;
	double starty;

	double endx;
	double endy;

	bool wall;
	bool door;
};

struct cell_structure{
	int cell_number;
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
	std::vector<cell_structure> cell;
	std::vector<std::vector<cell_structure> > block;


	std::vector<edge> edge_wall;
	std::vector<edge> doorway;
	std::vector<edge> dwall;
	vertex wv;
	vertex dr;
	vertex dw;
	std::vector<vertex> walls;
	std::vector<vertex> doors;
	std::vector<vertex> door_wall;
	std::vector<std::vector<edge> > list_walls;
	std::vector<std::vector<edge> > list_doors;
	std::vector<std::vector<edge> > list_door_wall;

	void cell_structure_allocation(vertex start, vertex end[], int size);
	void vertical_cell_allocation(vertex start, vertex end[], int size);
	void non_standard_vertical_allocation(vertex start, vertex end[], int size);

	void wall_allocation();
	void wall_division_horizontal(std::vector<vertex> walls);
	void wall_division_vertical(std::vector<vertex> walls);

	void door_allocation();
	void door_assignment(std::vector<vertex> doors);
	void wall_inclusion();
	void door_wall_translation();
	void door_wall_assignment(std::vector<vertex> door_wall);
	void door_inclusion();

public:
	Coppito();
	void divide_Cells();
	void print_cells();
//	void print(std::vector<coordinates> scene_coordinates);
};