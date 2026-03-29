#include <stdio.h>
#include <string.h>

int main() {
    // ==============================
    // 1. KHAI BÁO STRING
    // ==============================
    char str1[100] = "Hello";     // khai báo mảng char
    char str2[] = "World";        // compiler tự tính size
    char str3[100];               // string rỗng

    // ==============================
    // 2. NHẬP STRING
    // ==============================

    // ⚠️ scanf chỉ đọc tới khoảng trắng
    printf("Nhap str3 (scanf): ");
    scanf("%s", str3);

    // Đọc cả dòng (có khoảng trắng)
    getchar(); // clear buffer
    printf("Nhap lai str3 (fgets): ");
    fgets(str3, sizeof(str3), stdin);

    // ==============================
    // 3. IN STRING
    // ==============================
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    // ==============================
    // 4. strlen - ĐỘ DÀI STRING
    // ==============================
    int len = strlen(str1);
    printf("Do dai str1: %d\n", len);

    // ==============================
    // 5. strcpy - COPY STRING
    // ==============================
    strcpy(str3, str1);  // copy str1 -> str3
    printf("Sau khi copy: %s\n", str3);

    // ==============================
    // 6. strcat - NỐI STRING
    // ==============================
    strcat(str1, str2);  // str1 = str1 + str2
    printf("Sau khi noi: %s\n", str1);

    // ==============================
    // 7. strcmp - SO SÁNH STRING
    // ==============================
    int cmp = strcmp(str1, str2);

    if (cmp == 0) {
        printf("2 chuoi giong nhau\n");
    } else if (cmp > 0) {
        printf("str1 > str2\n");
    } else {
        printf("str1 < str2\n");
    }

    // ==============================
    // 8. strchr - TÌM KÝ TỰ
    // ==============================
    char *pos = strchr(str1, 'o'); // tìm 'o' đầu tiên

    if (pos != NULL) {
        printf("Tim thay 'o' tai: %s\n", pos);
    }

    // ==============================
    // 9. strstr - TÌM CHUỖI CON
    // ==============================
    char *sub = strstr(str1, "lo");

    if (sub != NULL) {
        printf("Tim thay 'lo' tai: %s\n", sub);
    }

    // ==============================
    // 10. strtok - TÁCH CHUỖI
    // ==============================
    char str4[] = "apple,banana,orange";
    char *token = strtok(str4, ",");

    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    // ==============================
    // 11. SO SÁNH KHÔNG PHÂN BIỆT HOA THƯỜNG
    // ==============================
    // (Windows có _stricmp)
    // Linux dùng strcasecmp
    // printf("%d", _stricmp("abc", "ABC"));

    // ==============================
    // 12. DUYỆT TỪNG KÝ TỰ
    // ==============================
    for (int i = 0; i < strlen(str2); i++) {
        printf("%c ", str2[i]);
    }
    printf("\n");

    // ==============================
    // 13. XÓA KÝ TỰ '\n' từ fgets
    // ==============================
    str3[strcspn(str3, "\n")] = '\0';

    printf("Sau khi xoa \\n: %s\n", str3);

    return 0;
}