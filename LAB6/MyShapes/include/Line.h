#ifndef LINE_H
#define LINE_H

class Line : public shape{
Point p1;
Point p2;

 public :
 Line(){

 p1.Set_point(0,0);
 p2.Set_point(0,0);

 }
 Line(int pxr,int pyr,int pxl, int pyl,int c):p1(pxr,pyr),p2(pxl,pyl),shape(c){
    }
void set_p1(int xr,int yr){
    p1.Set_point(xr,yr);
    }
void set_p2(int xl,int yl){
p2.Set_point(xl,yl);
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
shape::draw();
line(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());

}
}; //End line

istream& operator >>(istream& is,Line& l){
int x1=0;
int y1=0;
int x2=0;
int y2=0;
int col=0;

cout<<"Enter your first point : ";
 is >>x1;
 is>> y1;
 l.set_p1(x1,y1);
 cout<<"Enter your second point : ";
 is>>x2;
 is>>y2;
 l.set_p2(x2,y2);
 cout<<"Enter color : ";
 is>>col;
 l.set_color(col);
return is;
}

#endif // LINE_H
