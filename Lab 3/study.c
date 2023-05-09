#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
bool solve(char *p1, char *p2)
{
       if (strcmp(p1, p2) == 0)
              return false;

       int temp_j = -1, j;
       for (size_t i = 0; p1[i] != '\0'; i++)
       {
              for (j = temp_j + 1; p2[j] != '\0'; j++)
              {
                     if (p1[i] == p2[j] || p1[i] == p2[j] + 32 || p1[i] == p2[j] - 32)
                     {
                            temp_j = j;
                            break;
                     }
                     else
                     {
                            continue;
                     }
              }
              if (p2[j] == '\0')
                     return false;
       }
       return true;
}
int main(int argc, char *argv[])
{
       if (solve(argv[1], argv[2]) || solve(argv[2], argv[1]))
       {
              printf("1");
       }
       else
       {
              printf("0");
       }
       return 0;
}
