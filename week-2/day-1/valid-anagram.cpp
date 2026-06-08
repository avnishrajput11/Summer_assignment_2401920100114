class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        if(n!=m)return false;
        while(i<m){
            if(s[i]==t[i]){
                i++;
                continue;
            }
            else return false;
        }
        return true;
    }
};