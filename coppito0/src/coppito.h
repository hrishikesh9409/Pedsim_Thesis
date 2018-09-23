#pragma once
#include <vector>
#include <iostream>
#include "loadscene.h"

extern double cell_length;
extern double cell_width;

struct vertex{
	double x;
	double y;
};

// struct cell{
// 	double x1;
// 	double y1;

// 	double x2;
// 	double y2;

// 	double x3;
// 	double y3;

// 	double x4;
// 	double y4;
// };

class Coppito{
private:
	vertex v[4];

	//std::vector<cell> Cells;
	std::vector<vertex> cell_coordinate;
	//std::vector<std::vector<vertex> > cell;

public:
	Coppito();
	void divide_Cells(std::vector<coordinates> scene_coordinates);
	void print(std::vector<coordinates> scene_coordinates);
};