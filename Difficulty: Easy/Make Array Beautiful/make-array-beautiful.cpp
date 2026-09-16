class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>temp;
        
        for(int i=0;i<arr.size();i++)
        {
            if(temp.empty())
            {
                temp.push(arr[i]);
            }
            else if(temp.top()>=0 && arr[i]>=0)
            {
                temp.push(arr[i]);
            }
            else if(temp.top()<0 && arr[i]<0 )
            {
                temp.push(arr[i]);
            }
            else
            {
                temp.pop();
            }
        }
        
        vector<int>ans;
        while(! temp.empty())
        {
            ans.push_back(temp.top());
            temp.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};