	for(int i = 0; i < block.size(); i++){
		for(int j = 0; j < block[i].size(); j++){
			for(int k = 0; k < block[i][j].cell_outline.size(); k++){
				for(int l = 0; l < 4; l++){
					for(int m = 0; m < list_doors.size(); m++){
						for(int n = 0; n < list_doors[m].size(); n++){
							if(block[i][j].cell_outline[k][l].startx == list_doors[m][n].startx && block[i][j].cell_outline[k][l].wall == true){
								if(block[i][j].cell_outline[k][l].starty == list_doors[m][n].starty){
									if(block[i][j].cell_outline[k][l].endx == list_doors[m][n].endx){
										block[i][j].cell_outline[k][l].door = true;
										continue;
									}
									//cout << "(" << block[i][j].cell_outline[k][l].startx << "," << block[i][j].cell_outline[k][l].starty << ")" << " --> " << "(" << block[i][j].cell_outline[k][l].endx << "," << block[i][j].cell_outline[k][l].endy << ")" << "\t\twall = " << block[i][j].cell_outline[k][l].wall << "\tdoor = " << block[i][j].cell_outline[k][l].door << endl;								
								}
									else if(block[i][j].cell_outline[k][l].endy == list_doors[m][n].endy){
										block[i][j].cell_outline[k][l].door = true;
										continue;
										//cout << "(" << block[i][j].cell_outline[k][l].startx << "," << block[i][j].cell_outline[k][l].starty << ")" << " --> " << "(" << block[i][j].cell_outline[k][l].endx << "," << block[i][j].cell_outline[k][l].endy << ")" << "\t\twall = " << block[i][j].cell_outline[k][l].wall << "\tdoor = " << block[i][j].cell_outline[k][l].door << endl;
									}
								}
								else if(block[i][j].cell_outline[k][l].endx == list_doors[m][n].startx && && block[i][j].cell_outline[k][l].wall == true){
									if(block[i][j].cell_outline[k][l].endy == list_doors[m][n].starty){
										if(block[i][j].cell_outline[k][l].starty == list_doors[m][n].starty){
											block[i][j].cell_outline[k][l].door = true;
											continue;
										//cout << "(" << block[i][j].cell_outline[k][l].startx << "," << block[i][j].cell_outline[k][l].starty << ")" << " --> " << "(" << block[i][j].cell_outline[k][l].endx << "," << block[i][j].cell_outline[k][l].endy << ")" << "\t\twall = " << block[i][j].cell_outline[k][l].wall << "\tdoor = " << block[i][j].cell_outline[k][l].door << endl;									
										}
										else if(block[i][j].cell_outline[k][l].endx == list_doors[m][n].endx){
											block[i][j].cell_outline[k][l].door = true;
											continue;
										//cout << "(" << block[i][j].cell_outline[k][l].startx << "," << block[i][j].cell_outline[k][l].starty << ")" << " --> " << "(" << block[i][j].cell_outline[k][l].endx << "," << block[i][j].cell_outline[k][l].endy << ")" << "\t\twall = " << block[i][j].cell_outline[k][l].wall << "\tdoor = " << block[i][j].cell_outline[k][l].door << endl;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}