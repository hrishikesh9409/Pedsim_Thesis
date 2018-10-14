#include "coppito.h"

using namespace std;

#define MAX 999999;

double cell_length = 22.5;
double cell_width = 15.0;

int vertical_cell_allocation_block = 14;
int non_standard_vertical_cell_allocation = 18;

int cell_no = 1;

Coppito::Coppito(){
	for(int i = 0; i < 8; i++){
		cs.cell_next[i] = MAX;
	}

	e.wall = false;
	e.door = false;
}

/*void Coppito::print(std::vector<coordinates> scene_coordinates){
	for(int i = 0; i < scene_coordinates.size(); i++){
        std::cout << scene_coordinates[i].x1 << "," << scene_coordinates[i].y1 << " --> " << scene_coordinates[i].x2 << "," << scene_coordinates[i].y2 << std::endl;
    }
}*/

void Coppito::wall_door_inclusion(){

}


void Coppito::print_cells(){
	cout << endl;
	for(int i = 0; i < block.size(); i++){
		cout << "Block :" << i << endl;
		for(int j = 0; j < block[i].size(); j++){
			cout << "Cell Number :" << block[i][j].cell_number << endl;
			// for(int p = 0; p < 8; p++){
			// 	cout << "Cell Next :" << block[i][j].cell_next[p] << endl;
			// }
			for(int k = 0; k < block[i][j].cell_outline.size(); k++){
				for(int l = 0; l < 4; l++){
					cout << "(" << block[i][j].cell_outline[k][l].startx << "," << block[i][j].cell_outline[k][l].starty << ")" << " --> " << "(" << block[i][j].cell_outline[k][l].endx << "," << block[i][j].cell_outline[k][l].endy << ")" /*<< "\twall = " << block[i][j].cell_outline[k][l].wall << "\tdoor = " << block[i][j].cell_outline[k][l].door*/ << endl;
				}
				cout << endl;
			}
		}
		cout << endl << endl << endl;
	}
}

void Coppito::door_assignment(std::vector<vertex> doors){
	edge temp_door;

	temp_door.startx = doors[0].x;
	temp_door.starty = doors[0].y;
	temp_door.endx = doors.back().x;
	temp_door.endy = doors.back().y;

	doorway.push_back(temp_door);
	list_doors.push_back(doorway);
	doorway.clear();
}

