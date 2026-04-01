class MyHashMap {
    vector<vector<pair<int,int>> > v;
public:
    MyHashMap() {
        v.resize(1000);
    }
    
    void put(int key, int value) {
        int index = key % v.size();
        for (auto &p : v[index]){
        if (p.first == key) {
            p.second = value;
            return;
        }
        }
        v[index].push_back({key,value});
    }
    
    int get(int key) {
        int index = key % v.size();
        for (auto &p : v[index]){
        if (p.first == key) 
        return p.second;
        }
        return -1;
    }
    
    void remove(int key) {
        int index = key % v.size();
        for(int i = 0; i < v[index].size(); i++){
            if(v[index][i].first == key) {
                v[index].erase(v[index].begin()+i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */