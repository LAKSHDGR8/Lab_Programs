#include<bits/stdc++.h>
using namespace std;

template<typename t>class calculator{
public:
        t add(t a,t b){
                return a+b;
        }
        t sub(t a,t b){
                return a-b;
        }
        t mul(t a,t b){
                return a*b;
        }
        t div(t a,t b){
                if(b!=0){
                return a/b;
                }
                else{
                        cout<<"Cant divide by zero"<<endl;
                return 0;
                }
        }
};


int main(){
calculator<double> cal;
 char c;

do{
        cout<<"Choose the operation"<<endl;
        cout<<"a.Addition"<<endl;
        cout<<"b.Subtraction"<<endl;
        cout<<"c.Multiplication"<<endl;
        cout<<"d.Division"<<endl;
        cout<<"e.Exit"<<endl;
        cin>>c;
        double a,b;
        switch(c){
                case 'a':
        
                        cout<<"Enter 2 numbers"<<endl;
                        cin>>a>>b;
                        cout<<"Result : "<<cal.add(a,b)<<endl;
                        break;

                case 'b':
                        cout<<"Enter 2 numbers"<<endl;
                        cin>>a>>b;
                        cout<<"Result : "<<cal.sub(a,b)<<endl;
                        break;

                case 'c:
                        cout<<"Enter 2 numbers"<<endl;
                        cin>>a>>b;
                        cout<<"Result : "<<cal.mul(a,b)<<endl;
                        break;

                case 'd':
                   
                        cout<<"Enter 2 numbers"<<endl;
                        cin>>a>>b;
                        cout<<"Result : "<<cal.div(a,b)<<endl;
                        break;

                case 'e':
                        cout<<"Exiting...."<<endl;
                        break;

                default:
                        cout<<"invalid choice"<<endl;
                        break;
        }
        }while(c!='e');
return 0;
}
