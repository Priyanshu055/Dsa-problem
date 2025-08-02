class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
       unordered_map<int,int>mp;
       int minE=INT_MAX;
       for(int &x:basket1){
        mp[x]++;
        minE=min(minE,x);
       } 
       for(int &x:basket2){
        mp[x]--;
        minE=min(minE,x);
       }
       vector<int>finally;
       for(auto &it:mp){
        int cost=it.first;
        int count=it.second;
        if(count==0){
            continue;
        }
        if(count%2!=0){
            return -1;
        }
        for(int c=1;c<=abs(count)/2;c++){
           finally.push_back(cost);
        }
       }
       sort(finally.begin(),finally.end());
       long long result=0;
       for(int i=0;i<finally.size()/2;i++){
        result+=min(finally[i],minE*2);
       }

       return result;

    }
};