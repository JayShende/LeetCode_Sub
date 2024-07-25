class Solution {
public:
    bool isValid(string str) {
        stack<char> st;

        for(auto it:str)
        {
            if( (it == '(') or (it =='[') or( it == '{') )
            {
                st.push(it);
            }
            else{
                if(st.empty())
                {
                    return false;
                }

                char ch=st.top(); st.pop();
                if( (it==')' && ch =='(') || (it==']' && ch =='[') || (it=='}' && ch =='{')  )
                {
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        else{
            return false;
        }
    }
};