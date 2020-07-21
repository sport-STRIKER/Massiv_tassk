#include <stdio.h>
#include <stdlib.h>

void massiv1_init(int seq_1[], int n);

void massiv2_init(int seq_2[], int n);

void summ_massiv_init(int summ_seq[], int seq_1[], int seq_2[], int n);

void output(int massiv[], int n);


int main()
{
  const int n = 5;
  int seq_1[n];
  int seq_2[n];
  int summ_seq[n];
  
  massiv1_init(seq_1, n);
  massiv2_init(seq_2, n);
  summ_massiv_init(summ_seq, seq_1, seq_2, n);

  output(summ_seq, n);
  
  return 0;
}



void massiv1_init(int seq_1[], int n)
{
  int i = 0;
  int d = 2;

  seq_1[0] = 2;
  
  while (i < n)
  {
    seq_1[i] = seq_1[0] + d*i;
    
    i++;
  }
}



void massiv2_init(int seq_2[], int n)
{
  int i = 0;
  int d = 2;

  seq_2[0] = 1;
  
  while (i < n)
  {
    seq_2[i] = seq_2[0] + d*i;
    
    i++;
  }
}



void summ_massiv_init(int summ_seq[], int seq_1[], int seq_2[], int n)
{
  int i = 0;

  while (i < n)
  {
    summ_seq[i] = seq_1[i] + seq_2[i];
    
    i++;
  }
}



void output(int massiv[], int n)
{
  int i = 0;

  while (i < n)
  {
    printf("%d ", massiv[i]);
    
    i++;
  }
  printf("\n"); 
}