#include<iostream>
using namespace std;
template<class T>
void sorting(T arr[], int n)
{
T key;
int i,j;
for(i=1;i<n;i++)
{
        key=arr[i];
        j=i-1;


while(j>=0 && arr[j]>key)
{
        arr[j+1]=arr[j];
        j=j-1;
}
arr[j+1]=key;
}
}
template<class T>
void printArray(T arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
template<class T>
void search(T arr[], int n)
{
        T key;
        cout<<"Enter the value being searched: "<<endl;
        cin>>key;
        for(int i=0;i<n;i++)
        {
        if(key==arr[i])
                cout<<"At position "<<i<<endl;
        else
                i++;
        }
}
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sorting(arr, n);
    printArray(arr, n);
    search(arr,n);

    return 0;
}

5 6 11 12 13
Enter the value being searched:
11
At position 2
[iiics69@fedoracs OOP_Lab]$ ./a.out
5 6 11 12 13
Enter the value being searched:
13
At position 4
