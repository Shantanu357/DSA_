class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;
        int length=s.size();
        while(i<j && s[i]==s[j])
        {
            char c=s[i];
            while(i<j && s[i]==c)
            {i++;}
            while(j>=i && s[j]==c)
            {j--;}
        }
        return j-i+1;
    }
};