void Coppito::door_allocation(){

	//DOOR 0:
	dr.x = -102.5;
	dr.y = -60.0;

	doors.push_back(dr);

	dr.x = -97.5;
	dr.y = -60.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	// for(int i = 0; i < doors.size(); i++){
	// 	cout << doors[i].x << ", " << doors[i].y << endl;
	// }

	//DOOR 1:
	dr.x = -97.5;
	dr.y = -60.0;

	doors.push_back(dr);

	dr.x = -92.5;
	dr.y = -60.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 2:
	dr.x = -66.25;
	dr.y = -60.0;

	doors.push_back(dr);

	dr.x = -61.25;
	dr.y = -60.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 3:
	dr.x = -35.0;
	dr.y = -60.0;

	doors.push_back(dr);

	dr.x = -30.0;
	dr.y = -60.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 4:
	dr.x = -12.5;
	dr.y = -60.0;

	doors.push_back(dr);

	dr.x = -7.5;
	dr.y = -60.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 5:
	dr.x = 12.5;
	dr.y = -60.0;

	doors.push_back(dr);

	dr.x = 17.5;
	dr.y = -60.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 6:
	dr.x = 38.75;
	dr.y = -60.0;

	doors.push_back(dr);

	dr.x = 43.75;
	dr.y = -60.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 7:
	dr.x = 70.0;
	dr.y = -60.0;

	doors.push_back(dr);

	dr.x = 75.0;
	dr.y = -60.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 8:
	dr.x = 80.0;
	dr.y = -60.0;

	doors.push_back(dr);

	dr.x = 85.0;
	dr.y = -60.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 9:
	dr.x = 102.5;
	dr.y = -60.0;

	doors.push_back(dr);

	dr.x = 107.5;
	dr.y = -60.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 10:
	dr.x = -120.0;
	dr.y = -35.0;

	doors.push_back(dr);

	dr.x = -120.0;
	dr.y = -30.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 11:
	dr.x = 92.5;
	dr.y = -30.0;

	doors.push_back(dr);

	dr.x = 97.5;
	dr.y = -30.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 12:
	dr.x = -52.5;
	dr.y = -5.0;

	doors.push_back(dr);

	dr.x = -52.5;
	dr.y = 0.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 13:
	dr.x = -7.5;
	dr.y = -5.0;

	doors.push_back(dr);

	dr.x = -7.5;
	dr.y = 0.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 14:
	dr.x = 97.5;
	dr.y = -15.0;

	doors.push_back(dr);

	dr.x = 102.5;
	dr.y = -15.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 15:
	dr.x = -97.5;
	dr.y = 30.0;

	doors.push_back(dr);

	dr.x = -92.5;
	dr.y = 30.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 16:
	dr.x = -75.0;
	dr.y = 30.0;

	doors.push_back(dr);

	dr.x = -70.0;
	dr.y = 30.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 17:
	dr.x = -52.5;
	dr.y = 30.0;

	doors.push_back(dr);

	dr.x = -47.5;
	dr.y = 30.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 18:
	dr.x = -30.0;
	dr.y = 30.0;

	doors.push_back(dr);

	dr.x = -25.0;
	dr.y = 30.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 19:
	dr.x = 7.5;
	dr.y = 30.0;

	doors.push_back(dr);

	dr.x = 12.5;
	dr.y = 30.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 20:
	dr.x = 30.0;
	dr.y = 30.0;

	doors.push_back(dr);

	dr.x = 35.0;
	dr.y = 30.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 21:
	dr.x = -112.5;
	dr.y = -30.0;

	doors.push_back(dr);

	dr.x = -112.5;
	dr.y = -25.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 22:
	dr.x = -112.5;
	dr.y = 15.0;

	doors.push_back(dr);

	dr.x = -112.5;
	dr.y = 20.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 23:
	dr.x = -112.5;
	dr.y = 45.0;

	doors.push_back(dr);

	dr.x = -112.5;
	dr.y = 50.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 24:
	dr.x = -112.5;
	dr.y = 75.0;

	doors.push_back(dr);

	dr.x = -112.5;
	dr.y = 80.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 25:
	dr.x = -97.5;
	dr.y = 45.0;

	doors.push_back(dr);

	dr.x = -92.5;
	dr.y = 45.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 26:
	dr.x = -75.0;
	dr.y = 45.0;

	doors.push_back(dr);

	dr.x = -70.0;
	dr.y = 45.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 27:
	dr.x = -52.5;
	dr.y = 45.0;

	doors.push_back(dr);

	dr.x = -47.5;
	dr.y = 45.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 28:
	dr.x = -30.0;
	dr.y = 45.0;

	doors.push_back(dr);

	dr.x = -25.0;
	dr.y = 45.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 29:
	dr.x = 7.5;
	dr.y = 45.0;

	doors.push_back(dr);

	dr.x = 12.5;
	dr.y = 45.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 30:
	dr.x = 30.0;
	dr.y = 45.0;

	doors.push_back(dr);

	dr.x = 35.0;
	dr.y = 45.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 31:
	dr.x = 52.5;
	dr.y = 35.0;

	doors.push_back(dr);

	dr.x = 52.5;
	dr.y = 40.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	//DOOR 32:
	dr.x = -2.5;
	dr.y = 75.0;

	doors.push_back(dr);

	dr.x = 2.5;
	dr.y = 75.0; 

	doors.push_back(dr);
	door_assignment(doors);
	doors.clear();

	cout << endl;
	for(int i = 0; i < list_doors.size(); i++){
		cout << "Door Number " << i << " :" << endl; 
		for(int j = 0; j < list_doors[i].size(); j++){
			cout << list_doors[i][j].startx << ", " << list_doors[i][j].starty << " --> " << list_doors[i][j].endx << ", " << list_doors[i][j].endy << endl;
		}
		cout << endl << endl;
	}
}	

