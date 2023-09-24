//Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
void mul(int *x,int *y){
    int mul;
    mul=((*x)*(*y));
    cout<<mul;
   
}
int main(){
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    int *x=&a;
    int *y=&b;
    //mul(x,y);
   cout<<"Produch of two number is:";
   mul(x,y);
}