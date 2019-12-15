#include <stdio.h>

main (){
	printf("FAHRIANSYAH\n");
	printf("1912510813\n");
	printf("UAS PEMROGRAMAN DASAR \n");
	
	int a,b,c;
	printf("masukan tinggi gedung: ");
	scanf("%i",&c);
	printf("```\n");
	
	for (a=1; a<=c; a++)
	{
		for (b=1; b<=a; b++){
			if(a+b<=c){
				printf("*");
			} else{
				printf(" ");
			}
		}
		printf("\n");
	}
printf("```");
}
