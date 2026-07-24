//Brute Force
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
    
    //code for prefixmax to get leftmax
    //start from 1 till n-1
    vector<int>prefix(n);
    prefix[0]=height[0];
    for(int i=1;i<n;i++){
        prefix[i]=max(prefix[i-1],height[i]);
    }

    //code for suffixmax to get rightmax
    //start from second last til 0
    vector<int>suffix(n);
    suffix[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=max(suffix[i+1],height[i]);
    }

    //final code using prefixmax and suffixmax as leftmax and rightmax at each index

        int total=0;
        for(int i=0;i<n;i++){
           int leftmax=prefix[i];
           int rightmax=suffix[i];

           //for anybuilding 1 largest on left is taken and one largest on right is taken, then smallest of that 2 is taken to store the water otherwise water flow will happen. 
           //so the taken one - height of current i give water store above each building 

            if(height[i]<leftmax && height[i]<rightmax){
                total+=min(leftmax,rightmax)-height[i];
            }

        }
        return total;
        
    }
};