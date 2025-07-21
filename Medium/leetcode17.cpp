class Solution {
public:

    void solve(string digits,string output,int idx, vector<string>& ans,string mapping[]){
        if(idx>=digits.length()){
            ans.push_back(output);
            return;
        }

        int number=digits[idx]-'0';
        string val=mapping[number];

        for(int i=0;i<val.length();i++){
            output.push_back(val[i]);
            solve(digits,output,idx+1,ans,mapping);
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
      vector<string>ans;
      if(digits.length()==0){
        return ans;
      }
      string output;
      int idx=0;
      string mapping[10]=  {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

      solve(digits,output,idx,ans,mapping);
      return ans;
    }
};
