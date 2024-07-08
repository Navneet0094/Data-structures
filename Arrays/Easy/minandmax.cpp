#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,5,67,-65};
    int ans = INT_MAX;
    for(int i =0;i<5;i++){
        if(arr[i]<ans) {
            ans = arr[i];
            }
    }
        cout<<"minimum ";
        cout<<ans<<endl;
    int max = INT_MIN;
    for(int j = 0; j <5;j++){
        if(arr[j]>max) {
            max = arr[j];
            }

    }    
        cout<<"maxmum ";
        cout<<max<<endl;
}