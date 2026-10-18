class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }

        std::unordered_map<char, int> first_word;
        std::unordered_map<char, int> second_word;
    

     for (int i = 0; i < s.length(); i++){
        first_word[s[i]]++;
        second_word[t[i]]++;
    }

    return first_word == second_word;

    }  
};
