#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
int n;
void login2();
int reg();
int homepage();
int regi();
void record1();
struct web
{
char name[30],pass[30];
}w[99];

struct emp {
    char name[50];
    char email[50];
    int age;
    char username[50];
};
struct emp e;
long int size = sizeof(e);
COORD cord = { 0, 0 };

void gotoxy(int x, int y)
{
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE),
        cord);
}
  
FILE *fp, *ft;


int allAboutPid(){
    system("cls");

    printf("==============================================================================================================================================");
    printf("\n==============================================================================================================================================");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                                ----SPRISM TECHS----                                                      ==========");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                             Welcome To Future Of Techs                                                   ==========");
    printf("\n==========                                                                                                                          ==========");
    printf("\n==============================================================================================================================================");
    printf("\n==============================================================================================================================================\n\n\n");

    printf("Project 1: ");
    printf("\n\n---Challenge Title---");
    printf("\nNavigation Device with integrated GPS, digital compass, and GIS ");
    printf(" application, with the facility to use raster, vector, and 3-D maps.");
    printf("\n\n---Name of the ");
    printf("Industry---");
    printf("\n Abhyuday Bharat Mega Defense Cluster LLP");
    printf("\n\n---Challenge");
    printf(" Description with ");
    printf("context---");
    printf("\n The current GPS used is of old vintage, is less user-friendly, and does ");
    printf("\nnot include an integrated digital map, compass, and GPS application.");
    printf("\nThus a soldier has to use three to four devices for navigation, which");
    printf(" increases the overall weight and number of equipment being carried");
    printf(" by a soldier.");
    printf("\n\n---Users---");
    printf("\nTroops operating in field areas / Counter Insurgency operations");
    printf("\n\n---Expected ");
    printf("Outcomes---");
    printf("\n Develop compact GIS for capturing, storing, checking, and displaying ");
    printf(" data related to positions.");
    printf("\n\n---Impact---");
    printf("The soldier has to use only one device in place of three to four devices"); 
    printf(" for navigation, which increases the overall weight and number of ");
    printf(" equipment being carried by a soldier.\n\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t\tDeveloped by: Man Patel\n");

    system("pause");

}
int login()
    {
        system("cls");
        printf("==============================================================================================================================================");
    printf("\n==============================================================================================================================================");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                                ----SPRISM TECHS----                                                      ==========");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                             Welcome To Future Of Techs                                                   ==========");
    printf("\n==========                                                                                  Made By - Man Patel                     ==========");
    printf("\n==============================================================================================================================================");
    printf("\n==============================================================================================================================================");

  
        int i;
      FILE *fp;
      char c,name[30],pass[30]; int z=0;
      int checku,checkp;
      fp=fopen("Web_reg.txt","rb");
      
      for(i=0;i<1000;i++)
      {
        printf("\n\n\t\t\t\t  ENTER USERNAME: ");
        scanf("%s",name);
        printf("\n\n\t\t\t\t  ENTER PASSWORD: ");
        while((c=getch())!=13)
        {
          pass[z++]=c;
          printf("%c",'*');
        }
        pass[z]='\0';
      while(!feof(fp))
        {
        fread(&w[i],sizeof(w[i]),1,fp);
          checku=strcmp(name,w[i].name);
          checkp=strcmp(pass,w[i].pass);
          if(checku==0&&checkp==0)
          {
            system("cls");
            printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY\n");
            system("pause");
            homepage();
            break;
          }
        else if(checku==0&&checkp!=0)
          {
            printf("\n\n\n\t\t\tWRONG PASSWORD!! Not %s??",name);
            printf("\n\n\t\t\t\t  (Press 'Y' to re-login)");
            if(getch()=='y'||getch()=='Y')
              login();
          }
        else if(checku!=0)
          {
            printf("\n\n\n\t\t\tYou are not a Registered User\n \t\t\tPress enter to register yourself");
            if(getch()==13)
           system("cls");
            reg();
          }
        }
        break;
      }
      getch();
    }

    int reg()
  {
    system("cls");
    printf("==============================================================================================================================================");
    printf("\n==============================================================================================================================================");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                                ----SPRISM TECHS----                                                      ==========");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                             Welcome To Future Of Techs                                                   ==========");
    printf("\n==========                                                                                  Made By - Man Patel                     ==========");
    printf("\n==============================================================================================================================================");
    printf("\n==============================================================================================================================================");

  
    FILE *fp;
    char c,checker[30]; int z=0;
    fp=fopen("Web_reg.txt","ab+");
    printf("WELCOME TO REGISTRATION SECTION");
    for(int i=0;i<100;i++)
    {
      printf("\n\nENTER USERNAME: ");
      scanf("%s",checker);
        while(!feof(fp))
        {
          fread(&w[i],sizeof(w[i]),1,fp);
          if(strcmp(checker,w[i].name)==0)
            {
            printf("\n\nUSERNAME ALREDY EXISTS");
            system("cls");
            reg();
            }
          else
          {
            strcpy(w[i].name,checker);
            break;
          }
        }
      printf("\n\nDESIRED PASSWORD: ");
      while((c=getch())!=13)
        {
          w[i].pass[z++]=c;
          printf("%c",'*');
        }
      fwrite(&w[i],sizeof(w[i]),1,fp);
      fclose(fp);
      printf("\n\nPress enter if you agree with Username and Password");
      if((c=getch())==13)
        {
        system("cls");
        printf("\n\n\t\tYou are successfully registered");
        printf("\n\n\t\tTry login your account??\n\n\t\t  ");
        printf("PRESS 1 FOR YES\n\n PRESS 2 FOR NO\n\n");
        scanf("%d",&n);
        switch(n)
          {
              case 1: system("cls");;
                    login();
                    break;
              case 2: system("cls");;
                    printf("\n\n\n\t\t\t\t\tTHANK YOU FOR REGISTERING");
                    break;
          }
        }
        break;
      }
    getch();
  }


  int homepage2(){
    system("cls");
    char choice;
    printf("==============================================================================================================================================\n");
    printf("==============================================================================================================================================\n");
    printf("==========                                                  ----------------                                                        ==========\n");
    printf("==========                                                ----SPRISM TECHS----                                                      ==========\n");
    printf("==========                                                  ----------------                                                        ==========\n");
    printf("==========                                             Welcome To Future Of Techs                                                   ==========\n");
    printf("==========                                                                                                                          ==========\n");
    printf("==============================================================================================================================================\n");
    printf("==============================================================================================================================================\n\n\n");

    printf("\t\t\t\t\t\t\t\tHello..,\n\n");
    printf("\n\nWelcome to Sprism Tech !!!!");
    printf("\nHere we as a group make the techs which are useful for army and people to make their life simple and easy ...");
    printf("\nWe mainly focus more on army navigation and GIS application and gove them better perks to unlocks the way of new mode of navigation.");
    printf("\nThis whole page is for information about the application and logging into your accout.All the details are described below...");
    printf("\n\nNow further more if you want to go through all over out project visit different part of the page...\n\n\n");
    printf("\t\t\t\t\t\t\t\tThank You\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\t\tDeveloped by: Man Patel\n");
    system("pause");
    
}

 int homepage(){
    int choice;
  
    fp = fopen("dataa.txt", "rb+");
  
    
    if (fp == NULL) {
        fp = fopen("dataa.txt", "wb+");
        if (fp == NULL) {
            printf("\nCannot open file...");
            exit(1);
        }
    }
  
  
    while (1) {
       
        system("cls");
        printf("==============================================================================================================================================");
    printf("\n==============================================================================================================================================");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                                ----SPRISM TECHS----                                                      ==========");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                             Welcome To Future Of Techs                                                   ==========");
    printf("\n==========                                                                                  Made By - Man Patel                     ==========");
    printf("\n==============================================================================================================================================");
    printf("\n==============================================================================================================================================");

  
        gotoxy(30, 10);
        printf("\n1. HOMEPAGE\n");
        gotoxy(30, 12);
        printf("\n2. DETAILS ABOUT PID\n");
        gotoxy(30, 14);
        printf("\n3. APPLY FOR PRE REGISTRATION.\n");
        gotoxy(30, 16);
        printf("\n4. EXIT \n");
        printf("\n\n Press Respected Number to get redirected to that page!\n");
        fflush(stdin);
        scanf("%d", &choice);
  
       
        switch (choice) {
        case 1:
  
            homepage2();
            break;
  
        case 2:
  
            allAboutPid();
            break;
        case 3:

          regi();
          break;
        case 4:
            fclose(fp);
            exit(0);
            break;
  
        default:
            printf("\nINVALID CHOICE...\n");
        }
    }
  
    return 0;
 }

