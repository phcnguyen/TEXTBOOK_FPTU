#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int size;
	printf("nhap so you want:");
	scanf("%d",&size);
	int a[size];
	for (int i=0;i<=size-1;i++){
		printf("array:");
		scanf("%d",&a[i]);
	} 
	for (int i=0;i<=size-1;i++){
		printf("%2d", a[i]);
	}
	return 0;
}