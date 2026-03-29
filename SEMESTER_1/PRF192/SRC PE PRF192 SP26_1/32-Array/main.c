#include <stdio.h>
#include <stdlib.h>
//32-Array
int main()
{
    int arr[6] = {11,7,5};//vừa mới tạo mảng 6 phần từ
    // vừa tạo 6 biếng có cùng tên là arr
    // cùng kiểu là int
    // liền kề gần sát nhau
    // lần lượt là arr[0] -> arr [5]

    for ( int i = 0;i <= 5;i ++){
        printf("\n%d",arr[i]);
    }
    //in ra giá trị của phần tử thứ 1 trong mảng
    printf("\nArr[1] =%d",arr[1]);
    //in ra giá trị của arr[0]
    //in ra giá trị cuả biến đầu tiên trong mảng
    printf("\nArr[0] =%d",arr[0]);
    //in ra địa chỉ của phần tử đầu tiên trong mảng
    printf("\nDia chi cua Arr[0] =%u",&arr[0]);
    //in ra địa chỉ của vị trí số 1
    printf("\nDia chi cua Arr[1] =%u",&arr[1]);
    //in ra giá trị bằng tên của mảng
    printf("\nArr = %d",arr);//arr lưu địa chỉ của phần tử đầu tiên => con trỏ
    // mảng là một con trỏ rất dặc biệt
    // tến mảng lưu địa chỉ của biến đầu tiên
    // và nhwof vào đặc tính cùng kiểu , liền kề
    // mảng có thể troe được tất cả các phần tử của mình
    // => mảng là 1 con troe rất xịn
    // arr = 6422016
    // arr[3] => 6422016 + (3 * 4byte)
    // arr[n] => 6422016 + (n * 4byte)
    return 0;
}
