#include <iostream>
using namespace std;


class Complex{

int real;
int image;

public:
    Complex(int rea=0,int img=0){
    real=rea;
    image=img;
    }
    void setReal(int rea){
        real=rea;
    }
    void setImage(int ima){
        image=ima;
    }
    int getReal(){
    return real;
    }
    int getImage(){
     return image;
    }




void print(){
cout<<real;
if(image>0){
    cout<<"+"<<image<<"j"<<endl;
}
else if(image<0){
    cout<<image<<"j"<<endl;

}
}


Complex operator +(Complex & c){
Complex res(real+c.real,image+c.image);
return res;
}//+

Complex operator -(Complex & c){
Complex res(real-c.real,image-c.image);
return res;
}//-
 operator+=(Complex & c){

 real=real+c.real;
 image=image+c.image;

}//+=

int operator ==(Complex & c){
return (real==c.real && image==c.image);
}//==

Complex operator ++(){
real=real+1;
return *this;
}//++c

Complex operator ++(int){
Complex temp=*this;
real = real+1;
return temp;
}//c++

operator float(){
return real;
}//float

Complex operator + (int x){
real=real+x;
return *this;
}//c1+5

Complex operator - (int x){
real=real-x;
return *this;
}//c1-5

void operator [] (int x){
if(x==0){
cout<<real<<endl;
}
else if(x==1){
    cout<<image<<"j"<<endl;
}
else{
    cout<<"Invalid"<<endl;
}
}//[]

 friend istream& operator >>(istream& is,Complex& c);
}; // end class

Complex operator +(int x ,Complex& c);
ostream& operator << (ostream& os , Complex& c);


int main()
{

   Complex c1(20,6),c2(15,10),c3(7,6);
  //c3 = c1 + c2;
  //c3 = c1 - c2;
  //c3 = c1 + 5;
  //c3 = c1 - 5;
  //c3 = 50 + c1;
  //c3 = 5 - c1;
  //cout<<(c1 == c2);
 // c1 += c2;
  //++c1;
  //c1 ++ ;
   //(float)c1;
  //c3[1];
    cin>>c1;
    cout<<c1;
 // c3.print();
 //cout<<c1;
    return 0;
}

Complex operator +(int x,Complex & c){
    Complex res(c.getReal()+ x ,c.getImage());
    return res;
    }

ostream& operator << (ostream& os,  Complex & c){
   os<<c.getReal();
   if(c.getImage()>0){
    os<<"+"<<c.getImage()<<"j"<<endl;
}
else if(c.getImage()<0){
    os<<c.getImage()<<"j"<<endl;

}
  return os;
}

istream& operator >>(istream& is,Complex& c){
cout<<"Enter real number"<<endl;
 is >> c.real;
 cout<<"Enter image number"<<endl;
 is>>c.image;

return is;
}

