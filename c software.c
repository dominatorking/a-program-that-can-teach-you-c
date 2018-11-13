//created by :yash mathur
//language: c
//os:windows 7(ultimate 64 bit)
//compiler:codeblocks(v16.01)
//aim:program which can teach you c
//caution:this program requires high capacity ram approx 8gb(even it is not working as expected on my pc because of ram)


#include<stdio.h>
#include<stdlib.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main ()
{
    char ch;
    int choice;
    printf("\t\t" ANSI_COLOR_RED"Welcome to this software!!"ANSI_COLOR_RESET "\n\n\n\n\n");
    printf(ANSI_COLOR_MAGENTA"Do you want to use it\n"ANSI_COLOR_RESET ANSI_COLOR_CYAN"(if yes then press y or if don't press any key)"     ANSI_COLOR_RESET "\n");

    scanf("%c",&ch);

    if(ch=='y'||ch=='Y')
    {
    for( ; ;)
    {
       // printf(      "Do you want to use it"     ANSI_COLOR_RESET);
       system("clear");
       printf("\n\t"ANSI_COLOR_GREEN"\x1b[32m""press 1 (for c introduction)!!"ANSI_COLOR_RESET "\n");
       printf("\n\t"ANSI_COLOR_GREEN"\x1b[32m""press 2 (for if else statement)!!"ANSI_COLOR_RESET "\n");
       printf("\n\t"ANSI_COLOR_GREEN"\x1b[32m""press 3 (for c loops)!!"ANSI_COLOR_RESET "\n");
       printf("\n\t"ANSI_COLOR_GREEN"\x1b[32m""press 4 (for c pointer)!!"ANSI_COLOR_RESET "\n");
       printf("\n\t"ANSI_COLOR_GREEN"\x1b[32m""press 5 (for c array)!!"ANSI_COLOR_RESET "\n");
       printf("\n\t"ANSI_COLOR_GREEN"\x1b[32m""press 6 (for c switch case)!!"ANSI_COLOR_RESET "\n");
       printf("\n\t"ANSI_COLOR_GREEN"\x1b[32m""press 7 (for c function)!!"ANSI_COLOR_RESET "\n");
       printf("\n\t"ANSI_COLOR_GREEN"\x1b[32m""press 8 (for c strings)!!"ANSI_COLOR_RESET "\n");
       printf("\n\t"ANSI_COLOR_GREEN"\x1b[32m""press 9 (for c structure)!!"ANSI_COLOR_RESET "\n");
       printf("\n\t"ANSI_COLOR_GREEN"\x1b[32m""press 10 (for c file handling)!!"ANSI_COLOR_RESET "\n");
        scanf("%d",&choice);
        if(choice==1)
        {
             FILE *fptr;

    char filename[9000], c;
        // Open file
    fptr = fopen("c int.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf (ANSI_COLOR_YELLOW"%c"ANSI_COLOR_RESET , c);
        c = fgetc(fptr);
    }

    fclose(fptr);
        }
        if(choice==2)
        {
             FILE *fptr;

    char filename[9000], c;


    // Open file
    fptr = fopen("if.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf (ANSI_COLOR_YELLOW"%c"ANSI_COLOR_RESET , c);
        c = fgetc(fptr);
    }

    fclose(fptr);
        }
         if(choice==3)
        {
             FILE *fptr;

    char filename[9000], c;


    // Open file
    fptr = fopen("loops.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf (ANSI_COLOR_YELLOW"%c"ANSI_COLOR_RESET , c);
        c = fgetc(fptr);
    }

    fclose(fptr);
        }
        if(choice==5)
        {
             FILE *fptr;

    char filename[9000], c;


    // Open file
    fptr = fopen("array.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf (ANSI_COLOR_YELLOW"%c"ANSI_COLOR_RESET , c);
        c = fgetc(fptr);
    }

    fclose(fptr);
        }
        if(choice==4)
        {
             FILE *fptr;

    char filename[9000], c;


    // Open file
    fptr = fopen("poin.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
     printf (ANSI_COLOR_YELLOW"%c"ANSI_COLOR_RESET , c);
        c = fgetc(fptr);
    }

    fclose(fptr);
        }
        if(choice==6)
        {
             FILE *fptr;

    char filename[9000], c;


    // Open file
    fptr = fopen("swi.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf (ANSI_COLOR_YELLOW"%c"ANSI_COLOR_RESET , c);
        c = fgetc(fptr);
    }

    fclose(fptr);
        }
        if(choice==7)
        {
             FILE *fptr;

    char filename[9000], c;


    // Open file
    fptr = fopen("func.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf (ANSI_COLOR_YELLOW"%c"ANSI_COLOR_RESET , c);
        c = fgetc(fptr);
    }

    fclose(fptr);
        }
     if(choice==8)
        {
             FILE *fptr;

    char filename[9000], c;


    // Open file
    fptr = fopen("strings.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf (ANSI_COLOR_YELLOW"%c"ANSI_COLOR_RESET , c);
        c = fgetc(fptr);
    }

    fclose(fptr);
        }
 if(choice==9)
        {
             FILE *fptr;

    char filename[9000], c;


    // Open file
    fptr = fopen("stru.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf (ANSI_COLOR_YELLOW"%c"ANSI_COLOR_RESET , c);
        c = fgetc(fptr);
    }

    fclose(fptr);
        }
 if(choice==10)
        {
             FILE *fptr;

    char filename[9000], c;


    // Open file
    fptr = fopen("fh.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf (ANSI_COLOR_YELLOW"%c"ANSI_COLOR_RESET , c);
        c = fgetc(fptr);
    }

    fclose(fptr);
        }
         while ((getchar()) != '\n'); //this is for clearing the buffer
        printf("do you want to use it further(if yes press y)");
            ch=getchar();
        if(ch=='y'||ch=='Y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    }
}

