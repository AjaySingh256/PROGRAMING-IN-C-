//Doublet Two Sum in Array
#include<iostream>
#include<vector>
using namespace std;
int main(){
   int x;
   cout<<"Enter the target:";
   cin>>x;
   vector<int> v; 
   int n;
   cout<<"Enter array size:";
   cin>>n;

   cout<<"Enter array Element:";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}

// ***OUTPUT***
// Enter the target:5
// Enter array size:4
// Enter array Element:1
// 2
// 3
// 4
// (0,3)
// (1,2)
