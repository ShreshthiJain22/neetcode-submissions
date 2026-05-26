class MyHashSet {
public:
        vector<int>v;

    MyHashSet() {
    }
    
    void add(int key) {
        int n=v.size();
        bool found=false;
        for(int i=0;i<n;i++){
            if(v[i]==key){
                found=true;
                break;
            }
        }
        if(found==false){
            v.push_back(key);

        }

    }
    
    void remove(int key) {
          int n=v.size();
        for(int i=0;i<n;i++){
            if(v[i]==key){
                v[i]=-1;
            }
        }
    }
    
    bool contains(int key) {
        int n=v.size();
        for(int i=0;i<n;i++){
            if(v[i]==key){
            return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */