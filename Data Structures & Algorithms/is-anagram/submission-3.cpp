class Solution {
public:
    bool isAnagram(string s, string t) {
        // first, see if the length of the strings are equal
        // string s, string t
        // hash set to count the characters of each string
        // check to see if they have equal values

        if (s.length() != t.length()) 
            return false;

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }
        return countS == countT;
    }
};
