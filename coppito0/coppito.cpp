#include "coppito.h"

double cell_length = 22.5;
double cell_width = 15;

std::vector<std::vector<vertex> > cell_division;

Coppito::Coppito(){
}

void Coppito::print(std::vector<coordinates> scene_coordinates){
	for(int i = 0; i < scene_coordinates.size(); i++){
        std::cout << scene_coordinates[i].x1 << "," << scene_coordinates[i].y1 << " --> " << scene_coordinates[i].x2 << "," << scene_coordinates[i].y2 << std::endl;
    }
}

void Coppito::divide_Cells(std::vector<coordinates> scene_coordinates){
	for(int i = 0; i < scene_coordinates.size(); i++){
		v[0].x = scene_coordinates[i].x1;
		v[0].y = scene_coordinates[i].y1;

		v[1].x = scene_coordinates[i].x1 + cell_length;
		v[1].y = scene_coordinates[i].y1;		

		v[2].x = scene_coordinates[i].x1 + cell_length;
		v[2].y = scene_coordinates[i].y1 + cell_width;

		v[3].x = scene_coordinates[i].x1;
		v[3].y = scene_coordinates[i].y1 + cell_width;

		cell_coordinate.push_back(v[0]); 
		cell_coordinate.push_back(v[1]); 
		cell_coordinate.push_back(v[2]); 
		cell_coordinate.push_back(v[3]); 

		cell.push_back(cell_coordinate);	

		cell_coordinate.clear();
	}

	std::cout << std::endl;
	for(int i = 0; i < cell.size(); i++){
		std::cout << "Cell : " << i << " : " << std::endl;
		for(int j = 0; j < 4; j++){
			std::cout << cell[i][j].x << "," << cell[i][j].y << std::endl;
		}
		std::cout << std::endl;
	}

	cell_division = cell;

}
