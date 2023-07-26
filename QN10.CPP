//Impleament 2 classes Triangle and rectangle derived from class shape with suitable data members implement all the functions derived rom class shape in each
//of the derived classes. Write c++ program to create objects of each of the derived class and assign to the derived class and assign to the base class(shape)
//type pointer/reference. Demonstrate runtime.
#include<iostream>
#include<cstring>
using namespace std;
class Shape
{
protected:
float area,perimeter;
public:
Shape():area(0),perimeter(0){};
virtual void initialize()=0;
virtual float Compute_Area()=0;
virtual float Compute_Perimeter()=0;
virtual ~Shape(){};
};

class Triangle:public Shape
{
protected:
float base,height;
public:
Triangle():base(0),height(0){};
void initialize()
{
cout<<"Enter the base and height: "<<endl;
cin>>base>>height;
}
float Compute_Area()
{
return 0.5*base*height;
}
float Compute_Perimeter()
{
return 3*base;
}
};

class Rectangle:public Shape
{
protected:
float length,breadth;
public:
Rectangle():length(0),breadth(0){};
void initialize()
{
cout<<"Enter the length and breadth: ";
cin>>length>>breadth;
}
float Compute_Area()
{
return length*breadth;
}
float Compute_Perimeter()
{
return 2*(length+breadth);
}
};

int main()
{
Shape *p;
Triangle obj1;
p=&obj1;
p->initialize();
cout<<p->Compute_Area()<<endl;
cout<<p->Compute_Perimeter()<<endl;

Rectangle obj2;
p=&obj2;
p->initialize();
cout<<p->Compute_Area()<<endl;
cout<<p->Compute_Perimeter()<<endl;

return 0;
}

Enter the base and height:
4
5
10
12
Enter the length and breadth: 4
5
20
18
