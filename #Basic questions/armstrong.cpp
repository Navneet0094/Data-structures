#include<cmath>
#include<iostream>
using namespace std;
int countDigit(int num){
    int count= 0;
    while(num){
        count++;
        num = num/10;
    }
    return count;
}

bool armStrong(int num,int digit){
    int n = num,rem,ans=0;
    while(num){
        rem = num%10;
        ans = ans+ pow(rem,digit);
        num = num/10;
    }
    return ans ==n;


}
int main(){
    int num; 
    cin>>num; 
    int digit  = countDigit(num);
    cout<<armStrong(num,digit);


}