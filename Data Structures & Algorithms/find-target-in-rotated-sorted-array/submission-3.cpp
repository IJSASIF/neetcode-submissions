class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0 , mid = 0 , right = nums.size()-1 ;
        while(left <= right)
        {
            mid = left + (right-left)/2 ;
            if(nums[mid] == target)return mid;
            if ( nums[mid] > nums[right])//mid is part of larger left part
            {
                if(nums[mid] > target && nums[left]<= target)
                right = mid-1;
                else left = mid +1 ;
            }
            else
            {
                if(nums[mid] < target  && target <= nums[right])
                left = mid + 1;
                else right = mid - 1 ;

            }
        }
        return -1;
        
    }
};
