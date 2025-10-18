#include<iostream>
using namespace std;
int sum(int n){
    if(n<=0){
        return 0;
    }
    int p= n%10+sum(n/10);
    
    if(p>=10){
        return sum(p);
    }
    return p;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}