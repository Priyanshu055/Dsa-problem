// convert each no into string then short it now find the power of two for each term like 0,1,2,3,.... now sort that particular power of two if they get same return true else false;

class Solution {
public:
     
    string getsorted(int n){
        string s=to_string(n);
        sort(s.begin(),s.end());
        return s;
    }

    bool reorderedPowerOf2(int n) {
        string s =getsorted(n);
        for(int i=0;i<=29;i++){
            if(s==getsorted(1<<i)){
                return true;
            }
        }
        return false;
    }
};