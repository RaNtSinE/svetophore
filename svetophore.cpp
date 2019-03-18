#include <iostream>



#include <windows.h>


int main() {
	int n,u,i,j,y;
	i=1;
	system("chcp 1251");
	system("cls");
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	for (i=1;i<10000;i++){
		n=i%4;
	if (n==0){
		
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("                       \n");
		SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));	   //1
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//7
		 					   	SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//13
			 					   	SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6		
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//19					
				   
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("                       \n");
		SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		Sleep(5000);																																									
		system("cls");}
				
	if (n==1){
		
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("                       \n");
		SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));	   //1
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//7
		 					   	SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//13
			 					   	SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6		
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//19					
				   
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("                       \n");
		SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		Sleep(1000);																																									
		system("cls");}
			
	if (n==2){
		
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("                       \n");
		SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));	   //1
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//7
		 					   	SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//13
			 					   	SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6		
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//19					
				   
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("                       \n");
		SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		Sleep(5000);																																									
		system("cls");}
			if (n==3){
		
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("                       \n");
		SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));	   //1
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|4));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//7
		 					   	SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|14));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//13
			 					   	SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));			   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//2
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	   
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//3						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
			 printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
			  printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
			   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("     ");
		   						SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//4						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("      ");	
		   SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//5						
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		   printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		    printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		     printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		      printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|2));
		       printf("#");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("       ");
			SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));	
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//6		
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("  ");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		   printf("                   ");SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		 					   printf("  \n");SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));		//19					
				   
		SetConsoleTextAttribute(hConsole, (WORD) ((8<<4)|8));
		printf("                       \n");
		SetConsoleTextAttribute(hConsole, (WORD) ((0<<4)|8));
		Sleep(1000);																																									
		system("cls");}
}

	return 0;
}
