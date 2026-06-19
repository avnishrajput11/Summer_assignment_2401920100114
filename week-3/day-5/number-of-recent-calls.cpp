class RecentCounter {
public:
 queue<int>records;
    RecentCounter() {
    
    }

    int ping(int t) {
        records.push(t);
        while (!records.empty() && records.front() < t - 3000)  {
            records.pop();
        }
        return records.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */