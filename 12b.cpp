#include<bits/stdc++.h>
using namespace std;
int n;
template<typename t>class STACK{
        t top;
        t* arr;
public:
        STACK(){
                arr = new t[n];
                top=-1;//               int arr[n];
        }
        void push(t e){
                if(top==n-1){
                        cout<<"Stack is Full"<<endl;
                        return ;
                }
                arr[++top]=e;
        }
        int ret;
        void pop(){
                if(top==-1){
                        cout<<"Stack is Empty"<<endl;
                        return;
                }
                ret=arr[top--];
        }
int i;
        void display(){
                for(i=0;i<=top;i++){
                        cout<<arr[i]<<" ";
                }
        }
};

int main(){
cout<<"Enter size of the stack"<<endl;
cin>>n;

STACK<int> s;
s.push(1);
s.push(2);
s.push(3);

s.display();
s.pop();
s.pop();

cout<<"\nAfter Popping"<<endl;
s.display();

return 0;
}
             
