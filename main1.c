#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int rank1;
char name[25],filename[30],rank[20],category[5],branch[10];

void main()
{
	int w=1,f=1,c,e;
	while(w)
	{
		printf("\nEnter your Name :");
		scanf("%s",name);
		printf("\nEnter your category\t1.st\t2.sc\t3.bc\t4.oc\t5.exit :");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				strcpy(category,"st");
				printf("\nEnter your rank:");
				scanf("%d",&rank1);
				printf("\nEnter your preferd branch\t1.CSE\t2.ECE\t3.EEE\t4.IT\t5.Mech\t6.Civil\t7.Chemical\t8.exit:");
				scanf("%d",&e);
				switch(e)
				{
					case 1:
						strcpy(branch,"cse");
						printf("Name :%s\tRank :%s\tCategory :ST\n",name,rank);
						if(rank1>0 && rank1<7650)
						{
							fopen("stcse07650.txt","r");
						}
						else if(rank1>=7650 && rank1<=9500)
						{
							strcpy(rank,"76509500");
							strcat(filename,rank);
							fopen("filename.txt","r");		
						}
						else if(rank1>9500 && rank1<9950)
						{
							strcpy(rank,"95009950");
							strcat(filename,rank);
							fopen("filename.txt","r");
						}
						else if(rank1>=9950 && rank1<17500)
						{
							strcpy(rank,"995017500");
							strcat(filename,rank);
							fopen("filename.txt","r");
						}
						else if(rank1>=17500 && rank1<18300)
						{
							strcpy(rank,"1750018300");
							strcat(filename,rank);
							fopen("filename.txt","r");
						}
						else if(rank1>=18300 && rank1<20000)
						{

						}
						break;
					case 2:
						strcpy(branch,"ece");
						strcat(filename,category);
						strcat(filename,branch);
						printf("Name :%s\tRank :%s\tCategory :ST\n",name,rank);
						fopen("filename.txt","r");
						break;
					case 3:
						strcpy(branch,"eee");
						strcat(filename,category);
						strcat(filename,branch);
						printf("Name :%s\tRank :%s\tCategory :ST\n",name,rank);
						fopen("filename.txt","r");		
						break;
					case 4:
						strcpy(branch,"it");
						strcat(filename,category);
						strcat(filename,branch);
						printf("Name :%s\tRank :%s\tCategory :ST\n",name,rank);
						fopen("filename.txt","r");
						break;
					case 5:
						strcpy(branch,"mech");
						strcat(filename,category);
						strcat(filename,branch);
						printf("Name :%s\tRank :%s\tCategory :ST\n",name,rank);
						fopen("filename.txt","r");	
						break;
					case 6:
						strcpy(branch,"civil");
						strcat(filename,category);
						strcat(filename,branch);
						printf("Name :%s\tRank :%s\tCategory :ST\n",name,rank);
						fopen("filename.txt","r");
						break;
					case 7:
						strcpy(branch,"chem");
						strcat(filename,category);
						strcat(filename,branch);
						printf("Name :%s\tRank :%s\tCategory :ST\n",name,rank);
						fopen("filename.txt","r");
						break;
					case 8:
						w=0;break;
					default:
						printf("enter the above given characters only \n");break;
				}
				break;
				case 2:
					strcpy(category,"sc");
					printf("\nEnter your rank:");
					scanf("%d",&rank1);
					printf("\nEnter your preferd branch\t1.CSE\t2.ECE\t3.EEE\t4.it\t5.Mech\t6.Civil\t7.Chemical\t8.exit:");
					scanf("%d",&e);
					switch(e)
					{
						case 1:
							strcpy(branch,"cse");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :SC\n",name,rank);
							fopen("filename.txt","r");		
							break;
						case 2:
							strcpy(branch,"ece");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :SC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 3:
							strcpy(branch,"eee");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :SC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 4:
							strcpy(branch,"it");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :SC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 5:
							strcpy(branch,"mech");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :SC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 6:
							strcpy(branch,"civil");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :SC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 7:
							strcpy(branch,"chem");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :SC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 8:
							w=0;break;
						default:
							printf("enter the above given characters only \n");break;	
					}
					break;
				case 3:
					strcpy(category,"bc");
					printf("\nEnter your rank:");
					scanf("%d",&rank1);
					printf("\nEnter your preferd branch\t1.CSE\t2.ECE\t3.EEE\t4.it\t5.Mech\t5.Civil\t6.Chemical\t7.exit:");
					scanf("%d",&e);
					switch(e)
					{
						case 1:
							strcpy(branch,"cse");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :BC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 2:
							strcpy(branch,"ece");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :BC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 3:
							strcpy(branch,"eee");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :BC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 4:
							strcpy(branch,"it");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :BC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 5:
							strcpy(branch,"mech");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :BC\n",name,rank);
							fopen("filename.txt","r");					
							break;
						case 6:
							strcpy(branch,"civil");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :BC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 7:
							strcpy(branch,"chem");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :BC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 8:
							w=0;break;
						default:
							printf("enter the above given characters only \n");break;
					}
					break;
				case 4:
					strcpy(category,"oc");
					printf("\nEnter your rank:");
					scanf("%d",&rank1);
					printf("\nEnter your preferd branch\t1.CSE\t2.ECE\t3.EEE\t4.it\t5.Mech\t6.Civil\t7.Chemical\t8.exit:");
					scanf("%d",&e);
					switch(e)
					{
						case 1:
							strcpy(branch,"cse");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :OC\n",name,rank);
							fopen("filename.txt","r");		
							break;
						case 2:
							strcpy(branch,"ece");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :OC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 3:
							strcpy(branch,"eee");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :OC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 4:
							strcpy(branch,"it");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :OC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 5:
							strcpy(branch,"mech");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :OC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 6:
							strcpy(branch,"civil");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :OC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 7:
							strcpy(branch,"chem");
							strcat(filename,category);
							strcat(filename,branch);
							printf("Name :%s\tRank :%s\tCategory :OC\n",name,rank);
							fopen("filename.txt","r");
							break;
						case 8:
							w=0;break;
						default:
							printf("enter the above given characters only \n");break;
					}
					break;
			        case 5:
					w=0;break;
				default:
					printf("enter the above given characters only \n");break;		

		}
	}
}

