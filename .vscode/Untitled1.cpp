#include <stdio.h>
int main (void)
{
   char     * buffer  = NULL;
   size_t     n       = 0;
   printf("Enter five positive integers: ");
   getline(&buffer, &n, stdin);
   sscanf(buffer, "%u%u%u%u%u", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);
   printf("You wrote: %u %u %u %u %u\n", nums[0], nums[1], nums[2], nums[3], nums[4]);
   return 0;
}
