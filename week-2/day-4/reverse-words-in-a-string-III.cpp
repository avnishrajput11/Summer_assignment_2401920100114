class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        int j=0;
        string a="";
        
        while(i<n){
            if(i==n-1){
                j=n-1;
                while(j>=0&&s[j]!=' '){
                    a.push_back(s[j]);
                    j--;
                }
                break;
            }
            
            if(s[i]!=' '){
                i++;
            }
            else{
                j=i-1;
                while(j>=0&&s[j]!=' '){
                    a.push_back(s[j]);
                    j--;
                }
                a.push_back(' ');
                i++;
            }
        }
        
        return a;
    }
};