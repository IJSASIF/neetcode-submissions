class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0 , j = heights.size()-1 , ans = 0 ;
        while(i < j)
        {
            int output = (j-i)*min(heights[i],heights[j]);
            cout<< i << " "<< j << " :"<<output<<endl;
            ans = max(output,ans);
            if(heights[j]>heights[i])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
        
    }
};
