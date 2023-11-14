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

Stack operator = (Stack & s){
 t=s.t;
 Size=s.Size;
 delete []arr;
 arr=new int[Size]{0};
 for(int i=0;i<=t;i++){
    arr[i]=s.arr[i];
 }
 return *this;
} //=



~Stack(){
delete[] arr;
}
}; //end class

int main()
{

Stack s1(5);
Stack s2(5);
s1.push(9);
s1.push(8);
s1.push(7);
s2=s1;
s2.pop();
s2.pop();
s2.pop();
s1.pop();

    return 0;
}
