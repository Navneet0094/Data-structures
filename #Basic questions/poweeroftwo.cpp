#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n < 1) {
        cout << 0 << endl;
        return 0;
    }
    while (n != 1) {
        if (n % 2 == 1) {
            cout << 0 << endl;
            return 0;
        }
        n = n / 2;
    }
    cout << 1 << endl;
    return 0;
}


// //3ms
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 0 ;i <=31;i++){
//         int ans = pow(2,i);
//         if(ans == n){
//         cout<<1;
//         return 0;}
//     }      
//         cout<<0;
//         return 0; 
// }