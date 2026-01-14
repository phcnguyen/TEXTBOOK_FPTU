#include <stdio.h>
#include <math.h>


float triangleArea(float side1, float side2, float side3)
 {
 	//Write your statements here
    
	float p, area;
	
	if (side1 + side2 <= side3 ||
	    side1 + side3 <= side2 ||
	    side2 + side3 <= side1)
	{
	    area = 0;
	}
	else
	{
	    p = (side1 + side2 + side3) / 2;
	    area = sqrt(p * (p - side1) * (p - side2) * (p - side3));
	}	
	
    //End your statements 
    return area;
}

int main() {
 //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
 	system("cls");
 	printf("\nTEST Q1 (2 marks):\n");
    float side1, side2, side3;
    printf("Side 1= ");
    scanf("%f", &side1);

    printf("Side 2= ");
    scanf("%f", &side2);

    printf("Side 3= ");
    scanf("%f", &side3);
    
	float area=triangleArea(side1, side2, side3);
	printf("\nOUTPUT:\n");
    printf("%.2f\n", area);
    
    system ("pause");
  	return(0);
  //============================================================ 
}






