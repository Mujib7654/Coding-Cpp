//code to show the maximum number between two numbers by using switch case

#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cout<<"Enter n1"<<endl;
    cin>>n1;
    cout<<"Enter n2"<<endl;
    cin>>n2;

    switch(n1>n2)

    {
        case 0:
        cout<<n1<<"is not greater"<<endl;
        break;

        case 1:
        cout<<n1<<"is greater"<<endl;
        break;

        default:
        cout<<"invalid"<<endl;

    }
    return 0;
}