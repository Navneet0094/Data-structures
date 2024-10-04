#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count = 0;
    while(num){
        count++;
        num = num/10;
        
    }
    cout<<count<<endl;
    // int cnt = (log10(num)+1);
    // cout<<cnt;

}