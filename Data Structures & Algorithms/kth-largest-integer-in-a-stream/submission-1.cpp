class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> min_heap;
    int k_size;

    KthLargest(int k, vector<int>& nums) {
        
    
        k_size = k;
        for (int i = 0; i < nums.size(); i++) 
        {
            min_heap.push(nums[i]);
            if (min_heap.size() > k_size) 
            {
                min_heap.pop();
            }
        }
    }
    
    int add(int val) {
        min_heap.push(val);
        if (min_heap.size() > k_size) 
        {
            min_heap.pop();
        }
        
        return min_heap.top();
        
    }
};
