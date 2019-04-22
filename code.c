#include <stdio.h>
int main()
{
   unsigned int num;
   printf("I like egg tarts.");
   printf("How many egg tarts have I eaten today?\n");
   scanf("%u", &num);
   printf("OMG! There's totally %d kcal !!!\n", num*217);
   printf("Carson wants to eat all of them!\n");
   if(num <= 10)
      printf("Carson is still healthy!\n");
   else
      printf("So bad, Carson is becoming a fat guy...\n");
   return 0;
}
