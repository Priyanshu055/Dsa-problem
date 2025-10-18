class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       vector<int>cnt(101);
       int maxfreq=0;
        for(int num:nums){
            cnt[num]++;
            maxfreq=max(maxfreq,cnt[num]);
        } int result=0;
        for(int i=0;i<101;i++){
            if(cnt[i]==maxfreq){
                result+=maxfreq;
            }
        }
        return result;

    }
};