#include "coppito.h"

double cell_length = 22.5;
double cell_width = 15;

Coppito::Coppito(){
}

void Coppito::print(std::vector<coordinates> scene_coordinates){
	for(int i = 0; i < scene_coordinates.size(); i++){
        std::cout << scene_coordinates[i].x1 << /*"," << scene_coordinates[i].y1 << " --> " << scene_coordinates[i].x2 << "," << scene_coordinates[i].y2 <<*/ std::endl;
    }

	//std::cout << cell_width << "    " << cell_length << std::endl;
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

		if(i == 2){
			for(int j = 0; j < cell_coordinate.size(); j++){
				std::cout << cell_coordinate[j].x << std::endl;
			}
		}

		// 	cell.push_back(cell_coordinate);
		// 	std::cout << cell.size() << std::endl;
		// 	for(int i = 0; i < cell.size(); i++){
		// 		for(int j = 0; j < cell_coordinate.size(); j++){
		// 			std::cout << cell[i][j].x << std::endl;
		// 		}
		// 	}
		// }
		
		// cell.push_back(cell_coordinate[0]);

		// if(i == 0){
		// 	for(int i = 0; i < cell.size(); i++){
		// 		for(int j = 0; j < cell_coordinate.size(); j++){
		// 			std::cout << cell[i][j].x << std::endl;
		// 		}
		// 	}
		// }
			
	}
	

	// std::cout << cell_coordinate.size() << std::endl;
	// for(int i = 0; i < 1; i++){
	// 	for(int j = 0; j < 4; j++){
	// 		if(j == 0){
	// 			Cells[i].x1 = cell_coordinate[j].x;
	// 			Cells[i].y1 = cell_coordinate[j].y;
	// 		}
	// 		if(j == 1){
	// 			Cells[i].x2 = cell_coordinate[j].x;
	// 			Cells[i].y2 = cell_coordinate[j].y;
	// 		}
	// 		if(j == 2){
	// 			Cells[i].x3 = cell_coordinate[j].x;
	// 			Cells[i].y3 = cell_coordinate[j].y;
	// 		}
	// 		if(j == 3){
	// 			Cells[i].x4 = cell_coordinate[j].x;
	// 			Cells[i].y4 = cell_coordinate[j].y;
	// 		}
	// 	}
	// }

	


	// std::cout << cell[0][0].x << " --> " << cell[0][3].x << std::endl;
	// std::cout << cell[0][0].y << " --> " << cell[0][3].y << std::endl;

	//std::cout << cell[4][3].x << std::endl;
	//std::cout << scene_coordinates[1].y1 << std::endl;
	//print(scene_coordinates);

	//std::cout << cell.size() << std::endl;
}
