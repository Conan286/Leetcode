class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        return v.size()>set<int>(v.begin(),v.end()).size();
    }
};
