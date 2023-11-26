#ifndef CIRCLE_H
#define CIRCLE_H



class Circle: public shape{

int radius;
Point p1;

public :

Circle(){
radius=0;
p1.Set_point(0,0);
}//Default

Circle(Point px,int r){
p1=px;
radius=r;
}//1

Circle(int x,int y,int r,int c): p1(x,y),shape(c){
radius=r;
}//2
void set_point(int x1,int y1){
p1.Set_point(x1,y1);
}
int get_x(){
return p1.get_x();
}

int get_y(){
return p1.get_y();
}

int get_radius(){
return radius;
}
void set_radius(int r){
radius = r;
}



void draw(){

shape ::draw();
circle(p1.get_x(),p1.get_y(),radius);
}
}; //END CLASS CIRCLE

istream& operator >>(istream& is,Circle& c){
int x=0;
int y=0;
int r=0;
int col=0;

cout<<"Enter your point : ";
 is >>x;
 is>> y;
 c.set_point(x,y);
 cout<<"Enter radius : ";
 is>>r;
 c.set_radius(r);
 cout<<"Enter color : ";
 is>>col;
 c.set_color(col);
return is;
}
#endif // CIRCLE_H
