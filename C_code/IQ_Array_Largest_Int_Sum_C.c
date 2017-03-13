#include <stdio.h>

// Return the sum of the two largest integers in an array.
int arraySum(int* numArray, int arraySize)
{
   int ans, bufferArray[2] = {0, 0};
   // obvious fail condition
   ans = -1;

   // if-guards
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
         if (bufferArray[0] < numArray[i])
         {
            bufferArray[0] = numArray[i];
            continue;
         }
      }
      for (int j = 0; j < arraySize; j++)
      {
         if (numArray[j] == bufferArray[0])
         {
            continue;
         }
         else if (bufferArray[1] < numArray[j])
         {
            bufferArray[1] = numArray[j];
         }
      }

      ans = bufferArray[0] + bufferArray[1];
      return ans;
   }
}

int main(int argc, char* argv[])
{
   int numArray[10] = { 1,8,2,1,2,3,4,6,12,6 };
   int answer;

   answer = arraySum(numArray, 10);

   // should be 18 as the two largest ints are 8 & 10.
   printf("\nThe sum of the largest integers in an array is: %i\n", answer);
   getchar();

   return 0;
}