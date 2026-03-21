#include<stdio.h>
#include<string.h>
struct Product{
	char id[20];
	char name[100];
	float price;
	char brand[50];
};

int main(){
    int n;
    scanf("%d",&n);
    
    struct Product a[50];
    int i;
    for ( i =0 ; i<n;i++){
    	scanf("%s",&a[i].id);
    	getchar();
    	fgets(a[i].name,100,stdin);
    	a[i].name[strlen(a[i].name)-1]='\0';
    	scanf("%f",&a[i].price);
    	getchar();
    	fgets(a[i].brand, 50, stdin);
    	a[i].brand[strlen(a[i].brand)-1]='\0';
	}
	
	int op;
	
	scanf("%d",&op);
	if(op==1){
		for(i=0;i<n;i++){
			printf("%s; %s; %.2f; %s\n",a[i].id,a[i].name,a[i].price,a[i].brand);	
		}
	}
	else if(op==2){
		float sum =0;
		for(i=0;i<n;i++){
		printf("%s; %s; %.2f; %s\n",a[i].id,a[i].name,a[i].price,a[i].brand);	
		sum+= a[i].price;
		}
		printf("Total price: %.2f",sum);
	}
	else if (op == 3){
		float max = a[0].price;
		for(i=0;i<n;i++){
			if(a[i].price>max)
		    printf("%s; %s; %.2f; %s\n",a[i].id,a[i].name,a[i].price,a[i].brand);	
		}
	}else
	{
		printf("Invalid option!");
	}
	return 0;
}
