#include<stdio.h>
#include<math.h>
int number2,number,mod,counter,sum=0,number3;
void armstrong();
int main(int argc, char const *argv[])
{
    armstrong();
    return 0;
}

void armstrong(){

    printf("Enter Number\n");
    scanf("%d",&number);
    number2 = number;
    number3 = number;
    counter = 0;
    while(number3!=0){
        number3 = number3/10;
        counter++;
    }
    while(number2 != 0){
        mod = number2%10;
        sum = (pow(mod,counter)+sum);
        number2=number2/10;
    }
        if(sum==number){
            printf("%d is an armstrong number\n",number);
        }
        else{
            printf("%d is not an armstrong number\n",number);
        }

}
