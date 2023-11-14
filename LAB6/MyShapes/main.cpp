#include <iostream>
#include <graphics.h>
#include "shape.h"
#include "Point.h"
#include "Circle.h"
#include "Line.h"
#include "rec.h"
using namespace std;
istream& operator >>(istream& is,Circle& c);
istream& operator >>(istream& is,Line& l);
istream& operator >>(istream& is,rec& r);

int main()
{
       int n;
     initwindow(650,400);

    cout<<"Enter number of shapes : ";
    cin>>n;
    Line arr_line[n];
    Circle arr_circle[n];
    rec arr_rectangle[n];

    for(int i=0;i<n;i++){
       int choice;
        cout<<'\t'<<".........Shape "<<i+1<<" Data........."<<endl;
        cout<<"To draw circle press 0 / To draw line press 1 / To draw rectangle press 2 : ";
        cin>>choice;
        if(choice == 0){
            Circle c;
            cin>>c;
            arr_circle[i]=c;
        }
        else if(choice ==1){
            Line l;
            cin>>l;
            arr_line[i]=l;
        }
        else if(choice == 2){
            rec r;
            cin>>r;
            arr_rectangle[i]=r;
        }
        else{
            cout<<"Invalid Choice"<<endl;
            i--;
        }
    }

for(int i=0;i<n;i++){
    arr_circle[i].draw();
    arr_line[i].draw();
    arr_rectangle[i].draw();
}
    getch();
    return 0;
}





