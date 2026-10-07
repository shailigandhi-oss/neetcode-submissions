class Solution {
public:
    bool isAnagram(string s, string t) {

        map<char,int> s1, s2;
        int c1,c2;

        for(c1 = 0; c1<s.length(); c1++)
        {
            s1[s[c1]]++;
        }  
        
       for(c2 = 0; c2<t.length(); c2++)
        {
            s2[t[c2]]++;
        }  
         

        if(s1==s2)
        {
            return true;
        }
        return false;

    }
};
