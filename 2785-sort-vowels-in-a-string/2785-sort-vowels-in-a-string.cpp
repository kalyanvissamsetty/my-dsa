#include<bits/stdc++.h>
class Solution {
public:
    struct CompareChars {
    // Custom comparison function for characters (min heap)
    bool operator()(char a, char b) const {
        return a > b; // '>' for ascending order (min heap)
    }
};
    bool isVowel(char ch) {
        char lowercaseCh = std::tolower(ch);

        return (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' ||
                lowercaseCh == 'o' || lowercaseCh == 'u');
    }
    string sortVowels(string s) {
         std::priority_queue<char, std::vector<char>, CompareChars> minHeap;
        vector<int> ind;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                minHeap.push(s[i]);
                ind.push_back(i);
            }
        }
        for(int i=0;i<ind.size();i++){
            char ch = minHeap.top();
            s[ind[i]] = ch;
            minHeap.pop();
        }
        return s;
    }
    
};