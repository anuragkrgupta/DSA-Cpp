// A company is building a sign up system and want to validate passwords before accepting them as part of validation, they flag weak passwords where the same characters cluster together. example ("aaaa") or ("abab") patterns are risky goal, give a string S, find the length of the longest substring that contains no repeating characters .
// Input format: 
// line 1: S ( a string)

// output format: 
// a single integer -- length of the longest substring without repeating characters.

// aim for O(n) times -- not O(n^2) or O(n^3);

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
