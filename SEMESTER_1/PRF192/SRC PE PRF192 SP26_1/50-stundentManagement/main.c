#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//50-stundentManagement
const int MAX =100;
void showMenu (void);
void addStudent (char id[][MAX],char fName[][MAX],char lName[][MAX],int yob[],float gpa[],int *size);
void printStudentlist(char id[][MAX],char fName[][MAX],char lName[][MAX],int yob[],float gpa[],int size);
int findPosById (char id[][MAX],int size,char key[]);
void removeStudentbyPos(char id[][MAX],char fName[][MAX],char lName[][MAX],int yob[],float gpa[],int *size,int pos);
void printHighestStudentList (char id[][MAX],char fName[][MAX],char lName[][MAX],int yob[],float gpa[],int size);
void sortStudent (char id[][MAX],char fName[][MAX],char lName[][MAX],int yob[],float gpa[],int size);
int main()
{
    char id[50][MAX];
    char fName[50][MAX];
    char lName[50][MAX];
    int yob[50];
    float gpa[50];
    int size = 0;
    int choice;
    char buffer;
    // chuẩn bị
    do{
    //in menu
    showMenu();
    // xin lựa chọn
    do{// nhập sai là nhập lại
    printf("\nPls , input your choice(intergent): ");
    scanf("%d",&choice);
    scanf("%c",&buffer);
    fflush(stdin);
    if(buffer != 10){
        printf("\nNhap lai di : ");
      }
    }while(buffer != 10);
    // xử lí choice
    switch(choice){
        case 1:{
            printf("\nadd Student :");
            addStudent(id,fName,lName,yob,gpa,&size);
            break;
        }
        case 2:{
            printf("\nseacrh infor student: ");
            char key[MAX];
            printf("\nInput id: ");
            gets(key);
            int pos = findPosById(id,size,key);
            if(pos == -1){
                printf("\nstudent doesn't exist: ");
            }else{
                printStudent(id,fName,lName,yob,gpa,pos);
            }
            break;
        }
        case 3:{
            printf("\ndelete infor student: ");
            char key[MAX];
            printf("\nInput id: ");
            gets(key);
            int pos = findPosById(id,size,key);
            if(pos == -1){
                printf("\nstudent doesn't exist: ");
            }else{
                printf("\nDeleted successfully");
                printStudent(id,fName,lName,yob,gpa,pos);
                removeStudentbyPos(id,fName,lName,yob,gpa,&size,pos);
            }
            break;
        }
        case 4:{
            printf("\nprint Highest StudentList: ");
            printHighestStudentList(id,fName,lName,yob,gpa,size);
            break;
        }
        case 5:{
            printf("\nprint Student list: ");
            printStudentlist(id,fName,lName,yob,gpa,size);
            break;
        }
        case 6:{
            printf("\nSwap Student :");
            sortStudent(id,fName,lName,yob,gpa,size);
            break;
        }
        case 7:{
            printf("\nNice to meet you, see you again");
            break;
        }
        default:{
            printf("\nYour choice is requied between 1 and 7 !!!");
            break;
        }
    }
}while(choice != 7);
    return 0;
}
void showMenu (void){
    printf("\n----Student Management Application----");
    printf("\n1.Add a new Student");
    printf("\n2.Search student by id");
    printf("\n3.Delete student by id");
    printf("\n4.print highest gpa student list");
    printf("\n5.print student list");
    printf("\n6.sort student list oder by fName ascending");
    printf("\n7.quit");
}
void addStudent (char id[][MAX],char fName[][MAX],char lName[][MAX],int yob[],float gpa[],int *size){
    int isFind;
    do{
    printf("\nid: ");
    char key [MAX];
    gets(key);
    fflush(stdin);
    isFind = findPosById(id,*size,key);
    if(isFind != -1){
        printf("\nThis id have been used");
    }else{
        strcpy(id[*size],key);
         }
    }while(isFind != -1);
    printf("\nfName : ");
    gets(fName[*size]);
    fflush(stdin);


    printf("\nlName : ");
    gets(lName[*size]);
    fflush(stdin);


    printf("\nyob : ");
    scanf("%d",&yob[*size]);
    fflush(stdin);

    printf("\ngpa : ");
    scanf("%f",&gpa[*size]);
    fflush(stdin);

    (*size)++;

    printf("\nAdding successfully");
}
void printStudentlist(char id[][MAX],char fName[][MAX],char lName[][MAX],int yob[],float gpa[],int size){
    if(size == 0){
        printf("\nNothing to print:");
    }else{
        for(int i = 0;i <= size -1; i++){
            printf("\n%-9s|%-9s|%-9s|%4d|%5.2f",id[i],fName[i],lName[i],yob[i],gpa[i]);
        }
    }
}
int findPosById (char id[][MAX],int size,char key[]){
    for(int i =0; i <= size -1;i++){
        if(strcmp(id[i],key) == 0) return i;
    }
    return -1;
}
void printStudent(char id[][MAX],char fName[][MAX],char lName[][MAX],int yob[],float gpa[],int pos){
            printf("\n%-9s|%-9s|%-9s|%4d|%5.2f",id[pos],fName[pos],lName[pos],yob[pos],gpa[pos]);
        }
void removeStudentbyPos(char id[][MAX],char fName[][MAX],char lName[][MAX],int yob[],float gpa[],int *size,int pos){
    for(int i = pos; i <= *size -1;i++){
        strcpy(id[i],id[i +1]);
        strcpy(fName[i],fName[i +1]);
        strcpy(lName[i],lName[i +1]);
        yob[i] = yob[i + 1];
        gpa[i] = gpa[i + 1];
    }
    (*size)--;
}
void printHighestStudentList (char id[][MAX],char fName[][MAX],char lName[][MAX],int yob[],float gpa[],int size){
    if(size == 0){
        printf("\nNothing to print");
        return;
    }
    //tìm gpa lớn nhất
    float maxGpa =  gpa[0];// giả định
    for(int i = 0; i <= size -1; i++){
        if(gpa[i] > maxGpa) maxGpa = gpa[i];
    }
    // duyệt danh sách thằng nào có gpa = maxgpa là in
    for(int i  =0; i <= size -1;i++){
        if(gpa[i] == maxGpa){
           printStudent(id,fName,lName,yob,gpa,i);
        }
    }
}
void sortStudent (char id[][MAX],char fName[][MAX],char lName[][MAX],int yob[],float gpa[],int size){
    for(int i = 0 ;i <= size -1;i++){
        for(int j = i+ 1; j <= size -2 ;j++){
            if(strcmp(fName[i],fName[j]) == 1){
                char tmpS[MAX];
                strcpy(tmpS,id[i]);
                strcpy(id[i],id[j]);
                strcpy(id[j],tmpS);

                strcpy(tmpS,fName[i]);
                strcpy(fName[i],fName[j]);
                strcpy(fName[j],tmpS);

                strcpy(tmpS,lName[i]);
                strcpy(lName[i],lName[j]);
                strcpy(lName[j],tmpS);

                int tmpI = yob[i];
                yob[i] = yob[j];
                yob[j] = tmpI;

                float tmpF = gpa[i];
                gpa[i] = gpa[j];
                gpa[j] = tmpF;
            }
        }
    }
}
