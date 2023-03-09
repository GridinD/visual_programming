#include "Position.h"

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
