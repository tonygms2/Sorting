#include <stdio.h>
#include<math.h>
int main() {
  double list[3];
  double A,B,C;
  double A2,B2,C2;
  int index,i,j,temp;
//takes 3 double inputs
  for(index = 0;index<=2; index++){
    scanf("%lf",&list[index]);
  }
  //sorts the data of the array list in descending order
  for(i = 0;i<=2;i++){
    for(j = 0;j<=2;j++){
      if(list[j]<list[j+1]){
        temp = list[j+1];
        list[j+1]=list[j];
        list[j]=temp;
      }
    }
  }
  //the elements are assigned into 3 double variables
  A = list[0],B = list[1],C = list[2];
  A2 = pow(A,2), B2 = pow(B,2), C2 = pow(C,2);
  //if A,B,C are non-zero values then continue
  if(A>0 || B>0 || C>0){
      if(A==B && B == C && C ==A){
           //TRIANGULO EQUILATERO
           if(A2>B2+C2){
             printf("TRIANGULO OBTUSANGULO\nTRIANGULO EQUILATERO\n");
           }
           else if(A2<B2+C2){
             printf("TRIANGULO ACUTANGULO\nTRIANGULO EQUILATERO\n");
           }
            }
      else if(A==B || B == C || C ==A){
            if(A2 > B2 + C2){
              printf("TRIANGULO OBTUSANGULO\nTRIANGULO ISOCELES\n");
            }
            else if(A2 < B2 + C2){
              printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOCELES\n");
            }
      }
      else if(A >= B + C){
          printf("NAO FORMA TRIANGULO\n");
      }
      else if(A2 == B2+C2){
          printf("TRIANGULO RETANGULO\n");
      }
}
  return 0;
}
