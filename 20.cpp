class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        map<char,char> check;
        check[')'] = '(';
        check['}'] = '{';
        check[']'] = '[';
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stack.push_back(s[i]);
            }
            else{
                if(stack.empty()) return false;
                char cur = stack.back();
                if(check[s[i]] != cur) return false;
                stack.pop_back();
            }
        }
        if(stack.empty())
            return true;
        else return false;
    }
};
