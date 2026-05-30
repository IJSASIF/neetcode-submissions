class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,n = nums.size();
        vector <int >prefixMul(n,1) ,postfixMul(n,1),ans(n,0) ;
        for  ( i = 1 ; i < n ;i++)
        {
              prefixMul [i] = prefixMul[i-1] * nums[i-1]; 
        }
        for (i = n-2 ;i >= 0 ;i--)
        {
            postfixMul[i] =  postfixMul[i+1] * nums[i+1] ;

        }
        for(i = 0 ; i < n ;i++)
        {
              ans [i] = postfixMul[i] * prefixMul[i] ;
        }
        return ans;


    }
};
