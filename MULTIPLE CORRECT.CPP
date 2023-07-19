#include<iostream>
#include<cstring>
using namespace std;
class Student
{
protected:
int USN;
public:
        Student()
        {
        USN=0;
        }
        void set_p()
        {
        cout<<"Enter the USN: "<<endl;
        cin>>USN;
        }
        void display_p()
        {
        cout<<USN<<endl;
        }
};

class Test: public Student
{
protected:
int test_scores;
public:
        Test()
        {
        test_scores=0;
        }
        void set_p()
        {
        cout<<"Enter the test score: "<<endl;
        cin>>test_scores;
        }
        void display_p()
        {
        cout<<test_scores<<endl;
        }
};
class Sports: protected Student
{
protected:
int sports_scores;
public:
        Sports()
        {
        sports_scores=0;
        }
        void set_p()
        {
        cout<<"Enter the sports scores: "<<endl;
        cin>>sports_scores;
        }
        void display_p()
        {
        cout<<sports_scores<<endl;
        }
};

class Result: public Test,  Sports
{
int result;
public:
        Result(): Test(), Sports()
        {
        result=0;
        }
        void set_p()
        {
        Test::set_p();
        Sports::set_p();
        result = test_scores + sports_scores;
        }
        void display_p()
        {
        cout<<"The result is: "<<endl<< result;
        }
};

int main()
{
Student s;
s.set_p();
s.display_p();

//Test t;
//t.set_p();
//t.display_p();

//Sports sp;
//sp.set_p();
//sp.display_p();

Result r;
r.set_p();
r.display_p();

return 0;
}


Enter the USN:
007
7
Enter the test score:
100
Enter the sports scores:
100
The result is:
200
