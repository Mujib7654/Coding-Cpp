// Print the first multiple of 5 which is also a multiple of 7 using while loop

// #include <iostream>
// using namespace std;
// int main() {
//     int i=5;

//     while(true) {
//         if(i%7==0) {
//             cout<<i<<endl;
//             break;
//         }
//         i+=5;
//     }
// }

// Print the first multiple of 5 which is also a multiple of 7 using for loop

#include <iostream>
using namespace std;
int main(){
    for(int i=5; ; i+=5){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
    }
}