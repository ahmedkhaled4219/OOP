#include <iostream>
#include<graphics.h>
using namespace std;

class Point{

int x;
int y;

public :
    Point(){
    x=0;
    y=0;
    }
    Point(int _x,int _y){
        x=_x;
        y=_y;
    }
    void Set_x(int _x){
    x=_x;
    }
    void Set_y(int _y){
        y=_y;
    }
    void Set_point(int _x,int _y){
    x=_y;
    y=_y;
    }
     void Get_point(void){



    }
    int get_x(){
     return x;
    }
    int get_y(){
     return y;
    }

    void paint(){
    cout<<"("<<x<<","<<y<<")"<<endl;

    }

}; //END point class
//..................................
class Circle{

int radius;


public :

cirlce(){
radius=0;
}//Default

Circle(int r){

radius=r;
}

void draw(Point p1){

initwindow(650,400);
circle(p1.get_x(),p1.get_y(),radius);
getch();
}
}; //END CLASS CIRCLE

//.............................................
class Line{

 public :
void draw(Point p1,Point p2){

initwindow(650,400);
line(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());
getch();
}
}; //End line
//.............................................

int main()
{
   Line l;
   Circle c(100);
   c.draw(Point(200,250));
   l.draw(Point(150,150),Point(450,200));

    return 0;
}
