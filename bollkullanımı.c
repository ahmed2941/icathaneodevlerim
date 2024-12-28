#include <stdio.h>
#include <stdbool.h>  

int main() {
  bool ProgramcilikGuzelMi = true;
  bool TembellikIyiMi = false;
  printf("%d\n", ProgramcilikGuzelMi); 
  printf("%d\n", TembellikIyiMi);       
  printf("\n...\n"); 

  printf("%d\n", 10 > 9);  
  
  int x = 10;
  int y = 9;
  printf("%d\n", x > y); 
  printf("\n...\n"); 
  
  printf("%d\n", 10 == 10); 
  printf("%d\n", 10 == 15);
  printf("%d\n", 5 != 55); 
  return 0;
}