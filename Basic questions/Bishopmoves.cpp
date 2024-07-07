#include<iostream>
using namespace std;
int main(){
    int A,B;
    cin>>A>>B;
    int totalSteps = min(8-A, 8-B) + min(A-1,8-B)+min(A-1,B-1) + min (8-A,B-1);
    cout<<totalSteps<<endl;
}