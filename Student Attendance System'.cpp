#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
char csuser[25]={"csadmin"};
	char euser[25]={"eadmin"};
	char cuser[25]={"cadmin"};
	char pass[25]={"12345"};
struct ComputerScience{
	char name[25];
	int rollno;
	char attend;
}cs[30];
struct Electronics{
	char name[25];
	int rollno;
	char attend;
}e[30];
struct Commerce{
	char name[25];
	int rollno;
	char attend;
}c[30];
void password(char* pass, int max)
			{
				char ch;
				int i=0;
				while(1)
				{
					ch=getch();
						if (ch==13)// Ascii for ENTER
						{
							pass[i]='\0';
							break;
						}
					else if(ch==8)//ASCII FOR BKSP
					{
						if(i>0)
						{
							i--;
							printf("\b \b");
						}
					}
					else if(ch==9||ch==32)//ASCII TAB AND SPACE
					{
						continue;
					}
					else
					{
						pass[i]=ch;
						i++;
						printf("*");
					}
					
				}
				printf("\n");
			}
void CSlogin();
void Elogin();
void Clogin();			
int main()
{
	
	printf("Student Attendence System\n\n");
	
	int ch;
	do{
		printf("Press 1 for Computer Science\n\n");
		printf("Press 2 for Electronics\n\n");
		printf("Press 3 for Commerce\n\n");
		printf("Press 4 for EXIT\n\n");
		printf("Enter your Choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				CSlogin();
				break;
			case 2:
				Elogin();
				break;
			case 3:
				Clogin();
				break;
			case 4:
			printf("Thank You Sir!!!!\n\n\nHave a Nice Day!!!");
			break;						
		}
		}while(ch!=4);
}
void CSlogin()
{
	char u[25];
				char p[25];
				system("cls");
				printf("Computer Science\n\n");
				printf("Enter User Name:\n");
				scanf("%s", &u);
				printf("Enter Password:\n");
				password(p,25);
	if((strcmp(csuser,u)==0)&&(strcmp(pass,p)==0))
				{
					system("cls");
					int m,i,n,dd,mm,yy;
					printf("LOGIN!!!\n\n");
					printf("Enter the total strength of class:\n");
 					scanf("%d",&n);
					do
					{
						system("cls");
						printf("==========Main Menu of Attendence System==========\n\n");
 		printf(" * Press 1 for Input Names of Students:\n");
 		printf(" * Press 2 for Taking Attendence of Students:\n");
 		printf(" * Press 3 for View Attendence: \n");
 		printf(" * Press 4 for Exit:\n");;
 						printf("Enter the choice:\n");
 		scanf("%d",&m);
 		switch(m)
 		{
 		case 1:
 			system("cls");
 			for(i=0;i<n;i++)
 			{
 				printf("Enter %d Student's Name:",i+1);
 				scanf("%s",&cs[i].name);
 				printf("Enter its Roll no:");
 				scanf("%d",&cs[i].rollno);
 			}
 			system("cls");
			for(i=0;i<n;i++)
 			{
 				printf("\nName: %s \nRoll no: %d \n",cs[i].name,cs[i].rollno);
 			}
 			
 			break;
 		case 2:
 			system("cls");
 				printf("\n\t\t\tTaking Attendence");
 				printf("\nDate(DD/MM/YY): ");
 				scanf("%d %d %d",&dd,&mm,&yy);
 				printf("\t\tPress Enter for Ready!!");
 				getch();
 				for(i=0;i<n;i++)
 				{
 					//fflush(stdin);
 					printf("\nName: %s \nRoll no: %d \n",cs[i].name,cs[i].rollno);
 					printf("\n\nEnter Attendence Status for %s:",cs[i].name);
 					scanf("%s",&cs[i].attend);
 					//fflush(stdin);

 				}
 				printf("\n\nAttendence taken on %d-%d-%d\n\n",dd,mm,yy);
				 for(i=0;i<n;i++)
 				{
 					printf("\nName: %s \nRoll no: %d \nAttendence: %c\n ",cs[i].name,cs[i].rollno,cs[i].attend);
 				}
 				getch();
 				break;
 		case 3:
 			system("cls");
 			
 			{
 				
 				for(i=0;i<n;i++)
 				{
 					if(cs[i].attend=='A'||cs[i].attend=='a'||cs[i].attend=='P'||cs[i].attend=='p')
 					{
 						printf("\n\nAttendence of Date %d-%d-%d",dd,mm,yy);
 						printf("\nName: %s \nRoll no: %d \nAttendence: %c\n ",cs[i].name,cs[i].rollno,cs[i].attend);
					}
					
 					else
			 		{		
			 			printf("\n\nFirst Take Attendence!\n\n");
			 			break;
			 		}
 				}
 				
 					getch();
 			}
 		
		 		break;
		case 4:
			system("cls");
			
			break;		 		
	 	}
	 }while(m!=4);
				}
				else
				{
					printf("Login Failed!!!\n\n");
				}
}
void Elogin()
{
	char eu[25];
				char ep[25];
				system("cls");
				printf("Electronics\n\n");
				printf("Enter User Name:\n");
				scanf("%s", &eu);
				printf("Enter Password:\n");
				password(ep,25);
				if((strcmp(euser,eu)==0)&&(strcmp(ep,pass)==0))
				{
					system("cls");
					int m,i,n,dd,mm,yy;
					printf("LOGIN!!!\n\n");
					printf("Enter the total strength of class:\n");
 					scanf("%d",&n);
					do
					{
						system("cls");
						printf("==========Main Menu of Attendence System==========\n\n");
 		printf(" * Press 1 for Input Names of Students:\n");
 		printf(" * Press 2 for Taking Attendence of Students:\n");
 		printf(" * Press 3 for View Attendence: \n");
 		printf(" * Press 4 for Exit:\n");
 						printf("Enter the choice:\n");
 		scanf("%d",&m);
 		switch(m)
 		{
 		case 1:
 			system("cls");
 			for(i=0;i<n;i++)
 			{
 				printf("Enter %d Student's Name:",i+1);
 				scanf("%s",&e[i].name);
 				printf("Enter its Roll no:");
 				scanf("%d",&e[i].rollno);
 			}
 			system("cls");
			for(i=0;i<n;i++)
 			{
 				printf("\nName: %s \nRoll no: %d \n",e[i].name,e[i].rollno);
 			}
 			
 			break;
 		case 2:
 			system("cls");
 				printf("\n\t\t\tTaking Attendence");
 				printf("\nDate(DD/MM/YY): ");
 				scanf("%d %d %d",&dd,&mm,&yy);
 				printf("\t\tPress Enter for Ready!!");
 				getch();
 				for(i=0;i<n;i++)
 				{
 					//fflush(stdin);
 					printf("\nName: %s \nRoll no: %d \n",e[i].name,e[i].rollno);
 					printf("\n\nEnter Attendence Status for %s:",e[i].name);
 					scanf("%s",&e[i].attend);
 					//fflush(stdin);

 				}
 				printf("\n\nAttendence taken on %d-%d-%d\n\n",dd,mm,yy);
				 for(i=0;i<n;i++)
 				{
 					printf("\nName: %s \nRoll no: %d \nAttendence: %c\n ",e[i].name,e[i].rollno,e[i].attend);
 				}
 				getch();
 				break;
 		case 3:
 			system("cls");
 			
 			{
 				
 				for(i=0;i<n;i++)
 				{
 					if(e[i].attend=='A'||e[i].attend=='a'||e[i].attend=='P'||e[i].attend=='p')
 					{
 						printf("\n\nAttendence of Date %d-%d-%d",dd,mm,yy);
 						printf("\nName: %s \nRoll no: %d \nAttendence: %c\n ",e[i].name,e[i].rollno,e[i].attend);
					}
 					else
			 		{		
			 			printf("\n\nFirst Take Attendence!\n\n");
			 			break;
			 		}
 				}
 					getch();
 			}
 		
		 		break;
		case 4:
			system("cls");
			break;		 		
	 	}
	 }while(m!=4);
				}
				else
				{
					printf("Login Failed!!!\n\n");
				}
}
void Clogin()
{
	char cu[25];
				char cp[25];
				system("cls");
				printf("Commerce\n\n");
				printf("Enter User Name:\n");
				scanf("%s", &cu);
				printf("Enter Password:\n");
				password(cp,25);
				if((strcmp(cuser,cu)==0)&&(strcmp(pass,cp)==0))
				{
					system("cls");
					int m,i,n,dd,mm,yy;
					printf("LOGIN!!!\n\n");
					printf("Enter the total strength of class:\n");
 					scanf("%d",&n);
					do
					{
						system("cls");
						printf("==========Main Menu of Attendence System==========\n\n");
 		printf(" * Press 1 for Input Names of Students:\n");
 		printf(" * Press 2 for Taking Attendence of Students:\n");
 		printf(" * Press 3 for View Attendence: \n");
 		printf(" * Press 4 for Exit:\n");
 						printf("Enter the choice:\n");
 		scanf("%d",&m);
 		switch(m)
 		{
 		case 1:
 			system("cls");
 			for(i=0;i<n;i++)
 			{
 				printf("Enter %d Student's Name:",i+1);
 				scanf("%s",&c[i].name);
 				printf("Enter its Roll no:");
 				scanf("%d",&c[i].rollno);
 			}
 			system("cls");
			for(i=0;i<n;i++)
 			{
 				printf("\nName: %s \nRoll no: %d \n",c[i].name,c[i].rollno);
 			}
 			
 			break;
 		case 2:
 			system("cls");
 				printf("\n\t\t\tTaking Attendence");
 				printf("\nDate(DD/MM/YY): ");
 				scanf("%d/%d/%d",&dd,&mm,&yy);
 				printf("\t\tPress Enter for Ready!!");
 				getch();
 				for(i=0;i<n;i++)
 				{
 					//fflush(stdin);
 					printf("\nName: %s \nRoll no: %d \n",c[i].name,c[i].rollno);
 					printf("\n\nEnter Attendence Status for %s:",c[i].name);
 					scanf("%s",&c[i].attend);
 					//fflush(stdin);

 				}
 				printf("\n\nAttendence taken on %d-%d-%d\n\n",dd,mm,yy);
				 for(i=0;i<n;i++)
 				{
 					printf("\nName: %s \nRoll no: %d \nAttendence: %c\n ",c[i].name,c[i].rollno,c[i].attend);
 				}
 				getch();
 				break;
 		case 3:
 			system("cls");
 			
 			{
 				
 				for(i=0;i<n;i++)
 				{
 					if(c[i].attend=='A'||c[i].attend=='a'||c[i].attend=='P'||c[i].attend=='p')
 					{
 						printf("\n\nAttendence of Date %d-%d-%d",dd,mm,yy);
 						printf("\nName: %s \nRoll no: %d \nAttendence: %c\n ",c[i].name,c[i].rollno,c[i].attend);
					}
 					else
			 		{		
			 			printf("\n\nFirst Take Attendence!\n\n");
			 			break;
			 		}
 				}
 					getch();
 			}
 		
		 		break;
		case 4:
			system("cls");
			//printf("Thank You Sir!!!!\n\n\nHave a Nice Day!!!");
			break;		 		
	 	}
	 }while(m!=4);
				}
				else
				{
					printf("Login Failed!!!\n\n");
				}
}
