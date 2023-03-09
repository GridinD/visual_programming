#include "Position.h"

void Object::addPath(int x, int y){
        Position pos(x, y);					
        _path.push_back(pos);
    }

void Object::addPath(Position pos){
        _path.push_back(pos);
    }

Object::Object(int x, int y){
    		addPath(x, y);
    }

Object::Object(Position pos){
    		addPath(pos);
    }

void Object::move(Position pos){ 
        addPath(pos);
    }

void Object::Walk(int n){
        int counter = 0;
        srand(time(NULL));
        while(counter < n){
            int x = rand()%100;
            int y = rand()%100;
            addPath(x, y);
            counter ++;
        }
    }

void showPath(Object ob){
        auto &path = ob.getPath();
        int n = path.size();
        for(auto & coor : path){
        	std::cout << "x "<< coor.x_ <<", y "<< coor.y_ <<'\n';
        }
    }