void Coppito::wall_division_vertical(std::vector<vertex> walls){
	vertex s; //start wall vertex
	vertex e; //end wall vertex
	vertex t; //temp variable

	s.x = walls[0].x;
	s.y = walls[0].y;

	t = s;

	e.x = walls.back().x;
	e.y = walls.back().y;

	walls.clear();

	//cout << t.x << "," << t.y << endl;
	//cout << e.x << "," << e.y << endl;
	int i = 0;
	while(true){
		if(t.y == e.y)
			break;
		else if(t.y != e.y && t.x == e.x){
			t.x = s.x;
			t.y = s.y;

			//cout << t.x << "," << t.y << endl;
		}

		s.y = s.y + cell_width;
		walls.push_back(t);
		i++;
	}
	edge temp_edge;
	int j = 1;
	//cout << walls.size() << endl;
	for(int i = 0; i < walls.size(); i++){
		//cout << i << " : " << walls[i].x << "," << walls[i].y << endl;
		if(walls[j].y != walls.back().y && walls[j].x == walls.back().x){
			temp_edge.startx = walls[i].x;
			temp_edge.starty = walls[i].y;
			temp_edge.endx = walls[j].x;
			temp_edge.endy = walls[j].y;

			//cout << "(" << temp_edge.startx << "," << temp_edge.starty << ")" << " --> " << "(" << temp_edge.endx << "," << temp_edge.endy << ")" << endl;
			
			edge_wall.push_back(temp_edge);
			j++;
		}
		else if(walls[j].x == walls.back().x && walls[j].y == walls.back().y){
			temp_edge.startx = walls[i].x;
			temp_edge.starty = walls[i].y;
			temp_edge.endx = walls.back().x;
			temp_edge.endy = walls.back().y;

			//cout << "(" << temp_edge.startx << "," << temp_edge.starty << ")" << " --> " << "(" << temp_edge.endx << "," << temp_edge.endy << ")" << endl;

			edge_wall.push_back(temp_edge);
			break;
		}
	}

	list_walls.push_back(edge_wall);
	edge_wall.clear();
}


void Coppito::wall_division_horizontal(std::vector<vertex> walls){
	vertex s; //start wall vertex
	vertex e; //end wall vertex
	vertex t; //temp variable

	s.x = walls[0].x;
	s.y = walls[0].y;

	t = s;

	e.x = walls.back().x;
	e.y = walls.back().y;

	walls.clear();

	//cout << t.x << "," << t.y << endl;
	//cout << e.x << "," << e.y << endl;
	int i = 0;
	while(true){
		if(t.x == e.x)
			break;
		else if(t.x != e.x && t.y == e.y){
			t.x = s.x;
			t.y = s.y;

			//cout << t.x << "," << t.y << endl;
		}

		s.x = s.x + cell_length;
		walls.push_back(t);
		i++;
	}
	edge temp_edge;
	int j = 1;
	//cout << walls.size() << endl;
	for(int i = 0; i < walls.size(); i++){
		//cout << i << " : " << walls[i].x << "," << walls[i].y << endl;
		if(walls[j].x != walls.back().x && walls[j].y == walls.back().y){
			temp_edge.startx = walls[i].x;
			temp_edge.starty = walls[i].y;
			temp_edge.endx = walls[j].x;
			temp_edge.endy = walls[j].y;

			//cout << "(" << temp_edge.startx << "," << temp_edge.starty << ")" << " --> " << "(" << temp_edge.endx << "," << temp_edge.endy << ")" << endl;
			
			edge_wall.push_back(temp_edge);
			j++;
		}
		else if(walls[j].x == walls.back().x && walls[j].y == walls.back().y){
			temp_edge.startx = walls[i].x;
			temp_edge.starty = walls[i].y;
			temp_edge.endx = walls.back().x;
			temp_edge.endy = walls.back().y;

			//cout << "(" << temp_edge.startx << "," << temp_edge.starty << ")" << " --> " << "(" << temp_edge.endx << "," << temp_edge.endy << ")" << endl;

			edge_wall.push_back(temp_edge);
			break;
		}
	}

	list_walls.push_back(edge_wall);
	edge_wall.clear();
}

