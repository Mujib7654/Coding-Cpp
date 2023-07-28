#include <iostream>
using namespace std;
int main() {
    int num1=6;
    int num2=3;

//Arithmatic operator


    cout<<num1+num2<<endl;  //9
    cout<<num1-num2<<endl;  //3
    cout<<num1*num2<<endl;  //18
    cout<<num1/num2<<endl;  //2
    cout<<num1%num2<<endl;  //0
    
//Relational Operators(0-false, 1- true) 


    cout<<(num1==num2)<<endl;   //false
    cout<<(num1!=num2)<<endl;   //true
    cout<<(num1>=num2)<<endl;   //true


//Assignment operator


    num1+=3;   //num1=num1+3 (6+3=9)
    cout<<num1<<endl;   //9

    num2-=2;   // num2= num2-2 (3-2=1)
    cout<<num2<<endl;   //1



    return 0;
}