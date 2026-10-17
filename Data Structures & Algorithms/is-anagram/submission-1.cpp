class Solution {
public:
    bool isAnagram(string s, string t) {
      std::array<int, 26> letters = {0};

      for (char c : s){
        letters[c - 'a']++;
      }
      
      for (char c : t){
        letters[c - 'a']--;
      }

      return letters == std::array<int, 26>{};
    }
};
