#include "T2.h"
//Есть 3 массива, выводить только те элементы массивов , которые кратны числу 3

void comparison_masiv(int seq[], int seq_1[], int seq_2[], int seq_3[], int n);

void test(int seq_ref[], int n);


int main()
{
  const int n = 3;

  int seq_ref[n] = {3, 6, 12};
  
  test(seq_ref, n);

  output(seq_ref, n, "seq_ref ");

  return 0;
}


void comparison_masiv(int seq[], int seq_1[], int seq_2[], int seq_3[], int n)
{
  int i = 0;
  
  for (int j = 0; j < n; j++)
  {
    if (seq_1[j] % 3 == 0)
    {
      seq[i] = seq_1[j];

      i++;
    }    
  }

  for (int j = 0; j < n; j++)
  {
    if (seq_2[j] % 3 == 0)
    {
      seq[i] = seq_2[j];

      i++;
    }    
  }
        
  for (int j = 0; j < n; j++)
  {
    if (seq_3[j] % 3 == 0)
    {
      seq[i] = seq_3[j];

      i++;
    }    
  }
}


void test(int seq_ref[], int n)
{
  int seq_1[n] = {};

  int seq_2[n] = {};

  int seq_3[n] = {};

  int seq_answ[n] = {};
  
  massiv_init(seq_1, n, 1, 1);
  
  massiv_init(seq_2, n, 2, 2);

  massiv_init(seq_3, n, 4, 4);
 
  
  comparison_masiv(seq_answ, seq_1, seq_2, seq_3, n);

  if (check_equal_massiv(seq_answ, seq_ref, n) == 1)
    printf("test is OK\n");
  else
    printf("test is not OK\n");

  output(seq_answ, n, "seq_answ");
}