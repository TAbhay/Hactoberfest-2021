class Solution {
public:
    int trap(vector<int>& height) 
    {
        int left = 0, right = height.size()-1;
        int trap = 0;
        int maxLeft = 0, maxRight = 0;
        
        while(left <= right)
        {
            
            if(height[left] <= height[right])
            {
                if(height[left] >= maxLeft) maxLeft = height[left];
                else trap += maxLeft - height[left];
                left++;
            }
            else
            {
                if(height[right] >= maxRight) maxRight = height[right];
                else trap += maxRight - height[right]; 
                right--;
            }
        }
        return trap;  
    }
};
