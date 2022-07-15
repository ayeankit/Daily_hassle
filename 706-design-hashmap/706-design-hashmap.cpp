class MyHashMap {
public:
    vector <int> keyarr;
    int size;
    
public:
    MyHashMap() {
        
        size = 1e6 + 1;
        keyarr.resize (size);
        fill(keyarr.begin(), keyarr.end(), -1);
    }
    
    void put(int key, int value) {
        keyarr[key] = value;
    }
    
    int get(int key) {
        
        if (keyarr[key] != -1)
        {
            return keyarr [key];
        }
        else
        {
            return -1;
        }
    }
    
    void remove(int key) {
        
        keyarr [key] = -1;
        
    }
};
/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */