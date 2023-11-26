#include <iostream>
using namespace std;

template< class H>

class List{

int Size;
int t;
H *arr;
public:
List(int _size){
    t=-1;
    Size=_size;
 arr= new H[Size]{0};
}


void push(H x){
if(t!=Size-1){
t++;
arr[t]=x;
}
else{
 extend();
}
}//push

void pop(){
    H x=arr[t];
if(t != -1){
   cout<<x<<endl;
    t--;

}
else{
    cout<<"stack is empty"<<endl;
}

}//pop

void extend(){

H* arr2= new H[Size*2]{0};

for(int i=0;i<=t;i++){
    arr2[i]=arr[i];
}
delete[]arr;
arr=arr2;
Size*= 2;
}

void display(){
for(int i=0;i<=t;i++){

    cout<<arr[i]<<endl;
}
}//display
int get_size(){
return Size;
}

~List(){
delete[] arr;
cout<<"destructor";
}
}; //end class

int main()
{

List <double>s1(5);

s1.pop(); //empty
s1.pop();
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
s1.push(10);
s1.push(12);
cout<<s1.get_size();
    return 0;
}
