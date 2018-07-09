//Bubble Sort by Nicholas Tony Gomes
#include<stdio.h>
int main(){
    int num,i,j,temp,k;
    printf("Enter Number of Data you want to enter\n");
    scanf("%d",&num);
    int dataSet[num];
    for(k=0;k<=num;k++)
        scanf("%d",&dataSet[k]);
    for(i=0;i<=num-1;i++)
    {
        for(j=0;j<=num-1;j++)
        {
            if(dataSet[j]>dataSet[j+1])
            {
                temp = dataSet[j];
                dataSet[j]=dataSet[j+1];
                dataSet[j+1]=temp;
            }
        }
        
    }   
    for(k=0;k<=num-1;k++)
        printf("%d\t",dataSet[k]); 

    return 0;
}