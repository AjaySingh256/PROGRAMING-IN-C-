//sub string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string s = "abcdef";
    // // s.substr(idx)
    // cout<<s.substr(1,3);// b se lekr d tak

     string str;
    cout<<"Enter the string :";
    cin>>str;
    //abcdefgh -> n=8
    int n = str.length();

    cout<<str.substr(n/2);


}
//***output**
// Enter the string :BUTTERFLY
// ERFLY
