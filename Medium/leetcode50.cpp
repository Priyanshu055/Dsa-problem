class Solution {
public:
    double myPow(double x, int n) {
       long binform=n;
       if(n<0){
        x=1/x;
        binform=-binform;
       } 
        
    if(n==0) return 1.0;
    if(x==0) return 0;
    if(x==1) return 1;
    if(x==-1 && n%2==0) return 1;
    if(x==-1&& n%2!=0) return -1;

    double ans=1;
    while(binform>0){
        if(binform%2==1){
            ans=ans*x;
        }
        x=x*x;
        binform/=2;

    }
    return ans;
    }
};