#include<stdio.h>
int main(int argc, char const *argv[])
{
    int dataset[10]={3,44,38,5,47,15,36,26,27,2};
    int i,value,key;
    for(i=1;i<=9;i++){
        value = dataset[i];
        key = i;
        while(key>0 && dataset[key-1]>value){
            dataset[key]=dataset[key-1];
            key--;
        }
        dataset[key]=value;
    }
    for(i = 0;i<=9;i++)
    {
        printf("%d\t",dataset[i]);
    }
    return 0;
}
