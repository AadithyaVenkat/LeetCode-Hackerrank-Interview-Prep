class TimeMap {
public:
    /** Initialize your data structure here. */
    
    unordered_map<string, vector<pair<int, string>>> mp;
    
    TimeMap() {
        
    }
    
    string bsearch(string key, int timestamp)
    {
        auto &store=mp[key];
        
        if (store[0].first > timestamp) return "";
        
        int l=0;
        int r=store.size()-1;
        
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(store[mid].first>timestamp)
                r=mid-1;
            else if(store[mid].first<timestamp)
                l=mid+1;
            else
                return store[mid].second;
        }
        return store[l-1].second;
    }
    
    void set(string key, string value, int timestamp) {
        
         mp[key].push_back({timestamp,value});
        
    }
    
    string get(string key, int timestamp) {
        
        return bsearch(key, timestamp);
        
    }
};
