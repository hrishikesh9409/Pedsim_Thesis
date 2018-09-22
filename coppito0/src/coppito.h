#pragma once
#include <vector>
#include <iostream>

#define arc_SIZE 1024 //arc capacity --> sample value
#define MAX 100 //sample total number of people
#define NODE_SIZE 2048 //sample node size value
//SIZE = total number of arcs which is in turn derived from the number of nodes?

struct arc{
	int i; //source
	int j; //destination
};

class Coppito{
private:
	int Time[100]; //time units
	int count[5]; //time ticks

	int Acapacity[arc_SIZE];
	int Acapacity2[arc_SIZE];
	int Acapacity3[arc_SIZE];

	// float Coefficient[arc_SIZE];
	// float Coefficient2[arc_SIZE];
	// float Coefficient3[arc_SIZE];

	int People[NODE_SIZE];
	int NCapacity[NODE_SIZE];
	int NCapacity2[NODE_SIZE];
	int NCapacity3[NODE_SIZE];

	std::vector<arc> flow;  //x value
	std::vector<arc> state; //y value, i.e. state or number of ppl at i 


public:
	Coppito();
	void insert(std::vector<arc>& n, arc a);
	void print(std::vector<arc> &n);
};