class TimeMap {
   public:
   map<int, pair<string, string>> mp;
    TimeMap() {}

    void set(string key, string value, int timestamp){
        mp.insert({timestamp, {"key", "value"}}); 
    }

    string get(string key, int timestamp) {
        auto last = mp.rbegin();
        cout <<last->first<<last->second.first << last->second.second << endl;
    }
    return {};
};