int addrecord()
{
    system("cls");
    fseek(fp, 0, SEEK_END);
    char another = 'y';
  
    while (another == 'y') {
        printf("\nEnter Name : ");
        scanf("%s", &e.name);
  
        printf("\nEnter E-Mail : ");
        scanf("%s", &e.email);
  
        printf("\nEnter Age : ");
        scanf("%d", &e.age);
  
        printf("\nEnter username: ");
        scanf("%s", &e.username);
  
        fwrite(&e, size, 1, fp);
  
        printf("\nWant to add another"
               " username to book registration? (Y/N) : ");
        fflush(stdin);
  
        scanf("%c", &another);
    }
}
  
int deleterecord()
{
    system("cls");
    char empname[50];
    char another = 'y';
  
    while (another == 'y') {
        printf("\nEnter employee "
               "name to delete : ");
        scanf("%s", empname);
  
        ft = fopen("temp.txt", "wb");
        rewind(fp);
  
        while (fread(&e, size,
                     1, fp)
               == 1) {
            if (strcmp(e.name,
                       empname)
                != 0)
                fwrite(&e, size, 1, ft);
        }
  
        fclose(fp);
        fclose(ft);
        remove("dataa.txt");
        rename("temp.txt", "dataa.txt");
        fp = fopen("dataa.txt", "rb+");
  
        printf("\nWant to delete another"
               " record (Y/N) :");
        fflush(stdin);
        another = getchar();
    }
}

int displayrecord()
{
    system("cls");

    rewind(fp);
  
    printf("\n========================="
           "==========================="
           "======");
    printf("\nNAME\t\t\tE-MAIL\t\t\tAGE\t\t"
           "\tUSERNAME\n\n",
           e.name, e.email,
           e.age, e.username);
    printf("==========================="
           "==========================="
           "====\n");
  
    while (fread(&e, size, 1, fp) == 1)
        printf("\n%s\t\t\t%s\t\t\t%d\t\t\t%s",
               e.name, e.email, e.age, e.username);
  
    printf("\n\n\n\t");
    system("pause");
}

int modifyrecord()
{
    system("cls");
    char empname[50];
    char another = 'y';
  
    while (another == 'y') {
        printf("\nEnter name"
               " to modify : ");
        scanf("%s", empname);
  
        rewind(fp);

        while (fread(&e, size, 1, fp) == 1) {
           
            if (strcmp(e.name, empname) == 0) {
                printf("\nEnter new name:");
                scanf("%s", e.name);
                printf("\nEnter new email :");
                scanf("%s", &e.email);
                printf("\nEnter new age :");
                scanf("%d", &e.age);
                printf("\nEnter new Username :");
                scanf("%s", &e.username);
  
                fseek(fp, -size, SEEK_CUR);
                fwrite(&e, size, 1, fp);
                break;
            }
        }
  
        printf("\nWant to modify another"
               " record (Y/N) :");
        fflush(stdin);
        scanf("%c", &another);
    }
}


  int regi()
{
    int choice;
  
    fp = fopen("dataa.txt", "rb+");
  
    
    if (fp == NULL) {
        fp = fopen("dataa.txt", "wb+");
        if (fp == NULL) {
            printf("\nCannot open file...");
            exit(1);
        }
    }
  
  
    while (1) {
       
        system("cls");
        printf("==============================================================================================================================================");
    printf("\n==============================================================================================================================================");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                                ----SPRISM TECHS----                                                      ==========");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                             Welcome To Future Of Techs                                                   ==========");
    printf("\n==========                                                                                  Made By - Man Patel                     ==========");
    printf("\n==============================================================================================================================================");
    printf("\n==============================================================================================================================================");

  
        gotoxy(30, 10);
        printf("\n1. ADD YOUR NAME IN PRE-REGISTRAION FORM\n");
        gotoxy(30, 12);
        printf("\n2. MODIFY YOUR FORM\n");
        gotoxy(30, 14);
        printf("\n3. DELETE YOUR FORM\n");
        gotoxy(30, 16);
        printf("\n4. RETURN TO HOMEPAGE\n");
        
        printf("\nENTER YOUR CHOICE...\n");
        fflush(stdin);
        scanf("%d", &choice);
  
       
        switch (choice) {
        case 1:
  
            addrecord();
            break;
  
        case 2:
  
            modifyrecord();
            break;

        case 3:
  
            deleterecord();
            break;

        case 4:

            homepage();
            break;
        default:
            printf("\nINVALID CHOICE...\n");
        }
    }
  
    return 0;
}

    
    
