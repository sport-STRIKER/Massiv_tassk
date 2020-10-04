#include "T2.h"

void count();

int main()
{
  count();

  return 0;
}

void count()
{  
  FILE *simble = 0;
  
  char buffer[40] = {};
  
  simble = fopen("1.9.in", "r");

  fgets(buffer, 35, simble);

  fclose(simble);
  
  int n_line = 0;
  int n_space = 0;
  
  for(int i = 0; buffer[i] != '\0'; i++)
  {
    printf("-");
    
    if(buffer[i] == ' ')
    {  
      printf("+");
      
      n_space++;
    }

    if(buffer[i] == '\n')
    {  
      printf("!");  
      
      n_line++;
    }
  }  
  
  printf("\nThe count of spaces = %d\n\n", n_line);  
  printf("The count of new strings = %d\n\n", n_space);
}