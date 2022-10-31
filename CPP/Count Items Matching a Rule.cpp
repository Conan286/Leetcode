class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int x=(ruleKey=="type")?0:((ruleKey=="color")?1:2);
        int cnt=0;
        for(int i=0;i<items.size();i++)
            if(items[i][x]==ruleValue)++cnt;
        return cnt;
    }
};
