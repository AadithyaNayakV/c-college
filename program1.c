#include<stdio.h>
void main(){
    int c,a=5,b=7;
    printf("enter a number");
    scanf("%d",&c);
    switch (c)
    {
    case 1: 
    printf("%d",(a)+(b));//this also work 
        break;
        case 2: printf("%d",a-b);
        break;
        case 3:printf("%d",a*b);
        break;
        case 4:printf("%d",a/b);
        break;
        
    
    default:
        break;
    }
}
