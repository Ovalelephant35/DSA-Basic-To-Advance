#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
class elements{
    public :
    int i;
    int j;
    int x;
};

class sparse{
    private:
    int n;
    int m;
    int num;
    elements *e;
    public:
    sparse(int n , int m, int num){
        this->n =n;
        this->m =m;
        this->num = num;
        e= new elements[num];
    }
    void read(){
        for(int k=0 ; k<num ; k++){
            cin>>e[k].i>>e[k].j>>e[k].x;
        }
    }
    void display(){
        int k=0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                
            }
        }
    }
};


int main(){
   
return 0;
}