class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> n;
        int p=nums.size();
        for(int i=0;i<p;i++){
            n.push_back(nums[i]*nums[i]);
        }
        sort(n.begin(),n.end());
        return n;
    }
};