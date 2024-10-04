#include<iostream>
using namespace std;
int main(){
    int n;
    int rem,ans = 0,mul=1;
    cin>>n;
    while(n!=0){
        rem = n%2;
        n = n/2;
        rem = rem^1;
        ans = ans+ rem*mul;
        mul = mul*2;
    }
     cout<<ans<<endl;
}