void Coppito::wall_allocation(){
	

	//WALL DIVISION 0:
	wv.x = -120.0;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x =  -7.5;
	wv.y = -90.0;

	walls.push_back(wv);

	// for(int i = 0; i < walls.size(); i++){
	// 	cout << walls[i].x << "," << walls[i].y << endl;
	// }


	//WALL DIVISION 1:
	wall_division_horizontal(walls);
	walls.clear();

	wv.x = 30.0;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = 120.0;
	wv.y = -90.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 2:
	wv.x = 120.0;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = 120.0;
	wv.y = -15.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 3:
	wv.x = 97.5;
	wv.y = -30.0;

	walls.push_back(wv);
	
	wv.x = 97.5;
	wv.y = 75.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 4:
	wv.x = 7.5;
	wv.y = 75.0;

	walls.push_back(wv);
	
	wv.x = 97.5;
	wv.y = 75.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 5:
	wv.x = -97.5;
	wv.y = 75.0;

	walls.push_back(wv);
	
	wv.x = -7.5;
	wv.y = 75.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 6:
	wv.x = 7.5;
	wv.y = 75.0;

	walls.push_back(wv);
	
	wv.x = 97.5;
	wv.y = 75.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 7:
	wv.x = -97.5;
	wv.y = 45.0;

	walls.push_back(wv);
	
	wv.x = -97.5;
	wv.y = 90.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 8:
	wv.x = -135.0;
	wv.y = 90.0;

	walls.push_back(wv);
	
	wv.x = -112.5;
	wv.y = 90.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 9:
	wv.x = -135.0;
	wv.y = -30.0;

	walls.push_back(wv);
	
	wv.x = -135.0;
	wv.y = 90.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 10:
	wv.x = -120.0;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = -120.0;
	wv.y = -30.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 11:
	wv.x = -7.5;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = -7.5;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 12:
	wv.x = -7.5;
	wv.y = -60.0;

	walls.push_back(wv);
	
	wv.x = 15.0;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 13:
	wv.x = -120.0;
	wv.y = -60.0;

	walls.push_back(wv);
	
	wv.x = -7.5;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 14:
	wv.x = 30.0;
	wv.y = -60.0;

	walls.push_back(wv);
	
	wv.x = 120.0;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 15:
	wv.x = -97.5;
	wv.y = -45.0;

	walls.push_back(wv);
	
	wv.x = -7.5;
	wv.y = -45.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 16:
	wv.x = -97.5;
	wv.y = 0.0;

	walls.push_back(wv);
	
	wv.x = -7.5;
	wv.y = 0.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 17:
	wv.x = -97.5;
	wv.y = 30.0;

	walls.push_back(wv);
	
	wv.x = -7.5;
	wv.y = 30.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 18:
	wv.x = -97.5;
	wv.y = -45.0;

	walls.push_back(wv);
	
	wv.x = -97.5;
	wv.y = 30.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 19:
	wv.x = -52.5;
	wv.y = -45.0;

	walls.push_back(wv);
	
	wv.x = -52.5;
	wv.y = 30.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 20:
	wv.x = -7.5;
	wv.y = -45.0;

	walls.push_back(wv);
	
	wv.x = -7.5;
	wv.y = 30.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 21:
	wv.x = -75.0;
	wv.y = 0.0;

	walls.push_back(wv);
	
	wv.x = -75.0;
	wv.y = 30.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 21:
	wv.x = -30.0;
	wv.y = 0.0;

	walls.push_back(wv);
	
	wv.x = -30.0;
	wv.y = 30.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 22:
	wv.x = -97.5;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = -97.5;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 23:
	wv.x = -75.0;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = -75.0;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 24:
	wv.x = -52.5;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = -52.5;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 25:
	wv.x = -30.0;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = -30.0;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 26:
	wv.x = 30.0;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = 30.0;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 28:
	wv.x = 52.5;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = 52.5;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 29:
	wv.x = 75.0;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = 75.0;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 30:
	wv.x = 97.5;
	wv.y = -90.0;

	walls.push_back(wv);
	
	wv.x = 97.5;
	wv.y = -60.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 31:
	wv.x = -75.0;
	wv.y = 45.0;

	walls.push_back(wv);
	
	wv.x = -75.0;
	wv.y = 75.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 32:
	wv.x = -52.5;
	wv.y = 45.0;

	walls.push_back(wv);
	
	wv.x = -52.5;
	wv.y = 75.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 33:
	wv.x = -30.0;
	wv.y = 45.0;

	walls.push_back(wv);
	
	wv.x = -30.0;
	wv.y = 75.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 34:
	wv.x = -7.5;
	wv.y = 45.0;

	walls.push_back(wv);
	
	wv.x = -7.5;
	wv.y = 75.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 35:
	wv.x = -97.5;
	wv.y = 45.0;

	walls.push_back(wv);
	
	wv.x = -7.5;
	wv.y = 45.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 36:
	wv.x = 7.5;
	wv.y = 45.0;

	walls.push_back(wv);
	
	wv.x = 52.5;
	wv.y = 45.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 37:
	wv.x = 7.5;
	wv.y = 45.0;

	walls.push_back(wv);
	
	wv.x = 7.5;
	wv.y = 75.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 38:
	wv.x = 30.0;
	wv.y = 45.0;

	walls.push_back(wv);
	
	wv.x = 30.0;
	wv.y = 75.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 39:
	wv.x = 52.5;
	wv.y = 45.0;

	walls.push_back(wv);
	
	wv.x = 52.5;
	wv.y = 75.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 40:
	wv.x = 7.5;
	wv.y = 0.0;

	walls.push_back(wv);
	
	wv.x = 97.5;
	wv.y = 0.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 41:
	wv.x = 7.5;
	wv.y = 0.0;

	walls.push_back(wv);
	
	wv.x = 7.5;
	wv.y = 30.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 42:
	wv.x = 30.0;
	wv.y = 0.0;

	walls.push_back(wv);
	
	wv.x = 30.0;
	wv.y = 30.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 43:
	wv.x = 52.5;
	wv.y = 0.0;

	walls.push_back(wv);
	
	wv.x = 52.5;
	wv.y = 45.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 44:
	wv.x = 7.5;
	wv.y = 30.0;

	walls.push_back(wv);
	
	wv.x = 52.5;
	wv.y = 30.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 45:
	wv.x = 75.0;
	wv.y = -30.0;

	walls.push_back(wv);
	
	wv.x = 97.5;
	wv.y = -30.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 46:
	wv.x = 75.0;
	wv.y = 0.0;

	walls.push_back(wv);
	
	wv.x = 97.5;
	wv.y = 0.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 47:
	wv.x = 75.0;
	wv.y = -30.0;

	walls.push_back(wv);
	
	wv.x = 75.0;
	wv.y = 0.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 48:
	wv.x = 97.5;
	wv.y = -30.0;

	walls.push_back(wv);
	
	wv.x = 97.5;
	wv.y = 0.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 49:
	wv.x = -112.5;
	wv.y = -30.0;

	walls.push_back(wv);
	
	wv.x = -112.5;
	wv.y = 90.0;

	walls.push_back(wv);


	wall_division_vertical(walls);
	walls.clear();

	//WALL DIVISION 50:
	wv.x = -135.0;
	wv.y = -30.0;

	walls.push_back(wv);
	
	wv.x = -112.5;
	wv.y = -30.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 51:
	wv.x = -135.0;
	wv.y = 0.0;

	walls.push_back(wv);
	
	wv.x = -112.5;
	wv.y = 0.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 52:
	wv.x = -135.0;
	wv.y = 30.0;

	walls.push_back(wv);
	
	wv.x = -112.5;
	wv.y = 30.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();

	//WALL DIVISION 53:
	wv.x = -135.0;
	wv.y = 60.0;

	walls.push_back(wv);
	
	wv.x = -112.5;
	wv.y = 60.0;

	walls.push_back(wv);


	wall_division_horizontal(walls);
	walls.clear();


	for(int i = 0; i < list_walls.size(); i++){
		cout << "WALL DIVISION: " << i << endl;
		for(int j = 0; j < list_walls[i].size(); j++){
			cout << "(" << list_walls[i][j].startx << "," << list_walls[i][j].starty << ")" << " --> " << "(" << list_walls[i][j].endx << "," << list_walls[i][j].endy << ")" << endl;
		}
		cout << endl;
	}

	wall_door_inclusion();
}

