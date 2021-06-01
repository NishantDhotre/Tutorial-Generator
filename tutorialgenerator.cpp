#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>


int main()
{
	int a,b,i,j,k,ch,c,maxmarks,pro,chp,marks;
	FILE*f;
	FILE*t;
	FILE*T;
	FILE*E;
	char newdata[100];
	char tenmquestions[200][1000];
	char twomquestions[200][1000];
	char fivemquestions[200][1000];
	int used5mq[200];
	int used2mq[200];
	int used10mq[200];
	char uid[30];
	char password[30];
	
	printf("\n*Welcome To E-Tutorial Generator System*\n");
	printf("\nUSER ID:");
	scanf("%s",&uid);
	printf("PASSWORD:");
	scanf("%s",&password);
	if((strcmp(uid,"RVDSIR")!=0)&&(strcmp(password,"rvdcmpnb3")!=0))
	printf("\nAccess Denied!!\tInvalid login credentials!!");
	else
	{
		for(i=0;i<200;i++)
	    used5mq[i]==0;
	    for(j=0;j<200;j++)
	    used2mq[j]==0;
	    for(k=0;k<200;k++)
	    used10mq[k]==0;
	    /*printf("\n1:Add Question\t2:Skip and proceed");
	    printf("\nEnter Choice:");
	    scanf("%d",&pro);
	    if(pro==1)
	    {
	    	printf("\nChoose chapter in which you want to add a question:");
	    	printf("1:STACK\t2:QUEUE\t3:LINKEDLIST\t4:TREE");
	    	scanf("%d",&chp);
	    	printf("\nQuestion of how much marks is to be added?");
	    	printf("1:TWO_MARKS\t2:FIVE_MARKS\t3:TEN_MARKS");
	    	scanf("%d",&marks);
	    	switch(chp)
	    	{
	    		case 1:switch(marks)
	    		{
	    			case 1:printf("\nEnter new question:");
	    			gets(newdata);
					E=fopen("D:/Files for C/stack2mks.txt","a");
	    			fprintf(E,"%s",newdata);
	    			fclose(E);
	       		
				}
			}
		} 
	    else*/
	    {
		printf("\n*Welcome Sir!*\n");
		while(1)
		{
			srand(time(0));
			printf("\nCHAPTERS:\n");
			printf("1:STACK\t2:QUEUE\t3:LINKEDLIST\n4:TREE\t5:EXIT\n");
			printf("\nEnter Choice:");
			scanf("%d",&ch);
			if(ch==5)
			break;
			printf("\nEnter the maximum marks for your Tutorial:");
			printf("1:15\t2:20\t3:25\t4:40");
		    printf("\nEnter Choice:");
		    scanf("%d",&maxmarks);
			printf("\n");	
			switch(ch)
			{
				case 1:switch(maxmarks)
				{
					case 1:f=fopen("D:/Files for C/stack2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/stack5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<5;i++)
				{
					j=rand()%12;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<1;i++)
				{
					j=rand()%18;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				break;
				
				case 2:f=fopen("D:/Files for C/q2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/q5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<5;i++)
				{
					j=rand()%12;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<2;i++)
				{
					j=rand()%18;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				break;
				
				case 3:f=fopen("D:/Files for C/q2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/q5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<5;i++)
				{
					j=rand()%12;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<3;i++)
				{
					j=rand()%18;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				break;
				
				case 4:f=fopen("D:/Files for C/q2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/q5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<10;i++)
				{
					j=rand()%12;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<4;i++)
				{
					j=rand()%18;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				break;
		}break;
				
				
				
				
				
				case 2:switch(maxmarks)
				{
					case 1:f=fopen("D:/Files for C/q2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/q5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				T=fopen("D:/Files for C/q10mks.txt","r");
				while(!feof(T))
				{
					for(c=0;c<200;c++)
					{
						fgets(tenmquestions[c],1000,T);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<5;i++)
				{
					j=rand()%17;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<1;i++)
				{
					j=rand()%25;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				break;
				
				case 2:f=fopen("D:/Files for C/q2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/q5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				T=fopen("D:/Files for C/q10mks.txt","r");
				while(!feof(T))
				{
					for(c=0;c<200;c++)
					{
						fgets(tenmquestions[c],1000,T);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<5;i++)
				{
					j=rand()%17;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<2;i++)
				{
					j=rand()%25;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				break;
				
				case 3:f=fopen("D:/Files for C/q2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/q5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				T=fopen("D:/Files for C/q10mks.txt","r");
				while(!feof(T))
				{
					for(c=0;c<200;c++)
					{
						fgets(tenmquestions[c],1000,T);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<5;i++)
				{
					j=rand()%17;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<3;i++)
				{
					j=rand()%25;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				break;
				
				case 4:f=fopen("D:/Files for C/q2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/q5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				T=fopen("D:/Files for C/q10mks.txt","r");
				while(!feof(T))
				{
					for(c=0;c<200;c++)
					{
						fgets(tenmquestions[c],1000,T);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<5;i++)
				{
					j=rand()%17;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<4;i++)
				{
					j=rand()%25;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<1;i++)
				{
					j=rand()%6;
					if(used10mq[j]==0)
					{
						printf("%s",tenmquestions[j]);
						printf("\n");
						used10mq[j]==1;
						
					}
				}
				break;
		}break;
			
			case 3:switch(maxmarks)
				{
					case 1:f=fopen("D:/Files for C/LL2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/LL5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<5;i++)
				{
					j=rand()%27;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<1;i++)
				{
					j=rand()%10;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				break;
				
				case 2:f=fopen("D:/Files for C/LL2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/LL5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<5;i++)
				{
					j=rand()%27;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<2;i++)
				{
					j=rand()%10;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				break;
				
				case 3:f=fopen("D:/Files for C/LL2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/LL5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<5;i++)
				{
					j=rand()%27;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<3;i++)
				{
					j=rand()%10;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				break;
				
				case 4:f=fopen("D:/Files for C/LL2mks.txt","r");
				while(!feof(f))
				{
					for(a=0;a<200;a++)
					{
						fgets(twomquestions[a],1000,f);
					}
				}
				
				
				t=fopen("D:/Files for C/LL5mks.txt","r");
				while(!feof(t))
				{
					for(b=0;b<200;b++)
					{
						fgets(fivemquestions[b],1000,t);
					}
				}
				
				T=fopen("D:/Files for C/LL10mks.txt","r");
				while(!feof(T))
				{
					for(c=0;c<200;c++)
					{
						fgets(tenmquestions[c],1000,T);
					}
				}
				
				i=0;
				j=0;
				srand(time(0));
				for(i=0;i<5;i++)
				{
					j=rand()%27;
					if(used2mq[j]==0)
					{
						printf("%s",twomquestions[j]);
						printf("\n");
						used2mq[j]==1;
						
					}
				}
				
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<4;i++)
				{
					j=rand()%10;
					if(used5mq[j]==0)
					{
						printf("%s",fivemquestions[j]);
						printf("\n");
						used5mq[j]==1;
						
					}
				}
				j=0;
				i=0;
				srand(time(0));
				for(i=0;i<1;i++)
				{
					j=rand()%8;
					if(used10mq[j]==0)
					{
						printf("%s",tenmquestions[j]);
						printf("\n");
						used10mq[j]==1;
						
					}
				}
				break;
			}break;
			
				
						
			}
		}
	}
}
}

