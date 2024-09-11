#include<stdio.h>


int main (){
    int a[1000],i,j,n;
     scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            for(j=1;j<n-1;j++)
            if(a[i]==a[j]){
                a[j]=a[j+1];

            }
        }
        for(i=0;i<n-1;i++){
            printf("%d ",a[i]);
        }

}