//Find smallest and largest num in array
#include<iostream>
using namespace std;
int main()
{
    int num[7] = {5,6,7,8,-4,-24,23};
    int smallest =INT16_MAX;
    int largest = INT16_MIN;
    for(int i =0;i<6;i++)
   {
        if(num[i]<smallest){
            smallest = num[i];
}
    }
 for(int i =0;i<7;i++)
    {
        if(num[i]>largest){
            largest= num[i];
        }
    }

cout <<"smallest = "<< smallest <<endl;
cout <<"largest = " << largest <<endl;
    return 0;
}
// ***OUTPUT****
// smallest = -24
// largest = 23
