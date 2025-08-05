class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
     int cnt=0;
      for(int num:fruits){
        for(int i=0;i<baskets.size();i++){
            if(baskets[i]>=num){
                baskets[i]=0;
                cnt++;
                break;
            }
        }
      }  
      return fruits.size()-cnt;
    }
};