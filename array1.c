#include<stdio.h>
int main(){
    int a[100],dim,i,flag=0,n,pos=0,p;
    printf(" Enter any dimention: ");
    scanf("%d",&dim);
    for(i=0;i<dim;i++){
        printf("\n enter a number for a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("enter s number want to found : ");
    scanf("%d",&n);
    for (int j = 0; j < dim; j++)
    {   
        if(n==a[j]){
            flag=1;
            pos=j;
            break;
        }
    }
    if(flag==1){
        printf("element found %d position",pos+1);
    }else{
        printf("element not found position");
    }
    return 0;
}