void login2(){

    system("cls");

    printf("==============================================================================================================================================");
    printf("\n==============================================================================================================================================");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                                ----SPRISM TECHS----                                                      ==========");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                             Welcome To Future Of Techs                                                   ==========");
    printf("\n==========                                                                                                                          ==========");
    printf("\n==============================================================================================================================================");
    printf("\n==============================================================================================================================================\n\n\n");

    printf("Enter Your User Name And Password here:\n\n\n");

    char UserName[]="Admin", password[]="123456", id[20], p[20];
    int n=1, x, y;

        printf("\nUser-Name:");
        scanf("%s", &id);
        fflush(stdout);

        printf("\nPassword:");
        scanf("%s", &p);
        fflush(stdout);
        x=strcmp(id, UserName);
        y=strcmp(p, password);
    int choice;
        if(x==0 && y==0){
          printf("Access Granted! Welcome Admin\n");
          system("pause");
          system("cls");
          printf("==============================================================================================================================================");
    printf("\n==============================================================================================================================================");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                                ----SPRISM TECHS----                                                      ==========");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                             Welcome To Future Of Techs                                                   ==========");
    printf("\n==========                                                                                  Made By - Man Patel                     ==========");
    printf("\n==============================================================================================================================================");
    printf("\n==============================================================================================================================================");

  
        gotoxy(30, 10);
        printf("\n1. GO TO ADMIN PAGE\n");
        gotoxy(30, 12);
        printf("\n2. EXIT\n");
         printf("\nENTER YOUR CHOICE...\n");
        fflush(stdin);
        scanf("%d", &choice);
          switch (choice) {
        case 1:
  
            record1();
            break;
  
        case 2:
  
            exit(0);
            break;
            }
        }else {
           printf("\nWrong Password, Access Denied");
           exit(0);
           }       
}
void record1(){
    
    system("cls");
    printf("==============================================================================================================================================");
    printf("\n==============================================================================================================================================");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                                ----SPRISM TECHS----                                                      ==========");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                             Welcome To Future Of Techs                                                   ==========");
    printf("\n==========                                                                                  Made By - Man Patel                     ==========");
    printf("\n==============================================================================================================================================");
    printf("\n==============================================================================================================================================");

        int choice;
        gotoxy(30, 10);
        printf("\n1. SHOW RECORDS OF PRE-REGISTERED PEOPLES\n");
        gotoxy(30, 12);
        printf("\n2. DELETE THE ACCOUNTS FROM PREREGISTER\n");
        gotoxy(30, 14);
        printf("\n3. EXIT \n");

        switch (choice) {
        case 1:
  
            displayrecord();
            break;
  
        case 2:
  
            deleterecord();
            break;

        case 3:
        exit(0);
        
        }
 }
    
  int main()
{
    int choice;
  
    fp = fopen("dataa.txt", "rb+");
  
    
    if (fp == NULL) {
        fp = fopen("dataa.txt", "wb+");
        if (fp == NULL) {
            printf("\nCannot open file...");
            exit(1);
        }
    }
  
  
    while (1) {
       
        system("cls");
        printf("==============================================================================================================================================");
    printf("\n==============================================================================================================================================");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                                ----SPRISM TECHS----                                                      ==========");
    printf("\n==========                                                  ----------------                                                        ==========");
    printf("\n==========                                             Welcome To Future Of Techs                                                   ==========");
    printf("\n==========                                                                                  Made By - Man Patel                     ==========");
    printf("\n==============================================================================================================================================");
    printf("\n==============================================================================================================================================");

  
        gotoxy(30, 10);
        printf("\n1. LOG IN(If you have existing account)\n");
        gotoxy(30, 12);
        printf("\n2. CREATE ACCOUNT(If you dont have existing accout)\n");
        gotoxy(30, 14);
        printf("\n3. LOG-IN AS ADMIN\n");
        gotoxy(30, 16);
        printf("\n4. EXIT THE APPLICATION\n");
        gotoxy(30, 18);
        
        printf("\nENTER YOUR CHOICE...\n");
        fflush(stdin);
        scanf("%d", &choice);
  
       
        switch (choice) {
        case 1:
  
            login();
            break;
  
        case 2:
  
            reg();
            break;

        case 3:

        login2();
        break;

        case 4:
  
            exit(0);
            break;
    
        default:
            printf("\nINVALID CHOICE...\n");
        }
    }
  
    return 0;
}


