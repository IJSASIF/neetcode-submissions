class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> numbers(nums.begin(),nums.end());
        int ans =  0 ;
        for(auto num : numbers)
        {
            if(!numbers.contains(num-1)){
                int length = 0 ;
                while(numbers.count(num+length))
                {
                    length++;
                }
                ans = max(ans,length);
            }
        }
        return ans;

        
    }
};
