#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[6] = {1,2,3,4,5,6};
    int i = 0 ;
    while(i<n){
        swap(arr[i],arr[n-1-i]);
        i++;
    }
    for(int j = i ; j<=6;j++){
        swap(arr[j],arr[6-1]);
    }
    for(int k = 0 ; k<6;k++){
        cout<<arr[k]<<"  ";
    }
}