#include <iostream>
#include <graphics.h>
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

Point* p1;
int radius;


public :

cirlce(){
p1=NULL;
radius=0;
}//Default

Circle(Point* p,int r){
    p1=p;
    radius=r;
}

void draw(){

initwindow(650,400);
circle(p1->get_x(),p1->get_y(),radius);
getch();
}
}; //END CLASS CIRCLE

//.............................................
class Line{
Point* p1;
Point* p2;

 public :
     Line(){
     p1=NULL;
     p2=NULL;
     }
     Line(Point* px,Point* py){
     p1=px;
     p2=py;
     }
void draw(){
if(p1 !=NULL && p2!= NULL){

initwindow(650,400);
line(p1->get_x(),p1->get_y(),p2->get_x(),p2->get_y());
getch();
}

}
}; //End line
//.............................................

int main()
{
   Point p1,p2,p3;
   p1.Set_point(150,250);
   p2.Set_point(150,450);
   p3.Set_point(200,250);
   Line l(&p1,&p2);
   Circle c(&p3,100);
   c.draw();
    return 0;
}
