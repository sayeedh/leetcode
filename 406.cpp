class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        
        vector<pair<int,int>> result(people.size());
        sort(people.begin(), people.end(),[&](auto &a, auto &b)
             {
                 return a.first > b.first ||
                     (a.first == b.first &&
                      a.second < b.second);
             });
        
        for (int i = 0; i < people.size(); i++)
        {
                auto it = result.begin() + people[i].second;
                result.insert(it, people[i]);            
        }
        
        return result;        
    }
};
