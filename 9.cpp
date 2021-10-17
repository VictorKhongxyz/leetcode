class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        bool isPali = true;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != s[s.length()-i-1]) isPali = false;
        }
        return isPali;
        
    }
};
