#pragma once
#include <vector>
#include <iostream>
#include "loadscene.h"

extern double cell_length;
extern double cell_width;


struct cell_structure{
	double x;
	double y;
};

class Coppito{
private:

	cell_structure cs[4];
	cell_structure start;
	cell_structure temp;
	cell_structure end[2];
	cell_structure iterator_vertices[2];
	
	std::vector<cell_structure> edge_vertices;
	std::vector<std::vector<cell_structure> > cell;

public:
	Coppito();
	void divide_Cells();
	void print(std::vector<coordinates> scene_coordinates);
};