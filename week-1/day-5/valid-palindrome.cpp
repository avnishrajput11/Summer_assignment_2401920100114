class Solution {
public:
    bool isPalindrome(string s) {
        string t ="";
           for(const auto& a:s){
            if(a>='A' && a<='Z')
            {
                t.push_back(a-'A' + 'a');
            }
            else if(a>='a' && a<='z')
            {
                t.push_back(a);
            }
            else if(a>='0' && a<='9')
            {
                t.push_back(a);
            }
        }
        int n=t.size();
        int i=0;
        int j =n-1;
        while(i<=j){
            if(t[i]!=t[j])return false;
            i++;j--;
        }
        return true;
    }
};