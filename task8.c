#include "T2.h"
/*Есть 4 массива , 
сравнивать элементы первых трех массивом и самый меньший из элементов 
заполнять в четвертый массив*/

int min_elem_mass(int mass[], int n);

int min_elem_massives(int seq_1[], int seq_2[], int seq_3[], int n);

void fill_mass(int seq_1[], int seq_2[], int seq_3[], int seq_4[], int n);

void test();


int main() 
{
  test();
  
  return 0;
}


int min_elem_massives(int seq_1[], int seq_2[], int seq_3[], int n)
{
  int most_min = min_elem_mass(seq_1, n);

  if(min_elem_mass(seq_2, n) < most_min && min_elem_mass(seq_2, n) < min_elem_mass(seq_3, n))
    most_min = min_elem_mass(seq_2, n);
  
  if(min_elem_mass(seq_3, n) < most_min && min_elem_mass(seq_3, n) < min_elem_mass(seq_2, n))
    most_min = min_elem_mass(seq_3, n);

  return most_min;
}


void fill_mass(int seq_1[], int seq_2[], int seq_3[], int seq_4[], int n)
{
  for (int i = 0;  i < n; i++)
    seq_4[i] = min_elem_massives(seq_1, seq_2, seq_3, n);          
}


void test()
{
  const int n = 3;

  int seq_1[n] = {};

  int seq_2[n] = {};

  int seq_3[n] = {};

  int seq_4[n] = {};

  int seq_4_ref[n] = {1, 1, 1};
  
  
  massiv_init(seq_1, n, 1, 1);
  
  massiv_init(seq_2, n, 2, 2);

  massiv_init(seq_3, n, 3, 3);

  
  int most_min = seq_1[0];

  if (min_elem_massives(seq_1, seq_2, seq_3, n) == most_min)
    printf("test_1 is OK\n");
  else
    printf("test_1 is not OK\n");
  
  
  fill_mass(seq_1, seq_2, seq_3, seq_4, n);

  if (check_equal_massiv(seq_4_ref, seq_4, n) == 1)
    printf("test_2 is OK\n");
  else
    printf("test_2 is not OK\n");
}