#include<iostream>
using namespace std;
int main(){
    int a = 10; //b= 10, a=11

    int b = a++; 
    cout <<b<<" "; // b=10
    b= ++a; //a=12 , b=12
    cout<<a; //a=12
    return 0;
}