#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void intro();
int mainpage();
void wrong();
int takebook();
int returnbook();
int viewbook();
int addbook();
int removebook();
int search();
int help();
int main()	
{
	system("COLOR 09");
	intro();
	FILE *fp;
	fp=fopen("books.txt","a+");
	fclose(fp);
	main:
	system("COLOR 0B");
	system("cls");
	int choice;
	int opt;
	choice=mainpage();
	system("cls");
	switch(choice)
	{
		case 1:
		{	
		    opt=takebook();
			if(opt==1)
			{
			goto main;
		    }
			else
			{
			goto end;
		    }
		}
		
		case 2:
		{
			opt=returnbook();
			if(opt==1)
			{
			goto main;
		    }
			else
			{
			goto end;
		    }
		}
		
		case 3:
		{
			opt=viewbook();
			if(opt==1)
			{
			goto main;
		    }
			else
			{
			goto end;
		    }
		}
		
		case 4:
			opt=addbook();
			if(opt==1)
			{
			goto main;
		    }
			else
			{
			goto end;
		    }
			
		case 5:
		{
			opt=removebook();
			if(opt==1)
			{
			goto main;
		    }
			else
			{
			goto end;
		    }
		}
		
		case 6:
		{
			opt=search();
			if(opt==1)
			{
			goto main;
		    }
			else
			{
			goto end;
		    }
		}
		case 7:
			goto end;
		default:
		 wrong();
		 goto main;
	}
	getch();
	end:
    return 0;    

	
}
void intro()
{
	//for starting page of program.
    printf("#######################################################################################################################\n");
    printf("\t\t\t\t\t       LIBRARY MANAGEMENT SYSTEM\n");
    printf("______________________________________________________________________________________________________________________\n");
    printf("**********************************************************************************************************************\n");	
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t _____________________________________________\n");
    printf("\t| \t \t PROJECT DETAIL               |\n");
    printf("\t|---------------------------------------------|\t\t\t ______________________________________\n");
    printf("\t|                                             |\t\t\t|             TEAM    MEMBERS          |\n ");
    printf("\t|                                             |\t\t\t|--------------------------------------|\n ");
    printf("\t|                                             |\t\t\t|                                      |\n ");
    printf("\t|                                             |\t\t\t|                                      |\n ");
    printf("\t|                                             |\t\t\t|                                      |\n ");
    printf("\t|                                             |\t\t\t|                                      |\n ");
    printf("\t|                                             |\t\t\t|                                      |\n ");
    printf("\t|                                             |\t\t\t|                                      |\n ");
    printf("\t|                                             |\t\t\t|                                      |\n ");
    printf("\t|                                             |\t\t\t|                                      |\n ");
    printf("\t|                                             |\t\t\t|                                      |\n ");
    printf("\t|                                             |\t\t\t|                                      |\n ");
    printf("\t|                                             |\t\t\t|                                      |\n ");
    printf("\t***********************************************\t\t\t****************************************\n");
    printf("                                                           ---------------------------------\n");
	printf("                                                              press any key to continue... \n");
	printf("                                                           ---------------------------------");
	getch();
}


int mainpage()
{
	//ui of main menu
	printf("#######################################################################################################################\n");
    printf("\t\t\t\t\t       LIBRARY MANAGEMENT SYSTEM\n");
    printf("_______________________________________________________________________________________________________________________\n");
    printf("***********************************************************************************************************************\n");	
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\t\t\t\t\t\t\t MAIN  MENU\n");
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                                                                                                     |\n");
    printf("|            1. Take Book                                                                                             |\n");
    printf("|                                                                                                                     |\n");
	printf("|            2. Submit Book                                                                                           |\n");
	printf("|                                                                                                                     |\n");
	printf("|            3. View Books                                                                                            |\n");
	printf("|                                                                                                                     |\n");
	printf("|            4. Add Book                                                                                              |\n");
	printf("|                                                                                                                     |\n");
	printf("|            5. Remove Book                                                                                           |\n");
	printf("|                                                                                                                     |\n");
	printf("|            6. Search                                                                                                |\n");
	printf("|                                                                                                                     |\n");
	printf("|            7. Exit                                                                                                  |\n");
	printf("|                                                                                                                     |\n");
	printf("-----------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t  Enter Your Choice =>");
	int mchoice;
	scanf("%d",&mchoice);
	return (mchoice);	  
   }
   
   
void wrong()
{
	//for any wrong input in main menu
	system("COLOR 0C");
	printf("\n\n-----------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t Wrong Input\n\n");
	printf("\t\t\t press any key to continue..\n");
	printf("________________________________________________________________________________________________________________________\n");
	getch();
}   


struct book
{
	char book_name[50];
	int book_id;
    char author[50];
    char avilability[30]="true";
    char book_taken_by[30]="undefined"; 
}books,tempr;


