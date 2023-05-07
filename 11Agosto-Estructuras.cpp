#include <stdio.h>
#include <iostream>
#include <conio.h>


struct date
{
int day;
int month;
int year;


};

int main()
{
	int selection=0;	
	char months[12][11]={{"Enero"},{"Febrero"},{"Marzo"},{"Abril"},{"Mayo"},{"Julio"},{"Junio"},{"Agosto"},{"Septiembre"},{"Octubre"},{"Noviembre"},{"Diciembre"}};
	date x;
	x.day=32;
	x.month=13;
	x.year=2017;
	bool exit=false;
	if((x.month>0 && x.month<13) && (x.day>0 && x.day<32))
	{	
		do
		{
				
			system("CLS");
			printf("Que formato desea: \n1) dd/mm/aaaa \n2) dd/mm/aa \n3) dd-mm-aaaa \n4) dd ''de mes de'' aaaa\n5) Salir\n ");
			selection=getch()-48;
			system("CLS");
			
			
				switch(selection)
			{
				case 1:		
					printf("%d/%d/%d",x.day,x.month,x.year);
					getch();
				break;
				
				case 2:
					if(x.year>2000)
					{			
						x.year=x.year-2000;
						printf("%d/%d/%d",x.day,x.month,x.year);
						x.year=x.year+2000;
					}
					else
					{			
						x.year=x.year-1900;
						printf("%d/%d/%d",x.day,x.month,x.year);
						x.year=x.year+1900;					
					}
					getch();
				break;
				
				case 3:
					printf("%d-%d-%d",x.day,x.month,x.year);
					getch();
				break;
				case 4:
					x.month=x.month-1;
					printf("%d del mes de %s del %d",x.day,months[x.month],x.year);
					x.month=x.month+1;
					getch();
				break;
				
				case 5:
					exit=true;
				break;
				
				default:					
					printf("No es un mes valido");	
					getch();			
				break;
			}
		}while(exit==false);
   }
   else
   {
   		printf("A problem has been detected and ''11Agosto-Estructuras.cpp'' has been shut down");
		printf("Check to make sure any new software. \nIf this is the newest software, ask your software manufacturer.\n");
    	if(x.month<=0 || x.month>=13)
		{	
		printf("*** STOP: 0x0000001A (dato invalido__x.month__variable tipe date)\n");
   		}
    	if(x.day<=0 || x.day>=32)
		{	
		printf("*** STOP: 0x0000001B (dato invalido__x.day__variable tipe date)\n");
   		}
	}
}

