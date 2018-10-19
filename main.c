#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void stcse();
void stece();
void steee();
void stit();
void stmech();
void stcivil();
void stchemical();

void sccse();
void scece();
void sceee();
void scit();
void scmech();
void sccivil();
void scchemical();

void obccse();
void obcece();
void obceee();
void obcit();
void obcmech();
void obccivil();
void obcchemical();

void occse();
void ocece();
void oceee();
void ocit();
void ocmech();
void occivil();
void occhemical();

FILE *fptr;
int rank1;
char name[25],c;

void main()
{
	int w=1,c,e;
	while(w)
	{
		fptr=fopen("welcome.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr);
		printf("\t\t\t\tEnter your Name :");
		scanf("%s",name);
		printf("\n\t\t\t\tEnter your category\t1.st\t2.sc\t3.bc\t4.oc\t5.exit :");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("\n\t\t\t\tEnter your rank:");
				scanf("%d",&rank1);
				printf("\n\t\t\t\tEnter your preferd branch\t1.CSE\t2.ECE\t3.EEE\t4.It\t5.Mech\t6.Civil\t7.Chemical\t8.exit:");
				scanf("%d",&e);
				switch(e)
				{
					case 1:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :ST",name,rank1);
						stcse();break;
					case 2:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :ST",name,rank1);
						stece();break;
					case 3:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :ST",name,rank1);	
						steee();break;
					case 4:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :ST",name,rank1);
						stit();break;
					case 5:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :ST",name,rank1);	
						stmech();break;
					case 6:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :ST",name,rank1);
						stcivil();break;
					case 7:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :ST",name,rank1);
						stchemical();break;
					case 8:
						w=0;break;
					default:
						printf("\n\t\t\t\tEnter the above given characters only ");break;
				}
				break;
			case 2:
				printf("\n\t\t\t\tEnter your rank:");
				scanf("%d",&rank1);
				printf("\n\t\t\t\tEnter your preferd branch\t1.CSE\t2.ECE\t3.EEE\t4.It\t5.Mech\t6.Civil\t7.Chemical\t8.exit:");
				scanf("%d",&e);
				switch(e)
				{
					case 1:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :SC",name,rank1);
						sccse();break;
					case 2:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :SC",name,rank1);
						scece();break;
					case 3:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :SC",name,rank1);	
						sceee();break;
					case 4:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :SC",name,rank1);
						scit();break;
					case 5:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :SC",name,rank1);	
						scmech();break;
					case 6:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :SC",name,rank1);
						sccivil();break;
					case 7:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :SC",name,rank1);
						scchemical();break;
					case 8:
						w=0;break;
					default:
						printf("\n\t\t\t\tEnter the above given characters only");break;
				}
				break;
			case 3:
				printf("\n\t\t\t\tEnter your rank:");
				scanf("%d",&rank1);
				printf("\n\t\t\t\tEnter your preferd branch\t1.CSE\t2.ECE\t3.EEE\t4.It\t5.Mech\t5.Civil\t6.Chemical\t7.exit:");
				scanf("%d",&e);
				switch(e)
				{
					case 1:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :BC",name,rank1);
						obccse();break;
					case 2:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :BC",name,rank1);
						obcece();break;
					case 3:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :BC",name,rank1);	
						obceee();break;
					case 4:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :BC",name,rank1);
						obcit();break;
					case 5:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :BC",name,rank1);	
						obcmech();break;
					case 6:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :BC",name,rank1);
						obccivil();break;
					case 7:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :BC",name,rank1);
						obcchemical();break;
					case 8:
						w=0;break;
					default:
						printf("\n\t\t\t\tEnter the above given characters only");break;
				}
				break;
			case 4:
				printf("\n\t\t\t\tEnter your rank:");
				scanf("%d",&rank1);
				printf("\n\t\t\t\tEnter your preferd branch\t1.CSE\t2.ECE\t3.EEE\t4.It\t5.Mech\t6.Civil\t7.Chemical\t8.exit:");
				scanf("%d",&e);
				switch(e)
				{
					case 1:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :OC",name,rank1);
						occse();break;
					case 2:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :OC",name,rank1);
						ocece();break;
					case 3:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :OC",name,rank1);	
						oceee();break;
					case 4:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :OC",name,rank1);
						ocit();break;
					case 5:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :OC",name,rank1);	
						ocmech();break;
					case 6:
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :OC",name,rank1);
						occivil();break;
					case 7:	
						printf("\n\t\t\t\tName :%s\tRank :%d\tCategory :OC",name,rank1);
						occhemical();break;
					case 8:
						w=0;break;
					default:
						printf("\n\t\t\t\tEnter the above given characters only");break;
				}
				break;
			    case 5:
				w=0;break;
			    default:
				printf("\n\t\t\t\tenter the above given characters only");break;		

		}
	}
}
void stcse()
{
	if(rank1>0 && rank1<7650)
	{
		fptr=fopen("stcse07650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=7650 && rank1<=9500)
	{
		fptr=fopen("stcse76509500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>9500 && rank1<9950)
	{
		fptr=fopen("stcse95009950.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
	    	c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr);
	}
	else if(rank1>=9950 && rank1<17500)
	{
		fptr=fopen("stcse995017500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr);
	}
	else if(rank1>=17500 && rank1<18300)
	{
		fptr=fopen("stcse1750018300.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		}
    		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr);
	}
	else if(rank1>=18300 && rank1<20000)
	{
		fptr=fopen("stcse1830020000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 

        	} 
		fclose(fptr);
	}
	else if(rank1>=20000 && rank1<=20850)
	{
		fptr=fopen("stcse2000020850.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);	
	}
	else if(rank1>20850 && rank1<22250)
	{
		fptr=fopen("stcse2085022250.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);
	}
	else if(rank1>=22250 && rank1<24000)
	{
		fptr=fopen("stcse2225024000.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);
		}
	else if(rank1>=24000 && rank1<27850)
	{
		fptr=fopen("stcse2400027850.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);
	}
	else if(rank1>=27850 && rank1<28000)
	{
		fptr=fopen("stcse2785028000.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);
	}
	else if(rank1>=28000 && rank1<29000)
	{
		fptr=fopen("stcse2800029000.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);	
	}
	else if(rank1>=29000 && rank1<33000)
	{
		fptr=fopen("stcse2900033000.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);
	}
	else if(rank1>=33000 && rank1<33500)
	{
		fptr=fopen("stcse3300033500.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);
	}
	else if(rank1>=33500 && rank1<34000)
	{
		fptr=fopen("stcse3350034000.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);
	}
	else if(rank1>=34000 && rank1<34500)
	{
		fptr=fopen("stcse3400034500.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);
	}
	else if(rank1>=34500 && rank1<37000)
	{
		fptr=fopen("stcse3450037000.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);
	}
	else if(rank1>=37000 && rank1<37500)
	{
		fptr=fopen("stcse3700037500.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);
	}
	else if(rank1>=37500 && rank1<39500)
	{
		fptr=fopen("stcse3750039500.txt","r");
		if (fptr == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		} 
		// Read contents from file 
		c = fgetc(fptr); 
		while (c != EOF) 
		{ 
			printf ("%c", c); 
			c = fgetc(fptr); 
		} 
		fclose(fptr);
	}
	else
	{
		printf("\nYou have scope for CSE\n");
	}
}
void stece()
{
	if(rank1>0 && rank1<6000)
	{
		fptr=fopen("stece06000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=6000 && rank1<7000)
	{
		fptr=fopen("stece60007000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=7000 && rank1<13000)
	{
		fptr=fopen("stece700013000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=13000 && rank1<16000)
	{
		fptr=fopen("stece1300016000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=16000 && rank1<19000)
	{
		fptr=fopen("stece1600019000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=19000 && rank1<20500)
	{
		fptr=fopen("stece1900020500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=20500 && rank1<22750)
	{
		fptr=fopen("stece2050022750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=22750 && rank1<24250)
	{
		fptr=fopen("stece2275024250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=24250 && rank1<24750)
	{
		fptr=fopen("stece2425024750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=24750 && rank1<25250)
	{
		fptr=fopen("stece2475025250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=25250 && rank1<26000)
	{
		fptr=fopen("stece2525026000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=26000 && rank1<28500)
	{
		fptr=fopen("stece2600028500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=28500 && rank1<32500)
	{
		fptr=fopen("stece2850032500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=32500 && rank1<33500)
	{
		fptr=fopen("stece3250033500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=33500 && rank1<33750)
	{
		fptr=fopen("stece3350033750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=33750 && rank1<34000)
	{
		fptr=fopen("stece3375034000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=34000 && rank1<35000)
	{
		fptr=fopen("stece3400035000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else
	{
		printf("\nYou have scope for ECE\n");
	}
}
void steee()
{
	if(rank1>0 && rank1<6000)
	{
		fptr=fopen("steee06000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=6000 && rank1<6450)
	{
		fptr=fopen("steee60006450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=6450 && rank1<7000)
	{
		fptr=fopen("steee64507000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=7000 && rank1<15500)
	{
		fptr=fopen("steee700015500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=15500 && rank1<17000)
	{
		fptr=fopen("steee1550017000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=17000 && rank1<19000)
	{
		fptr=fopen("steee1700019000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=19000 && rank1<21000)
	{
		fptr=fopen("steee1900021000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=21000 && rank1<23500)
	{
		fptr=fopen("steee2100023500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=21000 && rank1<23500)
	{
		fptr=fopen("steee2100023500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=23500 && rank1<24500)
	{
		fptr=fopen("steee2350024500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=24500 && rank1<27000)
	{
		fptr=fopen("steee2450027000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=27000 && rank1<27500)
	{
		fptr=fopen("steee2700027500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=27500 && rank1<29750)
	{
		fptr=fopen("steee2750029750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=29750 && rank1<30250)
	{
		fptr=fopen("steee2975030250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=30250 && rank1<33500)
	{
		fptr=fopen("steee3025033500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=33500 && rank1<34500)
	{
		fptr=fopen("steee3350034500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else
	{
		printf("\nYou have scope for EEE\n");
	}
}
void stit()
{
	if(rank1>0 && rank1<6000)
	{
		fptr=fopen("stit06000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=6000 && rank1<7500)
	{
		fptr=fopen("stit60007500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=7000 && rank1<12500)
	{
		fptr=fopen("stit700012500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=12500 && rank1<17000)
	{
		fptr=fopen("stit1250017000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=17000 && rank1<18500)
	{
		fptr=fopen("stit1700018500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=18500 && rank1<20500)
	{
		fptr=fopen("stit1850020500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=20500 && rank1<23000)
	{
		fptr=fopen("stit2050023000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=23000 && rank1<24500)
	{
		fptr=fopen("stit2300024500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=24500 && rank1<24750)
	{
		fptr=fopen("stit2450024750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=24750 && rank1<25250)
	{
		fptr=fopen("stit2475025250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=25250 && rank1<26250)
	{
		fptr=fopen("stit2525026000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=26250 && rank1<28500)
	{
		fptr=fopen("stit2600028500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=28500 && rank1<32250)
	{
		fptr=fopen("stit2850032250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=32250 && rank1<33500)
	{
		fptr=fopen("stit3250033500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=33500 && rank1<33750)
	{
		fptr=fopen("stit3350033750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=33750 && rank1<34500)
	{
		fptr=fopen("stit3375034000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=34500 && rank1<35500)
	{
		fptr=fopen("stit3400035000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else
	{
		printf("\nYou have scope for IT\n");
	}

}
void stmech()
{
	if(rank1>0 && rank1<10500)
	{
		fptr=fopen("stmech010500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=10500 && rank1<12000)
	{
		fptr=fopen("stmech1050012000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=12000 && rank1<15000)
	{
		fptr=fopen("stmech1200015000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=15000 && rank1<17500)
	{
		fptr=fopen("stmech1500017500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=17500 && rank1<19000)
	{
		fptr=fopen("stmech1750019000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=19000 && rank1<21500)
	{
		fptr=fopen("stmech1900021500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=21500 && rank1<25500)
	{
		fptr=fopen("stmech2150025500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=25500 && rank1<27500)
	{
		fptr=fopen("stmech2550027500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=27500 && rank1<28000)
	{
		fptr=fopen("stmech2750028000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=28000 && rank1<29000)
	{
		fptr=fopen("stmech2800029000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=29000 && rank1<29750)
	{
		fptr=fopen("stmech2900029750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=29750 && rank1<32000)
	{
		fptr=fopen("stmech2975032000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=32000 && rank1<35000)
	{
		fptr=fopen("stmech3200035000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else
	{
		printf("\nYou have scope for MECHANICAL\n");
	}
}
void stcivil()
{
	if(rank1>0 && rank1<8500)
	{
		fptr=fopen("stcivil08500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=8500 && rank1<10000)
	{
		fptr=fopen("stcivil850010000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>10000 && rank1<14250)
	{
		fptr=fopen("stcivil1000014250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=14250 && rank1<15000)
	{
		fptr=fopen("stcivil1425015000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>15000 && rank1<16500)
	{
		fptr=fopen("stcivil1500016500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=16500 && rank1<18000)
	{
		fptr=fopen("stcivil1650018000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=18000 && rank1<19500)
	{
		fptr=fopen("stcivil1800019500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=19500 && rank1<23500)
	{
		fptr=fopen("stcivil1950023500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=23500 && rank1<24500)
	{
		fptr=fopen("stcivil2350024500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=24500 && rank1<25000)
	{
		fptr=fopen("stcivil2350025000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=25000 && rank1<27750)
	{
		fptr=fopen("stcivil2500027750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=27750 && rank1<28250)
	{
		fptr=fopen("stcivil2775028250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=28250 && rank1<28500)
	{
		fptr=fopen("stcivil2825028500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=28500 && rank1<31500)
	{
		fptr=fopen("stcivil2850031500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=31500 && rank1<32500)
	{
		fptr=fopen("stcivil3150032500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=32500 && rank1<35000)
	{
		fptr=fopen("stcivil3250035000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else
	{
		printf("\nYou have scope for CIVIL\n");
	}
}
void stchemical()
{
	if(rank1>0 && rank1<15000)
	{
		fptr=fopen("stchemical015000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=15000 && rank1<19000)
	{
		fptr=fopen("stchemical1500019000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=19000 && rank1<26500)
	{
		fptr=fopen("stchemical1900026500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=26500 && rank1<34750)
	{
		fptr=fopen("stchemical2650034750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=34750 && rank1<60000)
	{
		fptr=fopen("stchemical3475060000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else
	{
		printf("\nYou have scope for CHEMICAL\n");
	}
}
void sccse()
{
	if(rank1>0 && rank1<6250)
	{
		fptr=fopen("sccse06250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=6250 && rank1<7000)
	{
		fptr=fopen("sccse62507000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7000 && rank1<13000)
	{
		fptr=fopen("sccse700013000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=13000 && rank1<14500)
	{
		fptr=fopen("sccse1300014500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=14500 && rank1<18000)
	{
		fptr=fopen("sccse1450018000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=18000 && rank1<19250)
	{
		fptr=fopen("sccse1800019250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=19250 && rank1<20000)
	{
		fptr=fopen("sccse1925020000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for CSE\n");
	}
	
}
void scece()
{
	if(rank1>0 && rank1<6500)
	{
		fptr=fopen("scece06500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=6250 && rank1<7000)
	{
		fptr=fopen("scece62507000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7000 && rank1<14000)
	{
		fptr=fopen("scece700014000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=14000 && rank1<17750)
	{
		fptr=fopen("scece1400017750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=17750 && rank1<19750)
	{
		fptr=fopen("scece1775019750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for ECE\n");
	}
}
void sceee()
{
	if(rank1>0 && rank1<8500)
	{
		fptr=fopen("sceee06500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=8500 && rank1<9500)
	{
		fptr=fopen("sceee62507000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9500 && rank1<16750)
	{
		fptr=fopen("sceee950016750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=16750 && rank1<16750)
	{
		fptr=fopen("sceee16750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=16750 && rank1<19000)
	{
		fptr=fopen("sceee1675019000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=19000 && rank1<21000)
	{
		fptr=fopen("sceee1900021000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for EEE\n");
	}
}
void scit()
{
	if(rank1>0 && rank1<7500)
	{
		fptr=fopen("scit07500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=7500 && rank1<13400)
	{
		fptr=fopen("scit750013400.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=13400 && rank1<18000)
	{
		fptr=fopen("scit1340018000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=18000 && rank1<20500)
	{
		fptr=fopen("scit1800020500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for IT\n");
	}
}
void scmech()
{
	if(rank1>0 && rank1<9500)
	{
		fptr=fopen("scmech09500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=9500 && rank1<10000)
	{
		fptr=fopen("scmech950010000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10000 && rank1<17000)
	{
		fptr=fopen("scmech1000017000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=17000 && rank1<24000)
	{
		fptr=fopen("scmech1700024000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for MECHANICAL\n");
	}
}
void sccivil()
{
	if(rank1>0 && rank1<10500)
	{
		fptr=fopen("sccivil010500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=10500 && rank1<12000)
	{
		fptr=fopen("sccivil1050012000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12000 && rank1<19500)
	{
		fptr=fopen("sccivil1200019500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=19500 && rank1<20500)
	{
		fptr=fopen("sccivil1950020500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for CIVIL\n");
	}
}
void scchemical()
{
	if(rank1>0 && rank1<17000)
	{
		fptr=fopen("scchemical017000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=17000 && rank1<20000)
	{
		fptr=fopen("scchemical1700020000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=20000 && rank1<25000)
	{
		fptr=fopen("scchemical2000025000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=25000 && rank1<30000)
	{
		fptr=fopen("scchemical2500030000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for CHEMICAL\n");
	}
}
void obccse()
{
	if(rank1>0 && rank1<1250)
	{
		fptr=fopen("obccse01250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=1250 && rank1<2000)
	{
		fptr=fopen("obccse12502000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=2000 && rank1<4500)
	{
		fptr=fopen("obccse20004500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=4500 && rank1<5500)
	{
		fptr=fopen("obccse45005500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=5500 && rank1<6500)
	{
		fptr=fopen("obccse55006500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6500 && rank1<7000)
	{
		fptr=fopen("obccse65007000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7000 && rank1<7750)
	{
		fptr=fopen("obccse70007750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7750 && rank1<8500)
	{
		fptr=fopen("obccse70008500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=8500 && rank1<9250)
	{
		fptr=fopen("obccse85009250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9250 && rank1<10000)
	{
		fptr=fopen("obccse925010000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10000 && rank1<11250)
	{
		fptr=fopen("obccse1000011250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=11250 && rank1<11650)
	{
		fptr=fopen("obccse1125011650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=11650 && rank1<12000)
	{
		fptr=fopen("obccse1165012000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12000 && rank1<13500)
	{
		fptr=fopen("obccse1200013500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=13500 && rank1<15500)
	{
		fptr=fopen("obccse1350015500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=15500 && rank1<16750)
	{
		fptr=fopen("obccse1550016750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=16750 && rank1<18500)
	{
		fptr=fopen("obccse1675018500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=18500 && rank1<20000)
	{
		fptr=fopen("obccse1850020000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for CSE\n");
	}
}
void obcece()
{
	if(rank1>0 && rank1<1750)
	{
		fptr=fopen("obcece01750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=1750 && rank1<2000)
	{
		fptr=fopen("obcece17502000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=2000 && rank1<3500)
	{
		fptr=fopen("obcece20003500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=3500 && rank1<4500)
	{
		fptr=fopen("obcece35004500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=4500 && rank1<6000)
	{
		fptr=fopen("obcece45006000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6000 && rank1<7600)
	{
		fptr=fopen("obcece60007600.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7600 && rank1<8000)
	{
		fptr=fopen("obcece76008000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=8000 && rank1<9000)
	{
		fptr=fopen("obcece80009000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9000 && rank1<10500)
	{
		fptr=fopen("obcece900010500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10500 && rank1<12500)
	{
		fptr=fopen("obcece1050012500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12500 && rank1<13250)
	{
		fptr=fopen("obcece1250013250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=13250 && rank1<15500)
	{
		fptr=fopen("obcece1325015500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=15500 && rank1<16500)
	{
		fptr=fopen("obcece1550016500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=16500 && rank1<17650)
	{
		fptr=fopen("obcece1650017650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=17650 && rank1<19000)
	{
		fptr=fopen("obcece1765019000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=19000 && rank1<20000)
	{
		fptr=fopen("obcece1900020000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for ECE\n");
	}
}
void obceee()
{
	if(rank1>0 && rank1<2450)
	{
		fptr=fopen("obceee01750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=2450 && rank1<2850)
	{
		fptr=fopen("obceee24502850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=2850 && rank1<5500)
	{
		fptr=fopen("obceee28505500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=5500 && rank1<6500)
	{
		fptr=fopen("obceee55006500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6500 && rank1<8500)
	{
		fptr=fopen("obceee65008500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=8500 && rank1<11000)
	{
		fptr=fopen("obceee850011000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=11000 && rank1<12750)
	{
		fptr=fopen("obceee1100012750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12750 && rank1<13750)
	{
		fptr=fopen("obceee1275013750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12750 && rank1<15250)
	{
		fptr=fopen("obceee1275015250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=15250 && rank1<15750)
	{
		fptr=fopen("obceee1525015750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=15750 && rank1<17250)
	{
		fptr=fopen("obceee1575017250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=17250 && rank1<19000)
	{
		fptr=fopen("obceee1725019000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=19000 && rank1<20550)
	{
		fptr=fopen("obceee1900020550.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for EEE\n");
	}
}
void obcit()
{
	if(rank1>0 && rank1<1650)
	{
		fptr=fopen("obcit01650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=1650 && rank1<2100)
	{
		fptr=fopen("obcit16502100.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=2100 && rank1<3750)
	{
		fptr=fopen("obcit21003750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=3750 && rank1<4750)
	{
		fptr=fopen("obcit37504750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=4750 && rank1<6000)
	{
		fptr=fopen("obcit47506000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6000 && rank1<8000)
	{
		fptr=fopen("obcit60008000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=8000 && rank1<9000)
	{
		fptr=fopen("obcit80009000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9000 && rank1<10500)
	{
		fptr=fopen("obcit900010500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10500 && rank1<12500)
	{
		fptr=fopen("obcit1050012500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12500 && rank1<13250)
	{
		fptr=fopen("obcit1250013250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=13250 && rank1<15500)
	{
		fptr=fopen("obcit1325015500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=15500 && rank1<16500)
	{
		fptr=fopen("obcit1550016500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=16500 && rank1<17650)
	{
		fptr=fopen("obcit1650017650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=17650 && rank1<19000)
	{
		fptr=fopen("obcit1765019000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=19000 && rank1<20000)
	{
		fptr=fopen("obcit1900020000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for IT\n");
	}
}
void obcmech()
{
	if(rank1>0 && rank1<1750)
	{
		fptr=fopen("obcmech01750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=1750 && rank1<2000)
	{
		fptr=fopen("obcmech17502000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=2000 && rank1<6000)
	{
		fptr=fopen("obcmech20006000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6000 && rank1<7500)
	{
		fptr=fopen("obcmech60007500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7500 && rank1<9750)
	{
		fptr=fopen("obcmech75009750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9750 && rank1<12250)
	{
		fptr=fopen("obcmech975012250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12250 && rank1<13000)
	{
		fptr=fopen("obcmech1225013000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=13000 && rank1<15000)
	{
		fptr=fopen("obcmech1300015000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=15000 && rank1<17500)
	{
		fptr=fopen("obcmech1500017500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=17500 && rank1<19500)
	{
		fptr=fopen("obcmech1750019500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=19500 && rank1<20500)
	{
		fptr=fopen("obcmech1950020500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for MECHCANICAL\n");
	}
}
void obccivil()
{
	if(rank1>0 && rank1<3500)
	{
		fptr=fopen("obccivil03500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=3500 && rank1<4000)
	{
		fptr=fopen("obccivil35004000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=4000 && rank1<5500)
	{
		fptr=fopen("obccivil40005500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=5500 && rank1<11500)
	{
		fptr=fopen("obccivil550011500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=11500 && rank1<18750)
	{
		fptr=fopen("obccivil1150018750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=18750 && rank1<19250)
	{
		fptr=fopen("obccivil1875019250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=19250 && rank1<19750)
	{
		fptr=fopen("obccivil1925019750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=19750 && rank1<21250)
	{
		fptr=fopen("obccivil1975021250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for CIVIL\n");
	}
}
void obcchemical()
{
	if(rank1>0 && rank1<7750)
	{
		fptr=fopen("obcchemical07750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=7750 && rank1<11750)
	{
		fptr=fopen("obcchemical775011750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=11750 && rank1<25000)
	{
		fptr=fopen("obcchemical1175025000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=25000 && rank1<33000)
	{
		fptr=fopen("obcchemical2500033000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=33000 && rank1<60000)
	{
		fptr=fopen("obcchemical3300060000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for CHEMICAL\n");
	}
}
void occse()
{
	if(rank1>0 && rank1<825)
	{
		fptr=fopen("occse0825.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=825 && rank1<1000)
	{
		fptr=fopen("occse8251000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=1000 && rank1<1500)
	{
		fptr=fopen("occse10001500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=1500 && rank1<2850)
	{
		fptr=fopen("occse15002850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=2850 && rank1<3850)
	{
		fptr=fopen("occse28503850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=3850 && rank1<4450)
	{
		fptr=fopen("occse38504450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=4450 && rank1<4850)
	{
		fptr=fopen("occse44504850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=4850 && rank1<5100)
	{
		fptr=fopen("occse48505100.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=5100 && rank1<5250)
	{
		fptr=fopen("occse51005250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=5250 && rank1<5450)
	{
		fptr=fopen("occse52505450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=5450 && rank1<5950)
	{
		fptr=fopen("occse54505950.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=5950 && rank1<6450)
	{
		fptr=fopen("occse59506450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6450 && rank1<6850)
	{
		fptr=fopen("occse64506850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6850 && rank1<7450)
	{
		fptr=fopen("occse68507450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7450 && rank1<7850)
	{
		fptr=fopen("occse74507850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7850 && rank1<9150)
	{
		fptr=fopen("occse78509150.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9150 && rank1<9450)
	{
		fptr=fopen("occse91509450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9450 && rank1<9650)
	{
		fptr=fopen("occse94509650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9650 && rank1<9850)
	{
		fptr=fopen("occse96509850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9850 && rank1<10850)
	{
		fptr=fopen("occse985010850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10850 && rank1<11850)
	{
		fptr=fopen("occse1085011850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=11850 && rank1<12550)
	{
		fptr=fopen("occse1185012550.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12550 && rank1<12950)
	{
		fptr=fopen("occse1255012950.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12950 && rank1<13350)
	{
		fptr=fopen("occse1295013350.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=13350 && rank1<13850)
	{
		fptr=fopen("occse1335013850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=13850 && rank1<14850)
	{
		fptr=fopen("occse1385014850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=14850 && rank1<15450)
	{
		fptr=fopen("occse1485015450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=15450 && rank1<16850)
	{
		fptr=fopen("occse1545016850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=16850 && rank1<20000)
	{
		fptr=fopen("occse1685020000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for CSE\n");
	}
}
void ocece()
{
	if(rank1>0 && rank1<1250)
	{
		fptr=fopen("ocece01250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=1250 && rank1<1500)
	{
		fptr=fopen("ocece12501500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=1500 && rank1<2500)
	{
		fptr=fopen("ocece15002500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=2500 && rank1<3850)
	{
		fptr=fopen("ocece25003850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=3850 && rank1<5450)
	{
		fptr=fopen("ocece38505450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=5450 && rank1<6250)
	{
		fptr=fopen("ocece54506250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6250 && rank1<6850)
	{
		fptr=fopen("ocece62506850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6850 && rank1<7150)
	{
		fptr=fopen("ocece68507150.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7150 && rank1<7350)
	{
		fptr=fopen("ocece71507350.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7350 && rank1<7550)
	{
		fptr=fopen("ocece73507550.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7550 && rank1<7750)
	{
		fptr=fopen("ocece75507750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7750 && rank1<8000)
	{
		fptr=fopen("ocece77508000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=8000 && rank1<9000)
	{
		fptr=fopen("ocece80009000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9000 && rank1<10000)
	{
		fptr=fopen("ocece900010000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10000 && rank1<10350)
	{
		fptr=fopen("ocece1000010350.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10350 && rank1<10650)
	{
		fptr=fopen("ocece1035010650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10650 && rank1<11000)
	{
		fptr=fopen("ocece1065011000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=11000 && rank1<12500)
	{
		fptr=fopen("ocece1100012500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12500 && rank1<14650)
	{
		fptr=fopen("ocece1250014650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=14650 && rank1<17650)
	{
		fptr=fopen("ocece1465017650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=17650 && rank1<19650)
	{
		fptr=fopen("ocece1765019650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for ECE\n");
	}
}
void oceee()
{
	if(rank1>0 && rank1<1250)
	{
		fptr=fopen("oceee01250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=1250 && rank1<1850)
	{
		fptr=fopen("oceee12501850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=1850 && rank1<3450)
	{
		fptr=fopen("oceee18503450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=3450 && rank1<4250)
	{
		fptr=fopen("oceee34504250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=4250 && rank1<6750)
	{
		fptr=fopen("oceee42506750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6750 && rank1<7350)
	{
		fptr=fopen("oceee67507350.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7350 && rank1<8000)
	{
		fptr=fopen("oceee73508000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=8000 && rank1<8750)
	{
		fptr=fopen("oceee80008750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=8750 && rank1<9350)
	{
		fptr=fopen("oceee87509350.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9350 && rank1<9650)
	{
		fptr=fopen("oceee93509650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9650 && rank1<10000)
	{
		fptr=fopen("oceee965010000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>10000 && rank1<10400)
	{
		fptr=fopen("oceee1000010400.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>10400 && rank1<11400)
	{
		fptr=fopen("oceee1040011400.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>11400 && rank1<12000)
	{
		fptr=fopen("oceee1140012000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>12000 && rank1<14000)
	{
		fptr=fopen("oceee1200014000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>14000 && rank1<15500)
	{
		fptr=fopen("oceee1400015500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>15500 && rank1<17500)
	{
		fptr=fopen("oceee1550017500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>17500 && rank1<19500)
	{
		fptr=fopen("oceee1750019500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for EEE\n");
	}
}
void ocit()
{
	if(rank1>0 && rank1<1550)
	{
		fptr=fopen("ocit01550.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=1550 && rank1<2000)
	{
		fptr=fopen("ocit15502000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=2000 && rank1<2850)
	{
		fptr=fopen("ocit20002850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=2850 && rank1<3850)
	{
		fptr=fopen("ocit28503850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=3850 && rank1<5450)
	{
		fptr=fopen("ocit38505450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=5450 && rank1<6250)
	{
		fptr=fopen("ocit54506250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6250 && rank1<7150)
	{
		fptr=fopen("ocit62507150.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7150 && rank1<8000)
	{
		fptr=fopen("ocit71508000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=8000 && rank1<9000)
	{
		fptr=fopen("ocit80009000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9000 && rank1<10000)
	{
		fptr=fopen("ocit900010000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10000 && rank1<11000)
	{
		fptr=fopen("ocit1000011000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=11000 && rank1<12250)
	{
		fptr=fopen("ocit1100012250.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12250 && rank1<15850)
	{
		fptr=fopen("ocit1225015850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=15850 && rank1<16850)
	{
		fptr=fopen("ocit1585016850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=16850 && rank1<17550)
	{
		fptr=fopen("ocit1685017550.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=17550 && rank1<19000)
	{
		fptr=fopen("ocit1755019000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=19000 && rank1<20000)
	{
		fptr=fopen("ocit1900020000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for IT\n");
	}
}
void ocmech()
{
	if(rank1>0 && rank1<1650)
	{
		fptr=fopen("ocmech01650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=1650 && rank1<2000)
	{
		fptr=fopen("ocmech16502000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=2000 && rank1<6000)
	{
		fptr=fopen("ocmech20006000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6000 && rank1<7000)
	{
		fptr=fopen("ocmech60007000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=7000 && rank1<10000)
	{
		fptr=fopen("ocmech700010000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10000 && rank1<12000)
	{
		fptr=fopen("ocmech1000012000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=12000 && rank1<15000)
	{
		fptr=fopen("ocmech1200015000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=15000 && rank1<16500)
	{
		fptr=fopen("ocmech1500016500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=16500 && rank1<18500)
	{
		fptr=fopen("ocmech1650018500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=18500 && rank1<19750)
	{
		fptr=fopen("ocmech1850019750.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for MECHCANICAL\n");
	}
}
void occivil()
{
	if(rank1>0 && rank1<2650)
	{
		fptr=fopen("occivil02650.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=2650 && rank1<3000)
	{
		fptr=fopen("occivil26503000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=3000 && rank1<4500)
	{
		fptr=fopen("occivl30004500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=4500 && rank1<6500)
	{
		fptr=fopen("occivl45006500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=6500 && rank1<8500)
	{
		fptr=fopen("occivl65008500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=8500 && rank1<9500)
	{
		fptr=fopen("occivl85009500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=9500 && rank1<10350)
	{
		fptr=fopen("occivl950010350.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10350 && rank1<10850)
	{
		fptr=fopen("occivl1035010850.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=10850 && rank1<14450)
	{
		fptr=fopen("occivl1085014450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=14450 && rank1<17450)
	{
		fptr=fopen("occivl1445017450.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=17450 && rank1<20000)
	{
		fptr=fopen("occivl1745020000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for CIVIL\n");
	}
}
void occhemical()
{
	if(rank1>0 && rank1<6000)
	{
		fptr=fopen("occhemical06000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
    		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 
	}
	else if(rank1>=6000 && rank1<8000)
	{
		fptr=fopen("occhemical60008000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=8000 && rank1<14000)
	{
		fptr=fopen("occhemical800014000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=14000 && rank1<25000)
	{
		fptr=fopen("occhemical1400025000.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else if(rank1>=25000 && rank1<26500)
	{
		fptr=fopen("occhemical2500026500.txt","r");
		if (fptr == NULL) 
    		{ 
        		printf("Cannot open file \n"); 
        		exit(0); 
       		} 
		// Read contents from file 
    		c = fgetc(fptr); 
  		while (c != EOF) 
    		{ 
        		printf ("%c", c); 
        		c = fgetc(fptr); 
    		} 
		fclose(fptr); 		
	}
	else
	{
		printf("\nYou have scope for CHEMICAL\n");
	}
}
