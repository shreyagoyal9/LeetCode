//optimal 2 pointer aproach o(n)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lftptr =0;
        int rgtptr=n-1;
        int maxwater=0;

        while(lftptr < rgtptr){ //index
            int width=rgtptr-lftptr ;
            int heightbar=min(height[rgtptr],height[lftptr ]);
            int area=width*heightbar;
            maxwater=max(maxwater,area);

            if (height[lftptr ]<height[rgtptr]){
                lftptr ++;
            }
            else{
                rgtptr--;
            }
        }
        
    return maxwater;}
};