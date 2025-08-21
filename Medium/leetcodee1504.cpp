class Solution {
public:
     
     int DArraycnt(vector<int>&v){
        int cons=0;
        int subcnt=0;
        for(int & val:v){
            if(val==0){
                cons=0;

            }else{
                cons++;

            }
            subcnt+=cons;

        }
        return subcnt;
     }

    int numSubmat(vector<vector<int>>& mat) {
     int m=mat.size();
     int n=mat[0].size();

     int result=0;
     for(int i=0;i<m;i++){
        vector<int>v(n,1);
        for(int j=i;j<m;j++){
            for(int col=0;col<n;col++){
                v[col]=v[col]&mat[j][col];
            }
            result+=DArraycnt(v);
        }
     }   
     return result;
    }
};