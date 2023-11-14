#ifndef POINT_H
#define POINT_H
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


#endif // POINT_H
