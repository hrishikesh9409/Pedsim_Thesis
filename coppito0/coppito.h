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

extern std::vector<std::vector<vertex> > cell_division;

class Coppito{
private:
	vertex v[4];
	std::vector<vertex> cell_coordinate;
	std::vector<std::vector<vertex> > cell;

public:
	Coppito();
	void divide_Cells(std::vector<coordinates> scene_coordinates);
	void print(std::vector<coordinates> scene_coordinates);
};