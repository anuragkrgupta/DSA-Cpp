// Given a string s, reverse the order of the words in the string.
// A word is a sequence of non-space characters.
// You must also ensure that:
// Words are separated by exactly one space in the output.
// There are no leading or trailing spaces.
// Multiple spaces between words in the input should be reduced to one.

// Example 1
// Input:
// s = "the sky is blue"
// Output:
// "blue is sky the"

// Example 2
// Input:
// s = "  hello world  "
// Output:
// "world hello"

// Example 3
// Input:
// s = "a good   example"
// Output:
// "example good a"

// Example 4
// Input:
// s = "  hello   world  again "
// Output:
// "again world hello"

// Constraints
// 1 <= s.length <= 10^4
// s contains English letters, digits, and spaces.

string reverseWords(string s){

    vector<string> words;
    string word;
    stringstream ss(s);
    while(ss >> word) {
        words.push_back(word);
    }
    reverse(words.begin(), words.end());
    string ans;
    for(int i = 0; i < words.size(); i++){
        ans += words[i];
        if(i != words.size() - 1) {
            ans += " ";
        }
    }
    return ans;
}