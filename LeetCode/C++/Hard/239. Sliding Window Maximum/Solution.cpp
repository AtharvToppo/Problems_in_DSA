class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>q;
        vector<int>ans;

        int max_num=INT_MIN;

        for(int i=0;i<k-1;i++)
        {
            
            q.push(nums[i]);
        }

        for(int i=k-1;i<nums.size();i++)
        {
            q.push(nums[i]);
            
            q.pop();
        }

        return ans;
    }
};