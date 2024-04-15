#include<iostream>
using namespace std;
int main(){
int num1, num2;
cin>>num1>>num2;

cout<<"valye of num1:" <<num1<<endl;
cout<<"value of num2:" <<num2<<endl;
  int temp;
  temp = num1;
  num1 = num2;
  num2 = temp;


    return 0;
}