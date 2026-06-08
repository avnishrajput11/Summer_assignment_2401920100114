class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>st;
        for (char c : magazine){
            st[c]++;
        }
        for(char c:ransomNote){
            if(st[c]<=0){
                return false;
            }
            st[c]--;
        }
        return true;
    }
};