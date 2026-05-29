class Solution {
public:
    int bs(vector<int>& nums, int target, int start, int end){
        // base cse
        if(start>end) return -1;
        int  mid = start + (end-start)/2;
        if(nums[mid]==target) {
            return mid;
        }else if(nums[mid]<target){
            start = mid+1;
            return bs(nums, target, start, end);
        }else{
            end = mid-1;
            return bs(nums, target, start, end);
        }

        return mid;


    }
    int search(vector<int>& nums, int target) {
        return bs(nums, target, 0, nums.size()-1);
    }
};
