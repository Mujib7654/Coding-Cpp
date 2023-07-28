#include<iostream>
using namespace std;

int add(int , int);

int main(){
    int a= 2;
    int b= 4;

    cout<<add(a,b);

    return 0;
}

int add(int num1, int num2){
    int sum= num1+num2;
    return sum;
}