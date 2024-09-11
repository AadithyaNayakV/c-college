#include<stdio.h>
#include<string.h>
struct Person{
    char name[40];
    int age;
    float height;
};
int main(){
    struct Person p = {"abc",10,17.4};
    printf("%s,%d,%f\n",p.name,p.age,p.height);
    int sizeee = sizeof(p);
    printf("%d",sizeee);
    return 0;
}