void Coppito::non_standard_vertical_allocation(vertex start, vertex end[], int size){
	start = start;
	end[0] = end[0];
	end[1] = end[1];

	temp = start;

	double width = 15.0;
	double length = 30.0;

	int i = 0;
	while(true){
		v[0].x = start.x;
		v[0].y = start.y;

		v[1].x = start.x + width;
		v[1].y = start.y;

		v[2].x = start.x + width;
		v[2].y = start.y + length;

		v[3].x = start.x;
		v[3].y = start.y + length;

		if(start.x == temp.x){
			iterator_vertices[1].x = v[3].x;
			iterator_vertices[1].y = v[3].y;
			//cout << iterator_vertices[1].x << "," << iterator_vertices[1].y << endl;
		}

		edge_vertices.push_back(v[0]);
		edge_vertices.push_back(v[1]);
		edge_vertices.push_back(v[2]);
		edge_vertices.push_back(v[3]);

		e.startx = edge_vertices[0].x;
		e.starty = edge_vertices[0].y;
		e.endx = edge_vertices[1].x;
		e.endy = edge_vertices[1].y;

		edge_line.push_back(e);

		e.startx = edge_vertices[1].x;
		e.starty = edge_vertices[1].y;
		e.endx = edge_vertices[2].x;
		e.endy = edge_vertices[2].y;

		edge_line.push_back(e);

		e.startx = edge_vertices[2].x;
		e.starty = edge_vertices[2].y;
		e.endx = edge_vertices[3].x;
		e.endy = edge_vertices[3].y;

		edge_line.push_back(e);

		e.startx = edge_vertices[3].x;
		e.starty = edge_vertices[3].y;
		e.endx = edge_vertices[0].x;
		e.endy = edge_vertices[0].y;

		edge_line.push_back(e);

		cs.cell_number = cell_no;
		cs.cell_outline.push_back(edge_line);

		edge_vertices.clear();
		edge_line.clear();

		cell.push_back(cs);
		cs.cell_outline.clear();

		iterator_vertices[0].x = v[1].x;
		iterator_vertices[0].y = v[1].y;

		start = iterator_vertices[0];

		if(v[1].x == end[0].x){
			start = iterator_vertices[1];		
		}
		if(v[3].x == end[1].x && v[3].y == end[1].y){
			break;
		}
		i++;
		cell_no++;
	}

	block.push_back(cell);
	cell.clear();

	cell_no++;
}

