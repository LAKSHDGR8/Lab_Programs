#include<iostream>
#include<cstring>
using namespace std;

class Student
{
protected:
int USN[5];
string name[10];
int age[5];
public:
        Student()
        {
        for(i=0;i<5;i++)
        {
        USN[i] = 0;
        age[i] = 0;
        name[i] = "";
        }
};

class UgStudent
{
protected:
int sem[5];
int fees[5];
int stipend[5];
public:
        UgStudent()
        {
        for(i=0;i<5;i++)
        {
        sem[i] = 0;
        fees[i] = 0;
        stipend[i] = 0;
        }
        }
`

