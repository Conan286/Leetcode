class Solution {
public:
     bool cmp(pair<int,string>a,pair<int,string>b)
    {
        return a.first>b.first;
    };
       vector<string> sortPeople(vector<string>& name, vector<int>& h) {
     vector<pair<int,string>>mv;
           vector<string>vs;
           int n=h.size();
           for(int i=0;i<n;i++)
           mv.push_back({h[i],name[i]});
           for(int i=0;i<n-1;i++)
               for(int j=i+1;j<n;j++)
                   if(mv[j].first>mv[i].first)
                       swap(mv[i],mv[j]);
           for(int i=0;i<n;i++) vs.push_back(mv[i].second);
           return vs;
       }


   };