int addbook()
{ 
    FILE *fp;
    int option;
    system("COLOR 02");
    system("cls");   
    fp=fopen("books.txt","a");
    printf("#######################################################################################################################\n");
    printf("\t\t\t\t\t       LIBRARY MANAGEMENT SYSTEM\n");
    printf("_______________________________________________________________________________________________________________________\n");
    printf("***********************************************************************************************************************\n");	
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\t\t\t\t\t\t\t ADD  BOOK\n");
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\tenter the following book details to add book in the system\n");
	option=0;
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("|                                                                                                                     |\n");
    printf("|            1.BOOK Name:   ");
    scanf("%s",books.book_name);
    printf("\n|  \n");
    printf("|            2.BOOK id:     ");
    scanf("%d",&books.book_id);
    printf("\n|  \n");
    printf("|            3.Author:      ");
    scanf("%s",books.author);
    printf("\n|  \n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    fprintf(fp,"%s\t%d\t%s\t%s\t%s\n",books.book_name,books.book_id,books.author,books.avilability,books.book_taken_by);
    printf("\n\t\t\t1.Main Menu");
    printf("\n\t\t\t2.Exit");
    printf("\n\n\t\t\tenter your choice=>"); 
    scanf("%d",&option);
fclose(fp);
return(option);
}


int viewbook()
{   
	FILE *fp;
    int option;
    system("COLOR 01");
    system("cls");   
    fp=fopen("books.txt","r");
    printf("#######################################################################################################################\n");
    printf("\t\t\t\t\t       LIBRARY MANAGEMENT SYSTEM\n");
    printf("_______________________________________________________________________________________________________________________\n");
    printf("***********************************************************************************************************************\n");	
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\t\t\t\t\t\t\t  VIEW  BOOKS\n");
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    while(fscanf(fp,"%s\t%d\t%s\t%s\t%s\n",books.book_name,&books.book_id,books.author,books.avilability,books.book_taken_by)!=EOF)
    {
    	printf("\t\tBOOK NAME:>\t%s\n",books.book_name);
    	printf("\n");
    	printf("\t\tBOOK ID:>\t%d\n",books.book_id);
    	printf("\n");
    	printf("\t\tAUTHOR:>\t%s\n",books.author);
    	printf("\n");
    	printf("\t\tAVAILABILITY:>\t%s\n",books.avilability);
    	printf("\n");
    	printf("\t\tBOOK taken by:>\t%s\n",books.book_taken_by);
    	printf("\n");
    	printf("-----------------------------------------------------------------------------------------------------------------------\n");

	}
	fclose(fp);
	printf("\n\t\t\t1.Main Menu");
    printf("\n\t\t\t2.Exit");
    printf("\n\n\t\t\tenter your choice=>"); 
    scanf("%d",&option);
    return option;
}


int removebook()
{
	FILE *fp;
	FILE *f;
    int option;
    int n;
    system("COLOR 0F");
	system("cls");   
    fp=fopen("books.txt","r");
    printf("#######################################################################################################################\n");
    printf("\t\t\t\t\t       LIBRARY MANAGEMENT SYSTEM\n");
    printf("_______________________________________________________________________________________________________________________\n");
    printf("***********************************************************************************************************************\n");	
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\t\t\t\t\t\t\t  REMOVE  BOOK\n");
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\tEnter The Book Id to remove=>");
    scanf("%d",&n);
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\n\t\t Successfully Deleted\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t1.Main Menu");
    printf("\n\t\t\t2.Exit");
    printf("\n\n\t\t\tenter your choice=>"); 
    scanf("%d",&option);
    while(fscanf(fp,"%s\t%d\t%s\t%s\t%s\n",books.book_name,&books.book_id,books.author,books.avilability,books.book_taken_by)!=EOF)
    {
    	if(books.book_id!=n)
    	{
    		f=fopen("temp.txt","a");
    		fprintf(f,"%s\t%d\t%s\t%s\t%s\n",books.book_name,books.book_id,books.author,books.avilability,books.book_taken_by);
    		fclose(f);
		}
	}
    fclose(fp);
    remove("books.txt");
    rename("temp.txt","books.txt");
    return(option);
}

	
int search()
{
	FILE *fp;
    int option;
    int n;
    system("COLOR 0A");
    system("cls");   
    fp=fopen("books.txt","r");
    printf("#######################################################################################################################\n");
    printf("\t\t\t\t\t       LIBRARY MANAGEMENT SYSTEM\n");
    printf("_______________________________________________________________________________________________________________________\n");
    printf("***********************************************************************************************************************\n");	
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\t\t\t\t\t\t\t   SEARCH\n");
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\tEnter The Book Id to search=>");
    scanf("%d",&n);
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    while(fscanf(fp,"%s\t%d\t%s\t%s\t%s\n",books.book_name,&books.book_id,books.author,books.avilability,books.book_taken_by)!=EOF)
    {
    	if(books.book_id==n)
		{
    	   printf("\t\tBOOK NAME:>\t%s\n",books.book_name);
    	   printf("\n");
    	   printf("\t\tBOOK ID:>\t%d\n",books.book_id);
    	   printf("\n");
    	   printf("\t\tAUTHOR:>\t%s\n",books.author);
    	   printf("\n");
    	   printf("\t\tAVAILABILITY:>\t%s\n",books.avilability);
    	   printf("\n");
    	   printf("\t\tBOOK taken by:>\t%s\n",books.book_taken_by);
    	   printf("\n");
    	   printf("-----------------------------------------------------------------------------------------------------------------------\n");
        }
	}
	fclose(fp);
	printf("\n\t\t\t1.Main Menu");
    printf("\n\t\t\t2.Exit");
    printf("\n\n\t\t\tenter your choice=>"); 
    scanf("%d",&option);
    return option;
}


int takebook()
{
	FILE *fp;
	FILE *f;
    int option;
    int n;
    char nam[10],temp[10]="false";
    system("cls");   
    fp=fopen("books.txt","a+");
    printf("#######################################################################################################################\n");
    printf("\t\t\t\t\t       LIBRARY MANAGEMENT SYSTEM\n");
    printf("_______________________________________________________________________________________________________________________\n");
    printf("***********************************************************************************************************************\n");	
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\t\t\t\t\t\t\t   TAKE BOOK\n");
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\tEnter The Book Id to search=>");
    scanf("%d",&n);
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    while (fscanf(fp,"%s\t%d\t%s\t%s\t%s\n",books.book_name,&books.book_id,books.author,books.avilability,books.book_taken_by)!=EOF)
    {
    	if(books.book_id!=n)
    	{
    		f=fopen("temp1.txt","a");
    		fprintf(f,"%s\t%d\t%s\t%s\t%s\n",books.book_name,books.book_id,books.author,books.avilability,books.book_taken_by);
    		fclose(f);
		}
		else
		{
			if(strcmp("true",books.avilability)==0)
		        {
		        	printf("\n\n\t\t Enter the name of user:>\t");
	        		scanf("%s",nam);
	        		tempr=books;
	        		f=fopen("temp1.txt","a");
		        	strcpy(tempr.book_taken_by,nam);
		        	strcpy(tempr.avilability,temp);
			        fprintf(f,"%s\t%d\t%s\t%s\t%s\n",tempr.book_name,tempr.book_id,tempr.author,tempr.avilability,tempr.book_taken_by);
			        fclose(f);
		        }
		else
                {
			        printf("\t\tThe Book is Already Taken");
		        }
	    }
	}
	printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    fclose(fp);
    remove("books.txt");
    rename("temp1.txt","books.txt");
    printf("\n\t\t\t1.Main Menu");
    printf("\n\t\t\t2.Exit");
    printf("\n\n\t\t\tenter your choice=>"); 
    scanf("%d",&option);
    return option;
}


int returnbook()
{
	FILE *fp;
	FILE *f;
    int option;
    int n;
    char nam[10]="undefined",temp[10]="true";
    system("COLOR 03");
    system("cls");   
    fp=fopen("books.txt","a+");
    printf("#######################################################################################################################\n");
    printf("\t\t\t\t\t       LIBRARY MANAGEMENT SYSTEM\n");
    printf("_______________________________________________________________________________________________________________________\n");
    printf("***********************************************************************************************************************\n");	
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\t\t\t\t\t\t\t   SUBMIT BOOK\n");
    printf("\t\t\t\t\t __________________________________________\n");
    printf("\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\tEnter The Book Id to search=>");
    scanf("%d",&n);
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    while (fscanf(fp,"%s\t%d\t%s\t%s\t%s\n",books.book_name,&books.book_id,books.author,books.avilability,books.book_taken_by)!=EOF)
    {
    	if(books.book_id!=n)
    	{
    		f=fopen("temp1.txt","a");
    		fprintf(f,"%s\t%d\t%s\t%s\t%s\n",books.book_name,books.book_id,books.author,books.avilability,books.book_taken_by);
    		fclose(f);
		}
		else
		{
			if(strcmp("true",books.avilability)!=0)
				{
			        tempr=books;
			        f=fopen("temp1.txt","a");
			        strcpy(tempr.book_taken_by,nam);
			        strcpy(tempr.avilability,temp);
			        fprintf(f,"%s\t%d\t%s\t%s\t%s\n",tempr.book_name,tempr.book_id,tempr.author,tempr.avilability,tempr.book_taken_by);
			        fclose(f);
			        printf("\t\tSuccessfully Submited");
		        }
		    else
	            {
			        printf("\t\tThe Book is Already Available");
		        }
		}
		
	}
	
	printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    fclose(fp);
    remove("books.txt");
    rename("temp1.txt","books.txt");
    printf("\n\t\t\t1.Main Menu");
    printf("\n\t\t\t2.Exit");
    printf("\n\n\t\t\tenter your choice=>"); 
    scanf("%d",&option);
    return option;
}

