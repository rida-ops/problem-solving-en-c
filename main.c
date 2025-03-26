int sumOfGoodElements(int* nums, int n, int k) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int isGood = 1;
        if (i - k >= 0 && nums[i] <= nums[i - k]) {
            isGood = 0;
        }
        if (i + k < n && nums[i] <= nums[i + k]) {
            isGood = 0;
        }
        if (isGood) {
            sum += nums[i];
        }
    }
    return sum;
}

int main() {
    int nums[] = {1, 3, 9, 2, 5, 10, 8};
    int k = 2;
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", sumOfGoodElements(nums, n, k));
    return 0;
}
