#include "coppito.h"

using namespace std;

double cell_length = 22.5;
double cell_width = 15;

Coppito::Coppito(){
}

void Coppito::print(std::vector<coordinates> scene_coordinates){
	for(int i = 0; i < scene_coordinates.size(); i++){
        std::cout << scene_coordinates[i].x1 << "," << scene_coordinates[i].y1 << " --> " << scene_coordinates[i].x2 << "," << scene_coordinates[i].y2 << std::endl;
    }
}

void Coppito::divide_Cells(){

	start.x = -120;
	start.y = -90.0;

	temp = start;

	end[0].x = -7.5;
	end[0].y = -90.0;

	end[1].x = -7.5;
	end[1].y = -60.0;

	//int i = 0;
	while(true){
		cs[0].x = start.x;
		cs[0].y = start.y;

		cs[1].x = start.x + cell_length;
		cs[1].y = start.y;

		cs[2].x = start.x + cell_length;
		cs[2].y = start.y + cell_width;

		cs[3].x = start.x;
		cs[3].y = start.y + cell_width;

		if((temp.x == -120.0 && temp.y == -90.0) && (start.x == -120.0 && start.y == -90.0)){
			iterator_vertices[1].x = cs[3].x;
			iterator_vertices[1].y = cs[3].y;
		}

		edge_vertices.push_back(cs[0]);
		edge_vertices.push_back(cs[1]);
		edge_vertices.push_back(cs[2]);
		edge_vertices.push_back(cs[3]);

		cell.push_back(edge_vertices);
		edge_vertices.clear();

		iterator_vertices[0].x = cs[1].x;
		iterator_vertices[0].y = cs[1].y;

		start = iterator_vertices[0];

		if(cs[1].x == end[0].x){
			start = iterator_vertices[1];		
		}
		if(cs[2].x == end[1].x && cs[2].y == end[1].y){
			break;
		}
		//i++;
	}

	edge_vertices.clear();

	start.x = 30.0;
	start.y = -90.0;

	temp = start;

	end[0].x = 120.0;
	end[0].y = -90.0;

	end[1].x = 120.0;
	end[1].y = -60.0;

	//int i = 0;
	while(true){
		cs[0].x = start.x;
		cs[0].y = start.y;

		cs[1].x = start.x + cell_length;
		cs[1].y = start.y;

		cs[2].x = start.x + cell_length;
		cs[2].y = start.y + cell_width;

		cs[3].x = start.x;
		cs[3].y = start.y + cell_width;

		if((temp.x == 30.0 && temp.y == -90.0) && (start.x == 30.0 && start.y == -90.0)){
			iterator_vertices[1].x = cs[3].x;
			iterator_vertices[1].y = cs[3].y;
		}

		edge_vertices.push_back(cs[0]);
		edge_vertices.push_back(cs[1]);
		edge_vertices.push_back(cs[2]);
		edge_vertices.push_back(cs[3]);

		cell.push_back(edge_vertices);
		edge_vertices.clear();

		iterator_vertices[0].x = cs[1].x;
		iterator_vertices[0].y = cs[1].y;

		start = iterator_vertices[0];

		if(cs[1].x == end[0].x){
			start = iterator_vertices[1];		
		}
		if(cs[2].x == end[1].x && cs[2].y == end[1].y){
			break;
		}
		//i++;
	}

	for(int i  = 0; i < cell.size(); i++){
		cout << "CELL NO. : " << i + 1 << endl;
		for(int j = 0; j < 4; j++){
			cout << cell[i][j].x << "," << cell[i][j].y << endl;
		}
		cout << endl;
	}
}
