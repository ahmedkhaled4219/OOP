#include <iostream>
using namespace std;


class Complex{

int real;
int image;

public:
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


Complex sum(Complex c2){
Complex c3;
int rea = real + c2.getReal();
int img = image + c2.getImage();
c3.setReal(rea);
c3.setImage(img);
return c3;
}
Complex sub(Complex c2){
Complex c3;
int rea = real - c2.getReal();
int img = image - c2.getImage();
c3.setReal(rea);
c3.setImage(img);
return c3;
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

};
int main()
{
   Complex c1,c2,c3,c4;
   c1.setReal(4);
   c1.setImage(3);
   c2.setReal(20);
   c2.setImage(3);
   c3 = c1.sum(c2);
   c4= c1.sub(c2);
   c3.print();
   c4.print();
    return 0;
}
