// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    map<int,int>mp;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }
    int count=0,value=0;
    map<int, int>::iterator it = mp.begin();
    while (it != mp.end())
    {
        if(it->second>count)
        {
            count=it->second;
            value=it->first;
        }
        ++it;
    }
    return value;

        
    }
};
