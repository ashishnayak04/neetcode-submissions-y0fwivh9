class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map <char , int> need , window ;
        for (char c : t) need[c]++ ;
        int have = 0 , req = need.size() ;
        int l = 0 , r = 0 ;
        int minLen = INT_MAX ,start = 0 ;
        while (r < s.size())
        {
            char c = s[r] ;
            window[c]++ ;
            if (need.count(c) && window[c] == need[c])
            {
                have ++ ;
            }
            while (have == req)
            {
                if ((r-l+1) < minLen)
                {
                    minLen = r - l + 1 ;
                    start = l ;
                }
                char left = s[l];
                window[left] -- ;
                if(need.count(left) && window[left] < need[left])
                {
                    have--;
                }
                l++ ;
            }
            r++ ;
        }
    return minLen == INT_MAX ? "" : s.substr(start , minLen);
    }
};
