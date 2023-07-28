#include <iostream>
using namespace std;

// int add(int a, int b, int c)
int add(int a, int b=0, int c){
    return a+b+c;
}

int main(){
    int num1=2;
    int num2=4;
    cout<<add(num1, num2)<<endl;

    return 0;
}