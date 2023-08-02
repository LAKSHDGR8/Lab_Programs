#include<iostream>
using namespace std;
int a,b,c,d;
template<class T>
void firstPoint()
{
T x1,y1;
cout<<"Enter the x co-rdinate of the first point: "<<endl;
cin>>x1;
cout<<"Enter the y co-ordinate of the first point: "<<endl;
cin>>y1;
cout<<"The co-ordinates of the first point are: ("<<x1<<","<<y1<<")"<<endl;
a=x1,b=y1;
}
template<class T>
void secondPoint()
{
T x2,y2;
cout<<"Enter the x co-rdinate of the second point: "<<endl;
cin>>x2;
cout<<"Enter the y co-ordinate of the second point: "<<endl;
cin>>y2;
cout<<"The co-ordinates of the second point are: ("<<x2<<","<<y2<<")"<<endl;
c=x2,d=y2;
}
template<class T>
void thirdPoint()
{
T x3,y3;
x3=a+c;
y3=b+d;
cout<<"The co-ordinates of the third point are: ("<<x3<<","<<y3<<")"<<endl;
}

int main()
{
int x1,y1,x2,y2;
firstPoint<int>();
secondPoint<int>();
thirdPoint<int>();
return 0;
}

Enter the x co-rdinate of the first point:
2
Enter the y co-ordinate of the first point:
3
The co-ordinates of the first point are: (2,3)
Enter the x co-rdinate of the second point:
4
Enter the y co-ordinate of the second point:
5
The co-ordinates of the second point are: (4,5)
The co-ordinates of the third point are: (6,8)
