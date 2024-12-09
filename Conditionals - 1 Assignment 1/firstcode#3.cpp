// Take 2 integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 integers"<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greatest"<<endl;
    }
    else if(a<b){
    cout<<b<<" is grastest";
    }
    else
    cout<<"both no are equal";
}