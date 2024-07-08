#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = {1,2,54,34,67,5};
    int ans = INT_MIN;
    for (int i = 0; i<6;i++ ){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    cout<<"largest number in an array is : "<<ans<<endl;

    for(int j = 0 ; j<6 ; j++){
        if(ans!=arr[j]){
            ans = max(ans,arr[j]);
        }
    }
    cout<<"seconf largest element is : "<<ans<<endl;

    

}