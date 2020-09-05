#include <cc50.h>
#include <stdio.h>

int
main(void)
{
  printf("\rM procurando F: ");
  int mf = GetInt();
  printf("\rF procurando M: ");
  int fm = GetInt();
  printf("\rF procurando F: ");
  int ff = GetInt();
  printf("\rM procurando M: ");
  int mm = GetInt();
  int total = mf+fm+ff+mm;
  int mfr = 80 * mf / total;
  int fmr = 80 * fm / total;
  int ffr = 80 * ff / total;
  int mmr = 80 * mm / total;
  printf("\nQuem esta interessado em quem?\n");
  printf("\r\nM procurando F:\n");
  for(int i = 1; i <= mfr; i++){
      printf("#");
  }
  printf("\r\nF procurando M:\n");
  for(int i = 1; i <= fmr; i++){
      printf("#");
  }
  printf("\r\nF procurando F:\n");
  for(int i = 1; i <= ffr; i++){
      printf("#");
  }
  printf("\r\nM procurando M:\n");
  for(int i = 1; i <= mmr; i++){
      printf("#");
  }
  printf("\n");
  return 0;
}