#include <stdio.h>

void twoSum(int nums[], int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;

    twoSum(nums, 4, target);

    return 0;
}
