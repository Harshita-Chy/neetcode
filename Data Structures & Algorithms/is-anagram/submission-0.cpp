class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp;
        
        for(auto it: s){
            mp[it]++;
        }
        for(auto it: t){
            mp[it]--;
        } 

        for(int i=0; i<mp.size(); i++){
            if(mp[i]!=0){
                return false;
            }
        }
        return true;

       }
};
