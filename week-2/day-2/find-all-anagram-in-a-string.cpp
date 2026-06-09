class Solution {
public:
    vector<int> findAnagrams(string s,string p) {
        int m=s.size();
        int n=p.size();
        vector<int> ans;

        if(n>m) return ans;

        vector<int> freq(26,0);
        vector<int> win(26,0);

        for(int i=0;i<n;i++){
            freq[p[i]-'a']++;
            win[s[i]-'a']++;
        }

        if(freq==win){
            ans.push_back(0);
        }

        for(int i=n;i<m;i++){
            win[s[i]-'a']++;
            win[s[i-n]-'a']--;

            if(freq==win){
                ans.push_back(i-n+1);
            }
        }

        return ans;
    }
};