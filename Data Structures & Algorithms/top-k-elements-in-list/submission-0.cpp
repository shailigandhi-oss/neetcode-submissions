class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
     std::priority_queue<pair<int,int>, std::vector<pair<int,int>>,std::greater<pair<int,int>>> minHeap;

        unordered_map<int , int> count;
        for( int num : nums)
        {
            count[num]++;
        }

        for(auto& number : count)
        {
            minHeap.push({number.second, number.first});
            if(minHeap.size()>k)
            {
                minHeap.pop();
            }
        }

        vector<int> result;

        for(int i = 0 ; i<k; i++)
        {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return result;




     

     
     
        
    }
};
