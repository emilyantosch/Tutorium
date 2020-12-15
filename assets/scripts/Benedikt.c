#include<stdio.h>
#include<math.h>


int quersumme(int n);



int main(void){

  int n = 0;
  printf("Geben Sie eine f%cnfstellige Zahl an, von der Sie die Quersumme haben wollen\n", 129);
  scanf("%d", &n);
  printf("Quersumme: %d", quersumme(n));
  return 0;
}



int quersumme(int n){
  int potenz = 0;
  int result = 0;
  for(int i = 1; i <= 5; i++){
    potenz = fmod(n, pow(10,i));
    result = result + potenz/pow(10,i-1);
  }

  return result;
}
