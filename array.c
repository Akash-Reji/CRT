#include<stdio.h>
int main(){
    int a[100],dim,i,sum,max,pos=0;
    printf(" Enter any dimention: ");
    scanf("%d",&dim);
    max=a[0];
    for(i=0;i<dim;i++){
        printf("\n enter a number for a[%d]:",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
        max=a[0];
        
    printf("\n Enter any element for a[%d]",&sum);
    for (int j = 0; j < dim; j++)
    {   
        if(max<a[j]){
            max=a[j];
            pos=j+1;
        }
        printf("\n Max element from array = %d at %d pos",max,pos);
    }
    return 0;
}