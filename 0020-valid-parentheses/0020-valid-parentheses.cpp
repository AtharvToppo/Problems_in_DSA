class Solution {
public:
    bool isValid(string s) {
        stack<char>bracket;

        for(int i=0;i<s.size();i++)
        {
            if(bracket.empty())
            {
                bracket.push(s[i]);
            }
            else if( s[i]=='(' ||  s[i]=='[' ||  s[i]=='{' )
            {
                bracket.push(s[i]);
            }
            else if( s[i]==')' )
            {
                if(bracket.top()=='(')
                {
                    bracket.pop();
                }
                else
                {
                    return 0;
                }
            }
            else if( s[i]==']' )
            {
                if(bracket.top()=='[')
                {
                    bracket.pop();
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                if(bracket.top()=='{')
                {
                    bracket.pop();
                }
                else
                {
                    return 0;
                }
            }
        }

        return bracket.empty();
    }
};