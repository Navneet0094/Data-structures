#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    int arr[1000] = {0,1};
    for (int i = 2 ;i<=n-1;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }    
    cout<<n<<"th fibonacci no is : " << arr[n-1]<<endl;
    for (int j = 0 ;j<= n-1;j++){
    cout<<arr[j]<<"   ";
    }
}