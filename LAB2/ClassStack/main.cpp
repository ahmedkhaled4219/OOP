#include <iostream>
using namespace std;


class Stack{

int Size;
int t;
int *arr;
public:
Stack(int _size){
    t=-1;
    Size=_size;
 arr= new int[Size]{0};
}


void push(int x){
if(t!=Size-1){
t++;
arr[t]=x;
}
else{
 cout<<"stack is full";
}
}//push

void pop(){
    int x=arr[t];
if(t != -1){
   cout<<x<<endl;
    t--;

}
else{
    cout<<"stack is empty"<<endl;
}

}//pop

void display(){
for(int i=0;i<=t;i++){

    cout<<arr[i]<<endl;
}
}//display

~Stack(){
delete[] arr;
}
}; //end class

int main()
{

Stack s1(5);

s1.pop(); //empty
s1.push(1);
s1.push(5);
s1.push(6);
s1.pop();//6
s1.pop();//5
s1.push(7);
s1.pop();//7
s1.pop();//1
s1.pop();//Empty
s1.push(7);
s1.pop();//7
//6571Empty7


    return 0;
}
