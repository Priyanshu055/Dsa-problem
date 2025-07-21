class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        ans.push_back(s[0]);
        int cnt =1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
               cnt+=1;
               if(cnt<3){
                ans.push_back(s[i]);
               }
            }
            else{
                ans.push_back(s[i]);
                cnt=1;
            }

        }
        return ans;
    }
};