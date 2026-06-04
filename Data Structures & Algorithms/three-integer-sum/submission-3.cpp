class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        
        for(int k = 0 ; k < nums.size()-2 ; k++)
        {
            if(k > 0 && nums[k] == nums[k-1])continue;
            int i = k+1, j = nums.size()-1 ;
            while( i < j )
            {

             
                int sum = nums[i] + nums[j] ,target = -nums[k] ;
                if(sum == target) {
                    vector<int>res = {nums[i],nums[j],nums[k]};
                    ans.push_back(res);
                    while(i < j && nums[i] == nums[i+1])i++;
                    while(i < j&& nums[j] == nums[j-1])j--;
                    i++;
                    j--;
                }
                else if(sum > target )j--;
                else i++;
            }
            

        }
        return ans;
        
    }
};
