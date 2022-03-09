#include<stdio.h>
#include<string.h>
 
void reverse(char *s)
{
   int length, i;
   char *begin, *end, temp;
 
   length = strlen(s);
   begin  = s;
   end    = s;
 
   for (i = 0; i < length - 1; i++)
      end++;
 
   for (i = 0; i < length/2; i++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
      printf("%s\n", s);
   }
}

int main()
{
   char s[100];
 
   strcpy(s , "abcdef");
   reverse(s);
   printf("Reverse of the string is \"%s\".\n", s);
 
   return 0;
}
