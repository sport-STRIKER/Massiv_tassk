#include "T2.h"

void test()

void count(int *n_space, int *n_line, char file_name[]);

void print_buffer(char buffer[]);

int main()
{  
  char file_name = "1.9.in";  
  
  int n_space = 0;
  int n_line = 0; 
  
  count(&n_space, &n_line, file_name);

  return 0;
}

void count(int *n_space, int *n_line, char file_name[])
{
  FILE *f = fopen(file_name, "r");
  
  char buffer[40] = {};

  while (fgets(buffer, 35, f) != NULL)
  {
     for(int i = 0; buffer[i] != '\0'; i++)
     {
        if(buffer[i] == ' ')
          *n_space++;
        

        if(buffer[i] == '\n')
          *n_line++;

     }
  }

  fclose(f);

  //print_buffer(buffer);

  printf("\nThe count of spaces = %d\n\n", n.space);
  printf("The count of new strings = %d\n\n", n.line);
}

void test()
{
  char file_name = "1.9.test";  
  
  int n_space = 0;
  int n_line = 0; 
  
  count(&n_space, &n_line, file_name);

  if (n_space == 1)
    printf ("test is OK\n");
  else
    printf ("test is not OK\n");

  if (n_line == 0)
    printf ("test is OK\n");
  else
    printf ("test is not OK\n");
}

void print_buffer(char buffer[])
{
  int i = 0;

  while (buffer[i] != '\0')
  {
    printf ("'%c'(%d)", buffer[i], buffer[i]);

    i++;
  }
}