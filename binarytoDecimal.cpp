#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ans=0;
    int i=0;

    while(n>0){
        int lastDigit = n%10;  //remainder
        ans= ans+(lastDigit*pow(2, i));   //2 is a base value and i is power
        i++;  //to increment power
        n=n/10;   //to remove last digit
    }
    cout<<ans<<endl;
    return 0;
}