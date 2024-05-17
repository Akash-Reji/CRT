#include<stdio.h>
int main(){
    int a[10],t[10],k=0,dim,i;
    printf(" Enter any dimention: ");
    scanf("%d",&dim);
    for(i=0;i<dim;i++){
        printf("\n enter a number for a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for (int j = 0; j < dim; j++)
    {   
        if(a[j]!=0){
            t[k]=a[j];
            k++;
        }
    }for(i=0;i<dim;i++){
        printf("\n enter a number for a[%d] = %d",i,t[i]);
    }
    return 0;
}