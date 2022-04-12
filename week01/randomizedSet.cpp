class RandomizedSet {
private:
    unordered_map<int,int> bucket;
    vector<int> vecBucket;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(!bucket.count(val)){
            vecBucket.push_back(val);
            bucket[val] = vecBucket.size()-1;
            return true;
        }
        else return false;
    }
    
    bool remove(int val) {
        if(bucket.count(val)){
            int temp=vecBucket[bucket[val]];
            vecBucket[bucket[val]] = vecBucket[vecBucket.size()-1];
            bucket[vecBucket[vecBucket.size()-1]]=bucket[val];
            vecBucket[vecBucket.size()-1] = temp;
            vecBucket.pop_back();
            bucket.erase(val);
            return true;
        }
        else return false;
    }
    int getRandom() {
        return vecBucket[rand()%vecBucket.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
