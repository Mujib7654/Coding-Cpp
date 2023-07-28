//program to print the value if it is even and divisible by 3

#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;

    if((num%2==0) && (num%3==0)) {
        cout<<"Even and Divisible by 3"<<endl;
    }
    else {
        cout<<"default case"<<endl;
    }
}