#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<stdio.h>
#include<utility>
#include<stack>
#include<list>
#include<queue>
using namespace std;
 
//pairs
// void pairs(){
//     pair<int , int> p = {1,2};
//     cout<<p.first<<" "<<p.second<<endl;
//     pair<int , pair<int , int> > q = {1 , {3,4}};
//     cout<<q.second.second<<endl;
//     pair<int , int> arr[] ={{1,2},{2,3} , {5,6} };
//     cout<<arr[2].first; 
// }

//vectors
void vectors(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.pop_back();
    vector<int> v1(10 , 0);
    vector<int> v2(8);
    vector<int>::iterator it = v.begin();
    it++;
    cout<< *(it)<<" "<<endl;
    int i=0;
    for(auto j : v2){
        v2[i]=(random()/1000000);i++;}
        for(auto j : v2)cout<<(j)<<" ";
        cout<<endl;
    v2.erase(v2.begin()+2 , v2.begin()+4);
    v2.insert(v2.begin() , 5);
    for(auto j : v2)cout<<(j)<<" ";
    //it is basically pointers in action just not able to see them
    cout<<v.empty();
    cout<<v.size();

}

//lists - similar to vector except give push front operation as well
void lists(){
    list<int>ls;
    ls.push_front(5);
    ls.push_front(6);
    for(auto a : ls)cout<<a<<" ";
}
//stack - last in first out
void stacks(){
    stack<int>s;

}
int main(){
//    pairs();
      vectors();
      cout<<endl<<endl<<endl;
      lists();
return 0;
}