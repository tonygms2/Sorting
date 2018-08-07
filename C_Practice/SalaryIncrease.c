#include <stdio.h>
double rate(double salary);
void input();
int main(int argc, char const *argv[]) {
  input();
  return 0;
}
//function to find the rate of the salary
double rate(double salary){
  double amount;
  if(salary > 0 && salary<=400.00){
    amount = (0.15*salary);
    return amount;
  }
  else if(salary >= 400.01 && salary<=800.00){
    amount = (0.12*salary);
    return amount;
  }
  else if(salary >= 800.01 && salary<=1200.00){
    amount = (0.10*salary);
    return amount;
  }
  else if(salary >= 1200.01 && salary<=2000.00){
    amount = (0.07*salary);
    return amount;
  }
  else if(salary > 2000.0 ){
    amount = (0.04*salary);
    return amount;
  }
}
//takes input of the salary
void input(){
  double number;
  scanf("%lf",&number);
  if(number>0 && number<=400.0){
    printf("Novo salario: %.2lf\n",number+(rate(number)));
    printf("Reajuste ganho: %.2lf\n",rate(number));
    printf("Em percentual: 15 %%\n");
  }
  else if(number>=400.01 && number<=800.0){
    printf("Novo salario: %.2lf\n",number+(rate(number)));
    printf("Reajuste ganho: %.2lf\n",rate(number));
    printf("Em percentual: 12 %%\n");
  }
  else if(number>=800.01 && number<=1200.0){
    printf("Novo salario: %.2lf\n",number+(rate(number)));
    printf("Reajuste ganho: %.2lf\n",rate(number));
    printf("Em percentual: 10 %%\n");
  }
  else if(number>=1200.01 && number<=2000.0){
    printf("Novo salario: %.2lf\n",number+(rate(number)));
    printf("Reajuste ganho: %.2lf\n",rate(number));
    printf("Em percentual: 7 %%\n");
  }
  else if(number>2000.0){
    printf("Novo salario: %.2lf\n",number+(rate(number)));
    printf("Reajuste ganho: %.2lf\n",rate(number));
    printf("Em percentual: 4 %%\n");
  }
  else
  {
    printf("Wrong Input\n");
  }
}
