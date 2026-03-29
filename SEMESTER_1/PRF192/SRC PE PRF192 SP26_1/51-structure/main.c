#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//51-structure : cấu trức
//primitive datatype : kiểu cấu trcus nguyên thủy
// int char double float
// mình không có kiểu dữ liệu là student
// structure giúp mình 1 định nghĩa kiểu dữ liệu từ các primitive
void addNewStudent(struct student stdl[], int *size);
struct Student{
    char id[100];
    char name[100];
    int yob;
    float gpa;
};
struct Point{
    int x;
    int y;
};
struct Egde{
    struct Point pA;
    struct Point pB;

};
int main()
{
    struct Student doanh;
    strcpy(doanh.id,"SE180566");
    strcpy(doanh.name,"Danh 5 cai");
    doanh.yob= 2005;
    doanh.gpa = 5;
    printf("\n %s %s %d %f",doanh.id,doanh.name,doanh.yob,doanh.gpa);
    struct Student stdl [100];
    int size = 0;
    addNewStudent(stdl,&size);
    //in danh sách ra
    for(int i =0; i<= size -1;i++){
        printf("\n %s %s %d %f",stdl[i].id,stdl[i].name,stdl[i].yob,stdl[i].gpa);
    }
    return 0;
}
void addNewStudent(struct Student stdl[], int *size){
    printf("\nID: ");
    gets(stdl[*size].id); fflush(stdin);

    printf("\nName: ");
    gets(stdl[*size].name); fflush(stdin);

    printf("\nYob: ");
    scanf("%d",&stdl[*size].yob); fflush(stdin);

    printf("\nGpa: ");
    scanf("%f",&stdl[*size].gpa); fflush(stdin);
}
