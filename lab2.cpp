#include <iostream>
#include <time.h>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

class Position{
    public:
	Position(int x, int y){
  	this->x_ = x;
    this->y_ = y;
  }
	int x_;
    int y_;
};

class Object{
private: 
    vector <Position> _path; 		
    
     void addPath(int x, int y){
        Position pos(x, y);					
        _path.push_back(pos);
    }
		void addPath(Position pos){
        _path.push_back(pos);
    }
public:
    Object(int x, int y){
    		addPath(x, y);
    }
    Object(Position pos){
    		addPath(pos);
    }
    
    void move(Position pos){ 
        addPath(pos);
    }


     const vector<Position>& getPath(){
        return  _path;
    }
    
    void Walk(int n){
        int counter = 0;
        srand(time(NULL));
        while(counter < n){
            int x = rand()%100;
            int y = rand()%100;
            addPath(x, y);
            counter ++;
        }
    }

    
};
void showPath(Object ob){
        auto &path = ob.getPath();
        int n = path.size();
        for(auto & coor : path){
        	std::cout << "x "<< coor.x_ <<", y "<< coor.y_ <<'\n';
        }
    }


int main(){
    int x = 5; 
    int y = 3;
    Position startcoor(x, y);
    Position pos2(152, 75);
    Object ob1(startcoor);
    ob1.move(pos2);
    ob1.Walk(10);
    showPath(ob1);
    return 0;
} 