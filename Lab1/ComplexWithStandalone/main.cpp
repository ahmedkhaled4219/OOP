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


};
Complex sub(Complex c1, Complex c2);
Complex sum(Complex c1 , Complex c2);
void print(Complex c1);
int main()
{
   Complex c1,c2,c3,c4;
   c1.setReal(4);
   c1.setImage(6);
   c2.setReal(7);
   c2.setImage(3);
   c3 = sum(c1,c2);
   c4 = sub(c1,c2);
    print(c3);
    print(c4);
    return 0;
}

void print(Complex c1){
cout<<c1.getReal();
if(c1.getImage()>0){
    cout<<"+"<<c1.getImage()<<"j"<<endl;
}
else if(c1.getImage()<0){
    cout<<c1.getImage()<<"j"<<endl;

}
}

Complex sum(Complex c1,Complex c2){
Complex c3;
int rea = c1.getReal() + c2.getReal();
int img = c1.getImage() + c2.getImage();
c3.setReal(rea);
c3.setImage(img);
return c3;
}

Complex sub(Complex c1, Complex c2){
Complex c3;
int rea = c1.getReal() - c2.getReal();
int img = c1.getImage() - c2.getImage();
c3.setReal(rea);
c3.setImage(img);
return c3;
}
