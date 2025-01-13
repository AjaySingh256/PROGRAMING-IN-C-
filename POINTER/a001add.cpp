//add two num use pointer
#include<iostream>
using namespace std;
int main()
{
    // int x=6;
    // int y=8;
    // int* p1=&x;
    //  int* p2=&y;
    //  cout<<*p1+*p2;
int x,y;
int* p1=&x;
int* p2=&y;
cout<<"Enter the first num:";
cin>>*p1;
cout<<"Enter the second num:";
cin>>*p2;
cout<<*p1+*p2;

}
// ****OUTPUT******
// Enter the first num:10
// Enter the second num:20
// 30
