#include <iostream>
using namespace std;
int main() {

    int a=6;
    cout<<(a++)<<endl;  //6

    int b=7;
    cout<<(--a)<<endl;  //6

    b=a+5;
    cout<<(b)<<endl;    //11

    return 0;
}