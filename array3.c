#include<stdio.h>
int main(){
    int a[10],temp,dim,i;
    printf(" Enter any dimention: ");
    scanf("%d",&dim);
    for(i=0;i<dim;i++){
        printf("\n enter a number for a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for (int i=0,j = dim-1;i<j;i++, j--)
    {   
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<dim;i++){
        printf("\n after reversing number for = %d",a[i]);
    }
    return 0;
}