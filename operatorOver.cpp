#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
int real;
int img;
public:
Complex(int r=0,int i=0)
{
real=r;
img=i;
}
void display()
{
cout<<real<<"+i"<<img<<endl;
}
friend Complex operator+(Complex c1,Complex c2);
};

Complex operator+()
{
Complex temp;
temp.real=real+c.real;
temp.img=img+c.img;
return temp;
}

int main()
{
Complex c1(5,3),c2(10,5),c3;
c3=c1+c2;
c3.display();
}
