#include<iostream>
using namespace std;
int main(){
    int ans =1,n;
    cin>>n;
    for(int i = 0; i<=n;i++){
        if(i*i<=n){
            ans = i;
        }
        else break;
    }
    cout<<ans;
    
}