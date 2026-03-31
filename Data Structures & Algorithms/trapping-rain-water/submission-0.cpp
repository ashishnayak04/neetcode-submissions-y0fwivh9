class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0  , r = height.size() - 1 ;
        int leftmax = 0 , rightmax = 0 ;
        int water = 0 ;
        while( l < r)
        {
            if (height[l] < height[r])
            {
                leftmax = max (leftmax , height[l]);
                water += leftmax - height[l];
                l++;
            }
            else 
            {
                rightmax = max (rightmax,height[r]);
                water += rightmax - height[r];
                r-- ;
            }
        }
    return water ;
    }
};
