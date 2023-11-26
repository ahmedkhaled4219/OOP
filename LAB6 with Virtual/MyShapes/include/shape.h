#ifndef SHAPE_H
#define SHAPE_H

class shape{

int color;
public :

shape(){
color=0;
}

shape(int c){
color=c;
}

void set_color(int c){
color=c;
}
int get_color(){
return color;
}
virtual void draw(){
setcolor(color);
}

}; //END shape

#endif // SHAPE_H
