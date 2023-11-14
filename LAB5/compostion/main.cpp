#include<iostream>
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
Point p1;

public :

cirlce(){
radius=0;
p1.Set_point(0,0);
}//Default

Circle(Point px,int r){
p1=px;
radius=r;
}//1

Circle(int x,int y,int r): p1(x,y){
radius=r;
}//2

int get_x(){
return p1.get_x();
}

int get_y(){
return p1.get_y();
}

int get_radius(){
return radius;
}

void draw(){

initwindow(650,400);
circle(p1.get_x(),p1.get_y(),radius);
getch();
}
}; //END CLASS CIRCLE

//.............................................
class Line{

Point p1,p2;

 public :
 Line(){

 p1.Set_point(0,0);
 p2.Set_point(0,0);

 }
 Line(int pxr,int pyr,int pxl, int pyl):p1(pxr,pyr),p2(pxl,pyl){
    }
int get_pxl(){
return p1.get_x();
}
int get_pxr(){
return p2.get_x();
}
int get_pyr(){
return p1.get_y();
}
int get_pyl(){
return p2.get_y();
}

void draw(){

initwindow(650,400);
line(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());
getch();
}
}; //End line
//.............................................
int main(){

Line l(150,150,450,200);
Circle c(200,250,100);

c.draw();
l.draw();



return 0;
}
