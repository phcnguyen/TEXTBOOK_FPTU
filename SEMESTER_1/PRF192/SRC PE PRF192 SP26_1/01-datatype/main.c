#include <stdio.h>
#include <stdlib.h>
// comment: ghi chu
// luu tru -> tinh toan -> bao cao (report)
// ky tu char character 1byte
// so nguyen int (integer) 4byte 17.9->17
// so thuc float 4byte 17.9
// so thuc double ( long float ) 8byte
int main() //dau nhac he args
{
    // luu tru
    // muon luu ki tu dau tien trong ten
    // 1 xac dinh kieu du lieu: char
    // 2 xac dinh ten cho bien:
    // * ten bien la danh tu , xac dinh cai dang chua
    // * cammelCase cu phap con lac da
    // * quy tac : khong duoc co dau
    //             khong la tieng viet , khong ky tu dac biet, khong dau cach
    //             khong co so o dau
    char firstCharOfName = 'd';
    // luu tuoi cua minh
    int age = 18;
    // luu diem thi cua minh
    float point = 10;
    double score = 9.8;
    // in ra xem
    // in ra ky tu dau tien trong ten cua minh
    // printf : print format : in tieu chuan
    printf("anh diep dep trai");
    printf("\nky tu dau tien trong ten: %c", firstCharOfName);//hardcode
    // in ra tuoi cua ban
    printf("\ntuoi ne: %i", age);//i: integer
    printf("\ntuoi ne: %d", age);//d: decimal: he 10
    //printf("\ntuoi ne: %", age);//u: unsigned int: so nguyen duong
    // in ra diem cua ban
    printf("\ndiem ne: %.2f", point);//point
    printf("\ndiem ne: %.2lf", score);//score
    // in ra dia chi cua age
    printf("\ndia chi ne: %u", &age);//%p: pointer
    // ngoai le
    int number = 'A';
    char ch = '66';
    //null:biet kieu nhung khong ro gia tri
    //void: khong co cai gi het

    printf("\nnumber ne %d", number);//65-A
    printf("\nch ne %c", ch);//66-B
     //tu duy giai thuat
     //tinh tong gia tri cua 2 so nguyen
     // I:input P:process O:output
     int number1= 10;
     int number2= 3;
     float result = (float)number1/number2;
     printf("\n%d / %d = %f",number1,number2,result);
     //swap :hoan vi
     // hoan vi gia tri cua 2 bien so gnguyen
     int number3 =15;
     int sting =10;
     int tmp= number3;//tmp= 15
     number3= sting;//number1= 10
     sting= tmp;//sting= 15

     printf("\nNumber1 = %d, sting = %d", number3, sting);
    return 0;
}
