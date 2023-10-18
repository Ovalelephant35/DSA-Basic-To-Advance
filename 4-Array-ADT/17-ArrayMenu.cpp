#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
class Array{
    int *A;
    int size;
    int len;
    Array(){
        size=10;
        len=0;
        A = new int[size];
    }
    Array(int sz){
        size = sz;
        len =0 ;
        A = new int[size];
    }
    ~Array(){
        delete []A;
    }
    void display(){
        for(int i=0 ; i<len ; i++){
            cout<<A[i]<<" ";
        }
    }
    void insert(int index , int num){
        if(index>=0 && len<size && index<size){
            int i=len-1;
            while(i>=index){
                A[i+1] = A[i];
                i--;
            }
            A[index] = num;
            len++;
        }
    }
    void deletion(int index){
        if(index>=0 && index<len){
            int i=index;
            while(i<len){
                A[i] =A[i+1];
                i++;
            }
            len--;
        }
    }
    

}







int main(){
   
return 0;
}