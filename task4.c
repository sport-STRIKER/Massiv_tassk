#include "T2.h"
//Заполнить массив числами, идущими по убыванию 

void filling_out_mass(int massiv[], int n, double d);

void test();


int main()
{
  test();
  
  return 0;
}


void filling_out_mass(int massiv[], int n, double d)
{
  for (int i = 0; i < n;  i++)
    massiv[i] = massiv[0] + d*i;
}


void test()
{
  const int n = 7;

  const int d = -2;

  int result[n] = {40};
  int result_ref[n] = {40};

  filling_out_mass(result, n, d);

  massiv_init(result_ref, n, d);

  if (check_equal_massiv(result, result_ref, n) == 1)
    printf("test is OK\n");
  else
    printf("test is not OK\n");
}