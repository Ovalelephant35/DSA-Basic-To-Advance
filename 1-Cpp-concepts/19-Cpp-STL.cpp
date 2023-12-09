#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<stdio.h>
#include<utility>
using namespace std;
 
//pairs
void pairs(){
    pair<int , int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int , pair<int , int> > q = {1 , {3,4}};
    cout<<q.second.second<<endl;
    pair<int , int> arr[] ={{1,2},{2,3} , {5,6} };
    cout<<arr[2].first; 
}

//vectors
void vectors(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0];
}
int main(){
   pairs();
return 0;
}