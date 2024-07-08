#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1,2,13,42,6,8};
    // int temp[6];
    // int i = 5,j = 0;
    // while(i>=0){
    //     temp[j] = arr[i];
    //     j++;
    //     i--;
    // }
    // for (int k = 0; k < 6; k++) {
    //     cout << temp[k] << " ";
    // }
    // cout << endl;


    int i = 0 ,j = 5;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int k = 0 ; k <6;k++){
        cout<<arr[k]<<"   ";
    } 

    return 0;
}