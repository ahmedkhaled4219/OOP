#ifndef REC_H
#define REC_H

class rec : public shape {

Point p1;
Point p2;

 public :
 rec(){

 p1.Set_point(0,0);
 p2.Set_point(0,0);

 }
 rec(int pxr,int pyr,int pxl, int pyl):p1(pxr,pyr),p2(pxl,pyl){
    }

void set_p1(int x1,int y1){
p1.Set_point(x1,y1);
}
void set_p2(int x2,int y2){
p2.Set_point(x2,y2);
}

int get_pxr(){
return p1.get_x();
}
int get_pxl(){
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
rectangle(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());
}

};

istream& operator >>(istream& is,rec& r){
int x1=0;
int y1=0;
int x2=0;
int y2=0;
int col=0;

cout<<"Enter your first point : ";
 is >>x1;
 is>> y1;
 r.set_p1(x1,y1);
 cout<<"Enter your second point : ";
 is>>x2;
 is>>y2;
 r.set_p2(x2,y2);
 cout<<"Enter color : ";
 is>>col;
 r.set_color(col);
return is;
}

#endif // REC_H
