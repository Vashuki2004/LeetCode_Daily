class Solution {
public:
    bool isPalindrome(string s) {
    int LP = 0;
    int RP = s.size()-1;
    while(LP <= RP){
        if (!isalnum(s[LP])){LP++;continue;}
        if (!isalnum(s[RP])){RP--;continue;}
        if (tolower(s[LP])!=tolower(s[RP]))
        return false;
        else{
        LP++;
        RP--;
        }
    }   
    return true;
    }
};