#include <stdio.h>

int main()
{
    int num,i,a[20];
    scanf("%d", &num);
    for(i = 0; i < num; i++) {
        scanf("%d", &a[i]);
        
    }
    for(int j=num-1;j>=0;j--){
        printf("%d ",a[j]);
    }


    /* Write the logic to reverse the array. */

    
    return 0;
}