#include "T2.h"
//Заполнить первый массив первыми пятью числами Фибоначи, а второй от пятого по десятое число Фибоначи

void make_Fibonachi (int fib[], int n);

void copy(int to[], int from[], int n,
          int i_from);

void test();


int main()
{
  test();
  
  return 0;
}


void make_Fibonachi (int fib[], int n)
{
  for (int i = 2; i < n; i++)
    fib[i] = fib[i - 2] + fib[i - 1];
}


void copy(int to[], int from[], int n,
          int i_from)
{
  for(int i_to = 0; i_to < n; i_to++)
  {
    to[i_to] = from[i_from];
    
    i_from++;
  }
}


void test()
{
  const int len_1 = 5;
  const int len_2 = 10;

  int result_1[len_1] = {};
  int result_2[len_1] = {};

  int fib[len_2] = {1, 1};
  make_Fibonachi(fib, len_2);

  int result_ref1[len_1] = {};
  int result_ref2[len_1] = {};
  
  int i1 = 0;
  int i2 = 4;
  
  while (i1 < len_1)
  {
    result_ref1[i1] = fib[i1];
    result_ref2[i1] = fib[i2];
  
    i1++;
  
    i2++;
  }
  output (result_ref1, len_1, "result_ref1  ");
  output (result_ref2, len_1, "result_ref2  ");


  copy(result_1, fib, len_1, 
       0);
  
  if (check_equal_massiv(result_1, result_ref1, len_1) == 1)
    printf("test_1 is OK\n");
  else
    printf("test_1 is not OK\n");

  
  copy(result_2, fib, len_2,
       4);

  if (check_equal_massiv(result_2, result_ref2, len_1) == 1)
    printf("test_2 is OK\n");
  else
    printf("test_2 is not OK\n");

   
   output(result_1, len_1, "result_1  ");
   
   output(result_2, len_1, "result_2  ");
}