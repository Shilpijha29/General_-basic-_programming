#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"enter 2 integers:";
    cin>>n1>>n2;
    cout<<"enter an opertor(+,-,/,%):";
    char opertor;
    cin>>opertor;
    switch(opertor){
        case '+':
        cout<<"Sum is :"<<n1+n2<<endl;
        break;
        case'-':
        cout<<"Diffrence is:"<<n1-n2<<endl;
        break;
        case'*':
        cout<<"product is: "<<n1*n2<<endl;
        break;
        case'/':
        cout<<"division is: "<<n1/n2<<endl;
        break;
        case'%':
        cout<<"Remainder is: "<<n1%n2<<endl;
        break;
        default:
        cout<<"enter a valid operator:"<<endl;




    }

}
