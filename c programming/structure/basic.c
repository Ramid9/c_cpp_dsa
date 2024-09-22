#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        int age;
        float salary;

    };
    struct person person1;
    strcpy(person1.name,"Ramid Roy Majhi\n");
    person1.age = 18;
    person1.salary = 5000;

    struct person person2;
    strcpy(person2.name,"Mamuni Barman");
    person2.age = 18;
    person2.salary = 5001;

    printf("%s",person1.name);
    printf("%d",person2.age);
}