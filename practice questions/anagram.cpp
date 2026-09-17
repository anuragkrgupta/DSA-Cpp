// Given two strings s and t, determine whether t is an anagram of s.
// An anagram is a string formed by rearranging all the characters of another string.

// Example 1
// Input:
// s = "anagram"
// t = "nagaram"
// Output:
// true
// Because both contain exactly the same characters with the same frequencies.

// Example 2
// Input:
// s = "rat"
// t = "car"
// Output:
// false
// Because their character frequencies are different.

// Example 3
// Input:
// s = "aacc"
// t = "ccac"
// Output:
// false
// Although both contain a and c, the frequencies differ:
// s → a:2, c:2
// t → a:1, c:3

// Constraints
// 1 <= s.length, t.length <= 5 * 10^4
// s and t consist of lowercase English letters.

bool isAnagram(string s, string t){
    if(s.size() != t.size()){
        return 0;
    }
    unordered_map<char, int> freq;
    for(char ch : s){
        freq[ch]++;
    }
    for(char c : t){
        freq[c]--;
    }
    for(auto x : freq){
        if(x.second != 0){
        return 0;
        }
    }

    return 1
}