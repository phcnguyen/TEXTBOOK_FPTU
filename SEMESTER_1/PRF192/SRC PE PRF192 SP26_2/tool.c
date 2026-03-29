#include <stdio.h>
#include <string.h>

/*
==================== QUICK SEARCH ====================

length -> strlen
copy -> strcpy
compare -> strcmp
concat -> strcat
find char -> strchr
find string -> strstr
input string -> fgets scanf
output -> printf puts

pointer basics -> * &
pointer array -> arr ptr
swap pointer -> swap value
string pointer -> char*
dynamic memory -> malloc free
pass by reference -> pointer function

======================================================
*/


/*
==================== POINTER BASICS ====================

pointer con tro dia chi *
address dia chi &
dereference lay gia tri *

========================================================
*/

// basic pointer
void example_pointer_basic() {
    int a = 10;
    int *p = &a;   // p lưu địa chỉ của a

    printf("%d\n", a);    // 10
    printf("%d\n", *p);   // 10 (lấy giá trị từ địa chỉ)
}


/*
==================== SWAP (RẤT HAY RA THI) ====================

swap pointer doi gia tri 2 bien

===============================================================
*/

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void example_swap() {
    int x = 5, y = 10;
    swap(&x, &y);   // truyền địa chỉ
}


/*
==================== POINTER + ARRAY ====================

array pointer arr ptr arr[i] *(arr+i)

========================================================
*/

void example_array_pointer() {
    int arr[] = {1,2,3};

    printf("%d\n", arr[0]);     // 1
    printf("%d\n", *(arr+1));   // 2
}


/*
==================== POINTER + STRING ====================

string pointer char* string

========================================================
*/

void example_string_pointer() {
    char *s = "hello";   // pointer tới string

    printf("%c\n", *s);      // 'h'
    printf("%c\n", *(s+1));  // 'e'
}


/*
==================== PASS BY REFERENCE ====================

function pointer thay doi bien goc

========================================================
*/

void increase(int *a) {
    (*a)++;   // tăng giá trị
}

void example_pass_by_ref() {
    int x = 5;
    increase(&x);  // x = 6
}


/*
==================== DYNAMIC MEMORY ====================

malloc cap phat dong free giai phong

=======================================================
*/

#include <stdlib.h>

void example_malloc() {
    int *p;

    p = (int*) malloc(3 * sizeof(int)); // cấp phát 3 phần tử

    p[0] = 10;
    p[1] = 20;

    free(p); // giải phóng
}


/*
==================== COMMON TRAPS ====================

- quên * khi dùng pointer
- quên & khi truyền vào function
- dùng pointer chưa cấp phát
- quên free

=====================================================
*/


int main() {
    return 0;
}