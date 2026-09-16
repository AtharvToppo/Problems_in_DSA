class Solution {
public:
    void reverseString(vector<char>& s)
    {
        stack<char>ch;

        for(int i=0;i<s.size();i++)
        {
            ch.push(s[i]);
        }

        int i=0;

        while(!ch.empty())
        {
            s[i]=ch.top();
            i++;
            ch.pop();
        }
    }
};