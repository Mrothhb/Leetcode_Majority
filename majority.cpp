class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        countNums(nums);
        return nums;
        
    }
    
    void countNums(vector<int> &nums) 
    { 
        unordered_map<int, int> counts; 
        counts.reserve(nums.size());
        for( int i = 0; i<nums.size();i++ ){ 
            counts[nums[i]]++; 
        }

        int size = nums.size();
        nums.clear();
        unordered_map<int, int>:: iterator p; 
        for (p = counts.begin(); p != counts.end(); p++){
            if( p->second > floor(size/3)){
                nums.push_back(p->first);
              }
        }            
    } 
};
