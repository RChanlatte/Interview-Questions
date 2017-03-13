#include <stdio.h>

// Return the sum of the two largest integers in an array.
int arraySum(int* numArray, int arraySize)
{
   int num1, num2, ans;
   num1 = 0;
   num2 = 0;
   // obvious fail condition
   ans = -1;

   if (arraySize <= 0)
   {
      printf("Array has no elements!\n");
      return ans;
   }
   else if (arraySize == 1)
   {
      printf("Not enough elements in array!\n");
      return ans;
   }
   else
   {
      for (int i = 0; i < arraySize; i++)
      {
         if (num1 < numArray[i])
         {
            num1 = numArray[i];

            if (num2 < num1)
            {
               num2 = (num1 - 1);
            }
         }
      }
      ans = num1 + num2;
      return ans;
   }
}


int main(int argc, char* argv[])
{
   int numArray[10] = { 1,2,3,4,5,6,7,8,9,10 };
   int answer;

   answer = arraySum(numArray, 10);

   // should be 19 as the two largest ints are 9 & 10.
   printf("\nThe sum of the largest integers in an array is: %i\n", answer);
   getchar();

   return 0;
}