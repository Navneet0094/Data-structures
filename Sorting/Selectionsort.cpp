#include<iostream>
using namespace std;
int main(){
    int arr[6] = {10,8,2,3,1,4};
    for(int i = 0 ; i < 6-1 ; i++){
        int index = i;
        for(int j = i+1 ; j < 6 ; j++){
            if (arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for(int k = 0 ; k < 6 ; k++){
        cout<< arr[k]<<"  ";
    }
}