void Coppito::vertical_cell_allocation(vertex start, vertex end[], int size){
	start = start;
	end[0] = end[0];
	end[1] = end[1];

	temp = start;

	int i = 0;
	while(true){
		v[0].x = start.x;
		v[0].y = start.y;

		v[1].x = start.x + cell_width;
		v[1].y = start.y;

		v[2].x = start.x + cell_width;
		v[2].y = start.y + cell_length;

		v[3].x = start.x;
		v[3].y = start.y + cell_length;

		if(start.x == temp.x){
			iterator_vertices[1].x = v[3].x;
			iterator_vertices[1].y = v[3].y;
			//cout << iterator_vertices[1].x << "," << iterator_vertices[1].y << endl;
		}

		edge_vertices.push_back(v[0]);
		edge_vertices.push_back(v[1]);
		edge_vertices.push_back(v[2]);
		edge_vertices.push_back(v[3]);

		e.startx = edge_vertices[0].x;
		e.starty = edge_vertices[0].y;
		e.endx = edge_vertices[1].x;
		e.endy = edge_vertices[1].y;

		edge_line.push_back(e);

		e.startx = edge_vertices[1].x;
		e.starty = edge_vertices[1].y;
		e.endx = edge_vertices[2].x;
		e.endy = edge_vertices[2].y;

		edge_line.push_back(e);

		e.startx = edge_vertices[2].x;
		e.starty = edge_vertices[2].y;
		e.endx = edge_vertices[3].x;
		e.endy = edge_vertices[3].y;

		edge_line.push_back(e);

		e.startx = edge_vertices[3].x;
		e.starty = edge_vertices[3].y;
		e.endx = edge_vertices[0].x;
		e.endy = edge_vertices[0].y;

		edge_line.push_back(e);

		cs.cell_number = cell_no;
		cs.cell_outline.push_back(edge_line);

		edge_vertices.clear();
		edge_line.clear();

		cell.push_back(cs);
		cs.cell_outline.clear();

		iterator_vertices[0].x = v[1].x;
		iterator_vertices[0].y = v[1].y;

		start = iterator_vertices[0];

		if(v[1].x == end[0].x){
			start = iterator_vertices[1];		
		}
		if(v[3].x == end[1].x && v[3].y == end[1].y){
			break;
		}
		i++;
		cell_no++;
	}

	block.push_back(cell);
	cell.clear();

	cell_no++;
}

