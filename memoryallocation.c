#include<stdio.h>
#include<stdlib.h>

   int main(){
int n,i,*ptr,sum=0;
printf("enter number of the element");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof (int ));
  // printf("%d", sizeof(ptr));
    //  printf("%d",n* sizeof(int ));                  
if(ptr==NULL){

    printf("Error! memory not allocated");
    exit(0);
 
}
printf("enter the element\n");
for(i=0;i<n;i++){
    scanf("%d",ptr+i);
    sum+=*(ptr+i);
printf("%d\n",ptr+i);
}
printf("sum=%d",sum);
return 0;


}