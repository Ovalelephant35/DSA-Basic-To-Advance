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
    s.push(5);
    s.push(7);
    s.pop();//latest element will be removed;
    cout<<s.size()<<" ";
    cout<<s.top();
//there is empty and swap also 
}

//queue - first in first out
void queues(){
    queue<int>q;
    //rest similar to stack everything
    priority_queue<int>pq; //max heap
    //elements remain at the top bases on descending order top to bottom a tree is maintained
    pq.push(8);
    pq.push(7);//logn
    pq.push(12);
    cout<<pq.top();//o(1)

    priority_queue<int , vector<int> , greater<int> >pqr;
    pqr.push(8);
    pqr.push(7);
    pqr.push(12);
    cout<<pqr.top();

}

void sets(){
    set<int> s;//everyti
}
int main(){
//    pairs();
      cout<<endl<<endl;
      vectors();
      cout<<endl<<endl;
      lists();
      cout<<endl<<endl;
      stacks();
      cout<<endl<<endl;
      queues();
      cout<<endl<<endl;
      sets();
      cout<<endl<<endl;
return 0;
}