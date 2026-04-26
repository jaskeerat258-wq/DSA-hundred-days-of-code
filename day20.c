#include <stdio.h>

// Helper functions (since C doesn't have built-in max/min)
int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int maxSubarraySumCircular(int nums[], int n) {
    int totalSum = 0;
    int currMax = 0, maxSum = nums[0];
    int currMin = 0, minSum = nums[0];

    for (int i = 0; i < n; i++) {
        int x = nums[i];

        // Kadane for maximum subarray
        currMax = max(x, currMax + x);
        maxSum = max(maxSum, currMax);

        // Kadane for minimum subarray
        currMin = min(x, currMin + x);
        minSum = min(minSum, currMin);

        totalSum += x;
    }

    // Edge case: all elements are negative
    if (maxSum < 0)
        return maxSum;

    return max(maxSum, totalSum - minSum);
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = maxSubarraySumCircular(nums, n);
    printf("%d\n", result);

    return 0;
}
