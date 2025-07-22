class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
     int n=nums.size();
     int i=0,j=0,sum=0,result=0;
     unordered_set<int>st;
     while(j<n){
        if(!st.count(nums[j])){
            sum+=nums[j];
            result=max(result,sum);
            st.insert(nums[j]);
            j++;
        }
        else{
            while(i<n && st.count(nums[j])){
                sum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
        }
     } 
     return result;   
    }
};