#include <iostream>

using namespace std;
void swap_value(int,int);
void swap_address(int*,int*);
void swap_refrence(int &x, int &y);
int main()
{
   int x=5;
   int y=6;

   cout<<x<<" "<<y;
   swap_address(&x,&y);
   cout<<x<<" "<<y;


    return 0;
}
void swap_value(int x,int y){

int temp=x;
x=y;
y=temp;
}
void swap_address(int*x,int*y){

int temp=*x;
*x=*y;
*y=temp;
}
void swap_value(int &x,int&y){
int temp = x;
x=y;
y=x;
}


