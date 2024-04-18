#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a :\n";
    cin>>a;
    cout<<"enter b :\n";
    cin>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"After swaping "<<"a is "<<a<<" and "<<"b is "<<b;
}