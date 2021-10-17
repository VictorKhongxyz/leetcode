class Solution {
public:
    int romanToInt(string s) {
        map<char, int> symbol;   
        symbol['I'] = 1;
        symbol['V'] = 5;
        symbol['X'] = 10;
        symbol['L'] = 50;
        symbol['C'] = 100;
        symbol['D'] = 500;
        symbol['M'] = 1000;
        
        
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            if(i == s.length()-1) {
                ans += symbol[s[i]];
                break;
            }
            if(s[i] == 'I' && s[i+1] == 'V'){
                ans += 4;
                i++;
            }
            else if(s[i] == 'I' && s[i+1] == 'X'){
                ans += 9;
                i++;
            }
            else if(s[i] == 'X' && s[i+1] == 'L'){
                ans += 40;
                i++;
            }
            else if(s[i] == 'X' && s[i+1] == 'C'){
                ans += 90;
                i++;
            }
            else if(s[i] == 'C' && s[i+1] == 'D'){
                ans += 400;
                i++;
            }
            else if(s[i] == 'C' && s[i+1] == 'M'){
                ans += 900;
                i++;
            }
            else{
                ans += symbol[s[i]];
            }
            
            
        }
        return ans;
    }
};

