#include "coppito.h"

using namespace std;

double cell_length = 22.5;
double cell_width = 15;
int cell_no = 1;

Coppito::Coppito(){
}

void Coppito::print(std::vector<coordinates> scene_coordinates){
	for(int i = 0; i < scene_coordinates.size(); i++){
        std::cout << scene_coordinates[i].x1 << "," << scene_coordinates[i].y1 << " --> " << scene_coordinates[i].x2 << "," << scene_coordinates[i].y2 << std::endl;
    }
}

void Coppito::print_cells(){
	cout << endl;
	for(int i = 0; i < block.size(); i++){
		cout << "Block :" << i << endl;
		for(int j = 0; j < block[i].size(); j++){
			cout << "Cell Number :" << block[i][j].cell_number << endl;
			for(int k = 0; k < block[i][j].cell_outline.size(); k++){
				for(int l = 0; l < 4; l++){
					cout << block[i][j].cell_outline[k][l].x << "," << block[i][j].cell_outline[k][l].y << endl;
				}
				cout << endl;
			}
		}
		cout << endl << endl << endl;
	}
}

void Coppito::cell_structure_allocation(vertex start, vertex end[], int size){

	local = start;	

	start = start;
	end[0] = end[0];
	end[1] = end[1];

	temp = start;

	//int i = 0;
	while(true){
		v[0].x = start.x;
		v[0].y = start.y;

		v[1].x = start.x + cell_length;
		v[1].y = start.y;

		v[2].x = start.x + cell_length;
		v[2].y = start.y + cell_width;

		v[3].x = start.x;
		v[3].y = start.y + cell_width;

		if((temp.x == local.x  && temp.y == local.y) && (start.x == local.x)){
			iterator_vertices[1].x = v[3].x;
			iterator_vertices[1].y = v[3].y;
			//cout << iterator_vertices[1].x << "," << iterator_vertices[1].y << endl;
		}

		edge_vertices.push_back(v[0]);
		edge_vertices.push_back(v[1]);
		edge_vertices.push_back(v[2]);
		edge_vertices.push_back(v[3]);

		cs.cell_number = cell_no;
		cs.cell_outline.push_back(edge_vertices);
		edge_vertices.clear();

		cell.push_back(cs);
		cs.cell_outline.clear();

		iterator_vertices[0].x = v[1].x;
		iterator_vertices[0].y = v[1].y;

		start = iterator_vertices[0];

		if(v[1].x == end[0].x){
			start = iterator_vertices[1];		
		}
		if(v[2].x == end[1].x && v[2].y == end[1].y){
			break;
		}
		//i++;
		cell_no++;
	}

	block.push_back(cell);
	cell.clear();

	cell_no++;
}

void Coppito::divide_Cells(){

	start.x = -120;
	start.y = -90.0;

	end[0].x = -7.5;
	end[0].y = -90.0;

	end[1].x = -7.5;
	end[1].y = -60.0;

	cell_structure_allocation(start, end, 2);

	start.x = 30.0;
	start.y = -90.0;

	end[0].x = 120.0;
	end[0].y = -90.0;

	end[1].x = 120.0;
	end[1].y = -60.0;

	cell_structure_allocation(start, end, 2);

	start.x = -97.5;
	start.y = -45.0;

	end[0].x = -7.5;
	end[0].y = -45.0;

	end[1].x = -7.5;
	end[1].y = 0.0;

	cell_structure_allocation(start, end, 2);

	print_cells();

	// for(int i  = 0; i < cell.size(); i++){
	// 	cout << "CELL NO. : " << i + 1 << endl;
	// 	for(int j = 0; j < 4; j++){
	// 		cout << cell[i][j].x << "," << cell[i][j].y << endl;
	// 	}
	// 	cout << endl;
	// }
}
