class Solution {
public:
    bool isValid(string s)
    {
        //Created A Stack
        stack<char> dax;
        //Traverse
        for(int i=0;i<s.length();i++)
        {
            if(dax.empty())
                dax.push(s[i]);
            else if(s[i]==')' && dax.top()=='(')
                dax.pop();
            else if(s[i]=='}' && dax.top()=='{')
                dax.pop();
            else if(s[i]==']' && dax.top()=='[')
                dax.pop();
            else
                dax.push(s[i]);
        }
        if(dax.empty())
            return true;
        return false;
    }
};
