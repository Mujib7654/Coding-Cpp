#include<iostream>
using namespace std;

//function definition

int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1, int num2, int num3){
    int sum = num1 + num2+ num3;
    return sum;
}
float add(float num1 , float num2){
    float sum= num1+ num2;
    return sum;
}

//calling this function in our main function

int main(){
    int a=2;
    int b=6;
    int c=7;

    int e=3.14;
    int f= 2.5;

    // add(a,b);
    cout<<add(a,b)<<endl;   //8

    cout<<add(a,b,c)<<endl; //15

    cout<<add(a,b,1)<<endl;   //9

    cout<<add(e,f)<<endl;


    return 0;
}