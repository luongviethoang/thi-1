#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int arr[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("\n nhap so thu %d :",i+1);
		scanf("%d",&arr[i]);
	}
	printf("ket qua :");
	for(i=9;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
