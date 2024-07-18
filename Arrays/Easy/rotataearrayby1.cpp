#include<iostream>
using namespace std;

int main() { 
//     int a[5] ={1,2,3,4,5};
//     int i = 0;
//     while(i <= 5 - 1){
//         swap(a[i],a[5-1]);
//         i++;    
// }
// for(int j = 0 ; j<5 ;j++){
//     cout<<a[j]<<"  ";
// }

// different approach 

int a[5] ={1,2,3,4,5};
int temp = a[5-1];
for (int i = 4 ; i>=0 ;i--){
    a[i+1] = a[i];
}
    a[0] = temp;
for(int i = 0; i<5;i++){
    cout<<a[i]<<"  ";
}

}
