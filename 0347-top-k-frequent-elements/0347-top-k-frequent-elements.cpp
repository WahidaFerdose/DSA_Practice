class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
        
        unordered_map<int , int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mh;
        vector<int> ans;
    
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            mh.push({i->second, i->first});
            if(mh.size()>k)
            {
                mh.pop();
                
            }
        }
        
        while(!mh.empty())
        {
             pair<int, int> t=mh.top();
            ans.push_back(t.second);
            mh.pop();
            
           
        
    }
        return ans;
    }
};