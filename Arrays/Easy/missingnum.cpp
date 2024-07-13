#include<iostream>
using namespace std;
int main(){
    int arr[5] = {0, 2, 3, 5, 1};
    int sum = 5 * (5 + 1) / 2; // Sum of first 5 natural numbers
    int add = 0;
    for(int i = 0; i < 5; i++){
        add = arr[i] + add;            
    }
    int res = sum - add;
    cout << res<<endl;    
    return 0;
}
