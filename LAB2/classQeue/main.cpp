#include <iostream>
using namespace std;

 class Queue{

    int Size;
    int pos;
    int* arr;

    public:
    Queue(int _size){
    pos=-1;
    Size=_size;
    arr=new int[Size]{0};
    }

    void enqueue(int x){
    if(pos != Size-1 ){
       pos++;
       arr[pos]=x;

    }
    else{
         cout<<"queue is full"<<endl;
    }
    }//enqueue

void dequeue(){
    int x=arr[0];
    if(pos!=-1){
      cout<<x<<endl;
    for(int i=0; i<pos;i++){
    arr[i]=arr[i+1];

    }
    pos--;
    }
    else{

        cout<<"queue is empty"<<endl;
    }


}//dequeu

void display(){

for(int i=0;i<=pos;i++){
    cout<<arr[i]<<endl;
}

}
    }; //end class
int main()
{
      Queue q1(3);
      q1.dequeue();//empty
      q1.enqueue(5);
      q1.enqueue(7);
      q1.enqueue(10);
      q1.dequeue();//5
      q1.dequeue();//7
      q1.enqueue(11);
      q1.dequeue();//10
      q1.dequeue();//11
      q1.dequeue();//empty

    return 0;
}
