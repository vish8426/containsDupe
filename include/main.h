#include <stdio.h>

#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums)
{
    size_t size = nums.size();

    std::unordered_set<int> seenMap; 

    // printf("%zu\n", size);

    for(size_t i=0; i<size; ++i)
    {
        // printf("%d ", nums[i]);
        if(seenMap.find(nums[i]) != seenMap.end())
        {
            return true;
        }

        seenMap.insert(nums[i]);
    }

    return false;
}