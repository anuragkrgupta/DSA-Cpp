// A company is building a sign up system and want to validate passwords before accepting them as part of validation, they flag weak passwords where the same characters cluster together. example ("aaaa") or ("abab") patterns are risky goal, give a string S, find the length of the longest substring that contains no repeating characters .
// Input format: 
// line 1: S ( a string)

// output format: 
// a single integer -- length of the longest substring without repeating characters.

// aim for O(n) times -- not O(n^2) or O(n^3);


//brute force approach
int sub_string(string s){
    int ans = 0;
    for(int i = 0; i<s.length(); i++){
        vector<int> freq(256, 0);
        for(int j = i j<s.length(); i++){
            if(freq[s[j]] == 1){
                break;
            }
            freq[s[j]]++;

            ans = max(and, j-i+1);
        }
    }
}

//optimal approach from sliding window + hashing 

class Solution {
public:
    int sub_string(string s) {
        unordered_map<char, int> freq;
        int left = 0;
        int ans = 0;
        for(int right = 0; right < s.length(); right++) {
            while(freq[s[right]] > 0) {
                freq[s[left]]--;
                left++;
            }
            freq[s[right]]++;
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};