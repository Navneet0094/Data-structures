#include<bits/stdc++.h>
using namespace std;
int main(){//optimal

    int arr[6] = {1,2,54,34,67,5};
    int largest = arr[0], second  = INT_MIN;
    for(int i = 0 ; i<6;i++){
        if (largest<arr[i]){
            second  = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>second){
            second = arr[i];
        }
    }
    cout<<"largest element is : "<<largest<<endl;
    cout<<"second largest element is : "<<second<<endl;


//Better 
//     int arr[6] = {1,2,54,34,67,5};
//     int ans = INT_MIN;
//     for (int i = 0; i<6;i++ ){
//         if(arr[i]>ans){
//             ans = arr[i];
// }}
//     cout<<"largest number in an array is : "<<ans<<endl;
//     int second = INT_MIN;
//     for(int j = 0 ; j<6 ; j++){//Better apprach
//         if(ans!=arr[j]){
//             second = max(second,arr[j]);
// }
//             // if(arr[j]>second &&  arr[j]!= ans){
//             //     second = arr[j];
//             // }
// }
//     cout<<"seconf largest element is : "<<second<<endl;
}
