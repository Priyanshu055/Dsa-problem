class Solution {
public:
    
    void build(int i,int l,int r,vector<int>&baskets, vector<int>&segtree){
        if(l==r) {
            segtree[i]=baskets[l];
            return ;
        }
        int mid=l+(r-l)/2;
        build(2*i+1,l,mid,baskets,segtree);
        build(2*i+2,mid+1,r,baskets,segtree);
        segtree[i]=max(segtree[2*i+1],segtree[2*i+2]);

    }

    bool querrysegtree(int i,int l,int r, vector<int>&segtree,int fruit){
        if(segtree[i]<fruit){
            return false;
        }
        if(l==r){
            segtree[i]=-1;
            return true;
        }
        int mid=l+(r-l)/2;
        bool placed=true;

        if(segtree[2*i+1]>=fruit){
            placed=querrysegtree(2*i+1,l,mid,segtree,fruit);

        }
        else{
            placed=querrysegtree(2*i+2,mid+1,r,segtree,fruit);
        }
        segtree[i]=max(segtree[2*i+1],segtree[2*i+2]);
        return placed;
    }

    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        vector<int>segtree(4*n,-1);
        build(0,0,n-1,baskets,segtree);
        int unplced=0;
        for(int & fruit:fruits){
           if(querrysegtree(0,0,n-1,segtree,fruit)==false){
            unplced++;
           } 
        }
        return unplced;

    }
};