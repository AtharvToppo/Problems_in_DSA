class Solution {
public:
    int max_num(queue<int>q)
    {
        int large;
        large=q.front();
        q.pop();
        while(!q.empty())
        {
            if(large<q.front())
            {
                large=q.front();
                q.pop();
            }
            else
            {
                q.pop();
            }
        }
        return large;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        queue<int>q;
        vector<int>ans;

        for(int i=0;i<k-1;i++)
        {
            q.push(nums[i]);
        }

        for(int i=k-1;i<nums.size();i++)
        {
            q.push(nums[i]);
            ans.push_back(max_num(q));
            q.pop();
        }

        return ans;
    }
};