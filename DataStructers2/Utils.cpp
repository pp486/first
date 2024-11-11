#include <iostream>
#include "Stack.h"
#include "Utils.h"

void reverse(int* nums, int size)
{
    Stack stack;
    initStack(&stack);


    for (int i = 0; i < size; ++i) 
    {
        push(&stack, nums[i]);
    }

    
    for (int i = 0; i < size; ++i) 
    {
        nums[i] = pop(&stack);
    }

    cleanStack(&stack);  
}

int main() 
{
    int nums[] = {1,2,3,4};
    int size = sizeof(nums) / sizeof(nums[0]);

    std::cout << "before reverse: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    reverse(nums, size); 

    std::cout << "after ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}




int* reverse10() 
{
    static int nums[10];  
    std::cout << "please enter 10 integers:\n";

   
    for (int i = 0; i < 10; ++i)
    {
        std::cin >> nums[i];
    }

 
    for (int i = 0; i < 5; ++i)
    {
        int temp = nums[i];
        nums[i] = nums[9 - i];
        nums[9 - i] = temp;
    }

    return nums; 
}
