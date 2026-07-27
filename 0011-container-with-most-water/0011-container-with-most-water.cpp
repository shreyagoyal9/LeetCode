//optimal 2 pointer approach 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0; //left at index 0
        int right=n-1; //right at last index
        int maxwater=0;

        while(left<right){
           int width=right-left; //horizontal distance between two buildings
           int building=min(height[left],height[right]); //select smaller
           int area=width*building; //water unit = width multiplied to building
           maxwater=max(maxwater,area);

           if(height[left]<height[right]){ //move the smaller pointer
            left++;
           }
           else right--;
            
        }
        return maxwater;
    }
};