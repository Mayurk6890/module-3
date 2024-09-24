//10. find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
int main()
{
	int Area,widht,lenght,height;
	printf("Enter the width of rectangular prism :");
	scanf("\n%d",&widht);
	
	printf("Enter the lenght of rectangular prism :");
	scanf("\n%d",&lenght);
	
	printf("Enter the height of rectangular prism :");
	scanf("\n%d",&height);
	
	Area = 2*(widht*lenght+height*lenght+height*widht);
	
	printf("\nArea of the rectangular prism : %d", Area);
	
	return 0;
	 
}
