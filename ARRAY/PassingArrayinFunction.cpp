//Passing Array in Function
#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){
    b[0]=100;
}

int main()
{
    int arr[5]={1,4,7,2,4};
    display(arr);
    change(arr);
    display(arr);
}
// ***OUTPUT***
// 1 4 7 2 4
//  change  100 4 7 2 4
