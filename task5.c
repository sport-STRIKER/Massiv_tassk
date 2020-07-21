#include "T2.h"
//Вывести самый большой элемент массива

int max_elem_masiv(int mass[], int n);

void test_1();

void test_2();

void test_3();


int main()
{
  const int n = 3;

  int seq[n] = {};
  filling_massiv(seq, n);
  
  test_1();

  test_2();

  test_3();

  printf("max = %d \n", max_elem_masiv(seq, n));

  return 0;
}


int max_elem_masiv(int mass[], int n)
{
  int max = mass[0];
  
  for (int i = 0; i < n; i++)
    if(mass[i] > max)
        max = mass[i];
  
  //printf("max = %d \n", max);

  return max;
}


void test_1()
{
  const int n = 3;

  int result[n] = {1, 2, 3};

  if (max_elem_masiv(result, n) == max_elem_mass(result, n))
    printf("test_1 is OK\n");
  else
    printf("test_1 is not OK\n");
}


void test_2()
{
  const int n = 3;

  int result[n] = {3, 2, 1};

  if (max_elem_masiv(result, n) == max_elem_mass(result, n))
    printf("test_2 is OK\n");
  else
    printf("test_2 is not OK\n");
}


void test_3()
{
  const int n = 3;

  int result[n] = {2, 3, 1};

  if (max_elem_masiv(result, n) == max_elem_mass(result, n))
    printf("test_3 is OK\n");
  else
    printf("test_3 is not OK\n");
}