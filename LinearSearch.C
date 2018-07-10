#include<stdio.h>
int main(){
    int i,num,key;
        
    int dataSet[10]={25,255,258,45,258,244,3658,15,254,20};
    printf("Enter Number\n");
    scanf("%d",&num);
    for(i=0;i<=9;i++)
    {
        if(dataSet[i]==num)
        {
            printf("Number %d matches!,Found in the index %d\n",num,i);
            break;
        }
        else{
            printf("Search not found in %d index\tLooking in the next index %d\n",i,i+1);
        }
    }   
    return 0;
}