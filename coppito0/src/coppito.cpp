#include "coppito.h"

Coppito::Coppito(){
}

void Coppito::insert(std::vector<arc>& n, arc a){
	//populate cyclic digraph
	int j = 1;
	for(int i = 0; i < 50; i++){ //say 100 different cells within the acyclic digraph
		a = {i, j};
		n.push_back(a);
		j++;
	}
}

void Coppito::print(std::vector<arc> &n){
	for(int i = 0; i < n.size(); i++){
		std::cout << n[i].i << "-->";
		std::cout << n[i].j << "\t";
	}
}
