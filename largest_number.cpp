#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"Enter the number a : "<<endl;
    cin>>a;
    cout<<"Enter the number b : "<<endl;
    cin>>b;
    cout<<"Enter the number c : "<<endl;
    cin>>c;

    if(a>b && a>c){
        cout<<"largest number is : "<<a<<endl;
    }
    else if(b>c){
        cout<<"largest number is : "<<b<<endl;

    }
    else {
        cout<<"largest number is : "<<c<<endl;
    }

}