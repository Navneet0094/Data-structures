#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,6,8,10};
    int x ;
    cin>>x;
    for (int i = 0 ; i< (sizeof(arr)/sizeof(arr[0])); i++){
        if(arr[i]==x){
            cout<<i;
            return 0;
    }   
        }
        cout<<-1;
        return 0;
}