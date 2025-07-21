class Solution {
public:
    bool isPalindrome(int x) {
     string str=to_string(x);
    string reversed=str;
    reverse(reversed.begin(),reversed.end());
    if(str==reversed){
        return true;
    }
    return false;
    }
};