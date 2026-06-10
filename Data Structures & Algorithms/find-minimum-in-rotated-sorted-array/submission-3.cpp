class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0 , mid = 0 , right = nums.size()-1 ;

        //5,7,9  ,1,2  
        // two hald one larger one smaller ,larger on left always
        //if mid < right ,mid is part of smaller ,look at left to mid
        //if mid > right,mid is part of larger part look at right side 
        while(left < right )
        {
            mid = left + (right-left)/2 ;
            if(nums[mid] < nums[right])
            right = mid ;
            else 
            left = mid +1 ;
        }
        return nums[left];
        
    }
};
