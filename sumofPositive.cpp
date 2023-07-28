// program to find the sum of positive numbers using do while loop
// If the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

// #include<iostream>
// using namespace std;
// int main() {
//     int num = 0;
//     int sum = 0;

//     do{
//         sum += num;
//         cout<<"Enter a num:";
//         cin>>num;
//     }while(num>=0);

//     cout<<"Sum is"<<sum<<endl;

//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    int a=0, sum=0;
    do{
        sum+=a;
        cin>>a;       
    }while(a>=0);
    cout << sum;
    return 0;
}