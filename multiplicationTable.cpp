//Multiplication table using while loop

// #include <iostream>
// using namespace std;
// int main() {
//     int n,i;
//     int result;
//     i=1;

//     cout<<"Enter a number:"<<endl;
//     cin>>n;

//     while(i<=10){
//         //n * i = result

//         result = n*i;
//         cout<<n<<" * "<<i<<" = "<<result;
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


//multiplication table using do-while loop

#include<iostream>
using namespace std;
int main() {
    int n, i=1;
    cout<<"Enter a Number:";
    cin>>n;

    do{
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }while(i<=10);

    return 0;
}
