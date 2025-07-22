class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=0;
        for(int i=1;i<nums.size();i++){
            if(nums[x]!=nums[i]){

             nums[x+1]=nums[i];
                x=x+1; 
            }
        }
        return x+1;
    }
};