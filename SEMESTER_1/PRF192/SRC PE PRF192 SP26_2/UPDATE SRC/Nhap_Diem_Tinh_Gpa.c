#include<stdio.h>
#include<string.h>
struct Student{
	char id[20];
	char name[100];
	float s1,s2,s3;
};

int main(){
	int n;  // So luong hoc sinh
	scanf("%d",&n);
	
	struct Student a[50];
	int i;
	for(i=0;i<n;i++){
		scanf("%s",a[i].id);
		getchar();  // Lay 1 ki tu trang
		fgets(a[i].name,100,stdin);
		a[i].name[strlen(a[i].name)-1]='\0';
		scanf("%f%f%f",&a[i].s1,&a[i].s2,&a[i].s3);
	}
	
	for(i=0;i<n;i++){
		float gpa=(a[i].s1,a[i].s2,a[i].s3)/3;
		printf("%s; %s; %.2f\n",a[i].id,a[i].name,gpa);
		if(gpa>=5){
			printf("=> Passed\n");
		}
		else{
			printf("=> Failed\n");
		}
	}
	return 0;
}
