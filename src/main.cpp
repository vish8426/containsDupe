#include <stdio.h>

#include <vector>

#include "main.h"

int main()
{
    std::vector<int> nums = {1,2,3,1};
    bool result;

    result = containsDuplicate(nums);
    printf("%s", result ? "true" : "false");

    return 0;
}