void Coppito::cell_structure_allocation(vertex start, vertex end[], int size){

	start = start;
	end[0] = end[0];
	end[1] = end[1];

	temp = start;

	int i = 0;
	while(true){
		v[0].x = start.x;
		v[0].y = start.y;

		v[1].x = start.x + cell_length;
		v[1].y = start.y;

		v[2].x = start.x + cell_length;
		v[2].y = start.y + cell_width;

		v[3].x = start.x;
		v[3].y = start.y + cell_width;

		if(start.x == temp.x){
			iterator_vertices[1].x = v[3].x;
			iterator_vertices[1].y = v[3].y;
			//cout << iterator_vertices[1].x << "," << iterator_vertices[1].y << endl;
		}

		edge_vertices.push_back(v[0]);
		edge_vertices.push_back(v[1]);
		edge_vertices.push_back(v[2]);
		edge_vertices.push_back(v[3]);

		e.startx = edge_vertices[0].x;
		e.starty = edge_vertices[0].y;
		e.endx = edge_vertices[1].x;
		e.endy = edge_vertices[1].y;

		edge_line.push_back(e);

		e.startx = edge_vertices[1].x;
		e.starty = edge_vertices[1].y;
		e.endx = edge_vertices[2].x;
		e.endy = edge_vertices[2].y;

		edge_line.push_back(e);

		e.startx = edge_vertices[2].x;
		e.starty = edge_vertices[2].y;
		e.endx = edge_vertices[3].x;
		e.endy = edge_vertices[3].y;

		edge_line.push_back(e);

		e.startx = edge_vertices[3].x;
		e.starty = edge_vertices[3].y;
		e.endx = edge_vertices[0].x;
		e.endy = edge_vertices[0].y;

		edge_line.push_back(e);

		cs.cell_number = cell_no;
		cs.cell_outline.push_back(edge_line);

		edge_vertices.clear();
		edge_line.clear();

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
		i++;
		cell_no++;
	}

	block.push_back(cell);
	cell.clear();

	cell_no++;
}

