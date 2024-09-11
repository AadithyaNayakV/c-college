#include<stdio.h>
void main(){
    int a,b,e,balance=150,balanc;
    printf("enter the password");
    scanf("%d",&b);
    if(b==7){
        printf("enter the choice \n 1 withdraw\n 2 check balance\n 3 deposit\n");
        scanf("%d",&e);
        switch(e){
 case 1:printf("enter the amount u want to withdraw:   ");
scanf("%d",&a);
if(a>10000){ printf(" this is huge amount this is ATM not bank ");}
else{
if(a%500==0){
    printf("ur money is ready\n ");

}
else {
    printf("please enter amount multiple of 500\n");
}} break;
case 2:{int m;// u cannot declare anything in swith case if u use braket u can
 printf("balance is %d gareeb ",balance);
break;}

case 3:
printf("enter the amount u want deposit");
scanf("%d",&balanc);
balance=balance+balanc;
printf("u money is successfully deposited %d",balance);



}}
else {
    printf("enter correct password");
}

        



}
