class Solution {
public:
    int majorityElement(vector<int>& nums) {
     for(int i=0; i<nums.size(); i++)
     {
     int n= nums[i];
     int count = 1;
     for(int j= i+1; j<nums.size();j++)
     {
     if(nums[j] == n)
     count++;
     }
     if (count > (nums.size()/2))
         return n;
     }
     return -1;
    }
};
