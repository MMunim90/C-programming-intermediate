#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = malloc(10*sizeof(*ptr)); // a block of 10 ints
    if(ptr != NULL){
        *(ptr+2) = 50; // assign 50 to third int
    }

    printf("3rd elem equals to %d\n", *(ptr + 2)); // 50

    free(ptr);

    printf("3rd elem equals to %d\n", *(ptr + 2)); // 50

    // Because free() releases the allocated memory. It does not promise to erase the old bytes or change pointer variable.

    // When execute [free(ptr);] The memory allocator is told that this allocated block [ptr = malloc(10*sizeof(*ptr));] is no longer needed. However, free() does not automatically set ptr to NULL.

    // So the pointer variable may still contain the old address. Releasing memory doesn't necessarily change the pointer's stored value.

    // This is called a use-after-free bug.

    // After free(ptr), the old address may still be present in ptr, but accessing the released memory is undefined behavior.
    return 0;
}