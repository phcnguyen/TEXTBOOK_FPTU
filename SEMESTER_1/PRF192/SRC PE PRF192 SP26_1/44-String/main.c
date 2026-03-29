#include <stdio.h>
#include <stdlib.h>
//44-String : mảng chứa ký tự
// chuỗi
int strLength (char str[]);
int main()
{
   int arr[100];
   char str[100];
   printf("\nNhap chuoi: ");
   //scanf("%s",str); // regex
   gets(str);
   printf("\nChuoi ne: %s, do dai %d",str,strLength(str));
   return 0;
}
int strLength (char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
// lưu ý: muốn lưu hello tạo ra Char str[?] = "hello\0" độ dài 5 nhưng cí thêm \0
// "helloem"
// str[4] = '\0'
