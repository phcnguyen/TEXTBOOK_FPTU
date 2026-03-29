#include <stdio.h>
#include <stdlib.h>
// xin nguoi dung nhap vao chieu dai, chieu rong
// chieu dai, chieu rong > 0
// tinh dien tich hcn
int main()
{
    int cd, cr;
    pritnf("Enter cd: ");
    scanf("%d",&cd);
    printf("Enter cr: ");
    scanf("%d",&cr);
    if(cd > 0 && cr > 0){
        printf("Dien tich hinh chu nhat: %d",cd*cr);
    }else{
        printf("Cd,cd is not valid");
    }
    return 0;
}
// xin người dùng nhập vào 3 số dương lần lươt là
// độ dài 3 cạnh a,b,c
// từ 3 độ dài đó, kiểm tra xem a,b,c có tạo thành tam giác
// hay không
// nếu có thì tam giác gì
// Cân, Đều, Vuông Cân, Vuông, Tam Giác thường
