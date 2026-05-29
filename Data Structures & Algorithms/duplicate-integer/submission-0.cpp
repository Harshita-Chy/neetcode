class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> count;

        for(auto it: nums){
            count[it]++;
            if(count[it]>=2){
                return true;
            }
        }
        return false;
        
    }
};