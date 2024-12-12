#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    char num1[20], num2[20];
    sprintf(num1, "%d%d", *(int*)a, *(int*)b);
    sprintf(num2, "%d%d", *(int*)b, *(int*)a);
    return strcmp(num2, num1);
}

char* largestNumber(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    if (nums[0] == 0) {
        char* result = malloc(2);
        strcpy(result, "0");
        return result;
    }
    char* result = malloc(numsSize * 10 + 1);
    result[0] = '\0';
    for (int i = 0; i < numsSize; i++) {
        char temp[20];
        sprintf(temp, "%d", nums[i]);
        strcat(result, temp);
    }
    return result;
}

int main() {
    int nums1[] = {10, 2};
    int nums2[] = {3, 30, 34, 5, 9};
    char* result1 = largestNumber(nums1, 2);
    printf("%s\n", result1);
    free(result1);
    char* result2 = largestNumber(nums2, 5);
    printf("%s\n", result2);
    free(result2);
    return 0;
}
