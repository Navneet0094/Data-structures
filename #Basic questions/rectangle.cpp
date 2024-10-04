#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a==b)&&(c==d) || (a==c)&&(b==d) || (a==d)&&(b==c)){
        cout<<"yes it will form a rectangle ";
         
         }
    else cout<<"NO rectsngle will be formed";
}