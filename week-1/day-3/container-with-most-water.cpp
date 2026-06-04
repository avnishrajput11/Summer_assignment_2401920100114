class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area;
        int maxarea=0;
      int l=0;
      int e=n-1;

      while(l<e){
        int h=min(height[l],height[e]);
            int b=e-l;
             area=h*b;
            maxarea=max(maxarea,area);
            if(height[l]<height[e])l++;
            else e--;}

      return maxarea;
    }
};