void Coppito::divide_Cells(){

	//BLOCK 0:
	start.x = -120;
	start.y = -90.0;

	end[0].x = -7.5;
	end[0].y = -90.0;

	end[1].x = -7.5;
	end[1].y = -60.0;

	cell_structure_allocation(start, end, 2);

	//print_cells();

	//BLOCK 1:
	start.x = 30.0;
	start.y = -90.0;

	end[0].x = 120.0;
	end[0].y = -90.0;

	end[1].x = 120.0;
	end[1].y = -60.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 2:
	start.x = -97.5;
	start.y = -45.0;

	end[0].x = -7.5;
	end[0].y = -45.0;

	end[1].x = -7.5;
	//end[1].y = 0.0;
	end[1].y = 30.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 3:
	start.x = -135.0;
	start.y = -30.0;

	end[0].x = -112.5;
	end[0].y = -30.0;

	end[1].x = -112.5;
	end[1].y = 90.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 4:
	start.x = -97.5;
	start.y = 45.0;

	end[0].x = -7.5;
	end[0].y = 45.0;

	end[1].x = -7.5;
	end[1].y = 75.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 5:
	start.x = 7.5;
	start.y = 45.0;

	end[0].x = 52.5;
	end[0].y = 45.0;

	end[1].x = 52.5;
	end[1].y = 75.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 6:
	start.x = 7.5;
	start.y = 0.0;

	end[0].x = 52.5;
	end[0].y = 0.0;

	end[1].x = 52.5;
	end[1].y = 30.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 7:
	start.x = 52.5;
	start.y = 0.0;

	end[0].x = 97.5;
	end[0].y = 0.0;

	end[1].x = 97.5;
	end[1].y = 75.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 8:
	start.x = 75.0;
	start.y = -30.0;

	end[0].x = 97.5;
	end[0].y = -30.0;

	end[1].x = 97.5;
	end[1].y = 0.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 9:
	start.x = 97.5;
	start.y = -30.0;

	end[0].x = 120.0;
	end[0].y = -30.0;

	end[1].x = 120.0;
	end[1].y = -15.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 10:
	start.x = -120.0;
	start.y = -60.0;

	end[0].x = -7.5;
	end[0].y = -60.0;

	end[1].x = -7.5;
	end[1].y = -45.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 11:
	start.x = 7.5;
	start.y = -60.0;

	end[0].x = 120.0;
	end[0].y = -60.0;

	end[1].x = 120.0;
	end[1].y = -30.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 12:
	start.x = 7.5;
	start.y = -30.0;

	end[0].x = 75.0;
	end[0].y = -30.0;

	end[1].x = 75.0;
	end[1].y = 0.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 13:
	start.x = 7.5;
	start.y = -30.0;

	end[0].x = 75.0;
	end[0].y = -30.0;

	end[1].x = 75.0;
	end[1].y = 0.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 14:
	start.x = -7.5;
	start.y = -60.0;

	end[0].x = 7.5;
	end[0].y = 75.0;

	end[1].x = -7.5;
	end[1].y = 75.0;

	vertical_cell_allocation(start, end, 2);


	//BLOCK 15:
	start.x = -97.5;
	start.y = 30.0;

	end[0].x = -7.5;
	end[0].y = 30.0;

	end[1].x = -7.5;
	end[1].y = 45.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 16:
	start.x = 7.5;
	start.y = 30.0;

	end[0].x = 52.5;
	end[0].y = 30.0;

	end[1].x = 52.5;
	end[1].y = 45.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 17:
	start.x = -120.0;
	start.y = -45.0;

	end[0].x = -97.5;
	end[0].y = -45.0;

	end[1].x = -97.5;
	end[1].y = -30.0;

	cell_structure_allocation(start, end, 2);

	//BLOCK 18:
	start.x = -112.5;
	start.y = -30.0;

	end[0].x = -97.5;
	end[0].y = 90.0;

	end[1].x = -112.5;
	end[1].y = 90.0;

	non_standard_vertical_allocation(start, end, 2);

	//print_cells();


	wall_allocation();

	//door_allocation();

	// for(int i  = 0; i < cell.size(); i++){
	// 	cout << "CELL NO. : " << i + 1 << endl;
	// 	for(int j = 0; j < 4; j++){
	// 		cout << cell[i][j].x << "," << cell[i][j].y << endl;
	// 	}
	// 	cout << endl;
	// }
}

