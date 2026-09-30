#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int numsSize = 5;

    moveZeroes(nums, numsSize);

    printf("Array after moving zeroes: ");

    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}