class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
      int minIdx=0,maxIdx=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        if(nums[i]<nums[minIdx]) minIdx=i;
        if(nums[i]>nums[maxIdx]) maxIdx=i;
      }  
      if(minIdx>maxIdx) swap(minIdx,maxIdx);
      int deleteFromFront=maxIdx+1;
      int deletFromBack=n-minIdx;
      int deletFromBoth=(minIdx+1)+(n-maxIdx);
      return  min(min(deleteFromFront,deletFromBack),deletFromBoth);
    }
};