class MyHashMap {
public:
    vector<int>keys;
    vector<int>values;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        int n=keys.size();
        bool present=false;
        for(int i=0;i<n;i++){
            if(keys[i]==key){
                values[i]=value;
                present=true;
            }
        }
        if(present==false){
            keys.push_back(key);
            values.push_back(value);
        }
        
    }
    
    int get(int key) {
        int n=keys.size();
        for(int i=0;i<n;i++){
            if(keys[i]==key){
                return values[i];
            }
        }
        return -1;
        
    }
    
    void remove(int key) {
        int n=keys.size();
        for(int i=0;i<n;i++){
            if(keys[i]==key){
                values[i]=-1;
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