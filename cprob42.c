#include<stdio.h>
#include<string.h>


//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
    };
    

int main(){
    struct student s1;
    s1.roll = 350001024;
    s1.cgpa = 8.73;
    //s1.name = ""
    strcpy(s1.name, "Soumen Patra");
    printf("Student name  = %s\n", s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa  = %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 350001025;
    s1.cgpa = 9.35;
    strcpy(s2.name, "Paramita Gantait");
    printf("Student name  = %s\n", s2.name);
    printf("Student roll no = %d\n", s2.roll);
    printf("Student cgpa  = %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 350001004;
    s3.cgpa = 9.00;
    strcpy(s3.name, "Kapildeb Biswas");
    printf("Student name  = %s\n", s3.name);
    printf("Student roll no = %d\n", s3.roll);
    printf("Student cgpa  = %f\n", s3.cgpa);


    return 0;
}

