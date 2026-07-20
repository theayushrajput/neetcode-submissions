class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map <int,int> mpp;
        int more=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second>1){
                more++;
            }
            
        }
        if(more>0){
            return true;
        }
        return false;
        
    }
};