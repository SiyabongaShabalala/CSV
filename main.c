#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



void menu()
{
    printf("\t\t Siyabonga \t\t \n");
    printf("a. Read & sort numbers from a file\n");
    printf("b. Calculate the value of PI\n");
    printf("c. Find values of prime numbers\n");
    printf("x. Exit\n");

}
void printToFile(char *(filename), char *texttoprint);

void outPutFile(char *(filename), char *texttoprint);


int main()
{

    char choice;
    menu();
    printf("Enter Your Choice: ");
    scanf("%c", &choice);

    switch(choice)
    {
    case 'a':


        printToFile("inputfile", "open");
        char option;

            printf("Enter (A)For ASC or (D)For DSC: ");
            scanf("%c", &option);
            printf("gimmod");

            if((option == 'A') || (option == 'a'))
            {
        ///ASCEDING ORDER
                int a[] = {2,5,8,1,4,7,3,9,6};
                int i,j,temp;

                for (i = 0; i < 10; i++)
                {
                    for (j = i+1; j <10;j++)
                    {
                        if(a[i] > a[j])
                        {
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                        }
                    }
                }
                ///PRINT SORTED ASC NUMBERS

                printf("Asceding Order: \n");
                for (i=0; i < 10; i++)
                {
                    printf("%d", a[i]);
                }
            }else if((option == 'D') || (option == 'd'))
            {
                    ///DESC ORDER
                 int b[] = {2,5,8,1,4,7,3,9,6};
                int i_s,j_s,temp_s;

                for (i_s = 0; i_s < 10; i_s++)
                {
                    for (j_s = i_s + 1; j_s <10;j_s++)
                    {
                        if(b[i_s] < b[j_s])
                        {
                            temp_s = b[i_s];
                            b[i_s] = b[j_s];
                            b[j_s] = temp_s;
                        }
                    }
                }
            ///PRINT OUT IN DESC ORDER
                printf("Descending Order: \n");
                for (i_s = 0; i_s < 10; i_s++)
                {
                    printf("%d", b[i_s]);
                }
            }


        //outPutFile("output", "open");

       // char filename = "input_file";

        //printf("%s", inputfile);



       /* printf(" Enter ''output_file.csv'' file name: ");
        char outputfile;
        scanf("%s", &outputfile);*/





    }

/***********************************************


///WRITE A FILE

FILE *input_file = fopen("input_file.csv", "w");
    if (input_file == NULL)
    {
        printf("Error:can not open file");
        exit(1);
    }else
        printf("file opened");

    fprintf(input_file, "2,5,8,1,4,7,3,9,6");
    fclose(input_file);




///READS THE FILE

FILE *read_file_1 = fopen("Numbers.csv", "r");
    if(read_file_1 == NULL)
    {
        printf("Error: Failed to open file");
        exit(1);
    }else printf("File opened \n");

    char buff[100];
    char *token;

    while(fscanf(read_file_1, "%s", buff) != -1)
        printf("Unsorted numbers: %s \n", buff);


fclose(read_file_1);

FILE *file_2 = fopen("Ouput_file.csv", "w");
    if (file_2 == NULL)
    {
        printf("Error:can not open file");
        exit(1);
    }else
        printf("file opened");

    bool repeat = true;
    char option;

    while(repeat)
    {
        printf("Enter (A)For ASC or (D)For DSC: ");
        scanf("%c", &option);

        if((option == 'A') || (option == 'a'))
        {
    ///ASCEDING ORDER
            int a[] = {2,5,8,1,4,7,3,9,6};
            int i,j,temp;

            for (i = 0; i < 10; i++)
            {
                for (j = i+1; j <10;j++)
                {
                    if(a[i] > a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            ///PRINT SORTED ASC NUMBERS

            fprintf(file_2, "Asceding Order: \n");
            for (i=0; i < 10; i++)
            {
                fprintf(file_2, "%d", a[i]);
            }
            repeat = false;

        }else if((option == 'D') || (option == 'd'))
        {
                ///DESC ORDER
             int b[] = {2,5,8,1,4,7,3,9,6};
            int i_s,j_s,temp_s;

            for (i_s = 0; i_s < 10; i_s++)
            {
                for (j_s = i_s + 1; j_s <10;j_s++)
                {
                    if(b[i_s] < b[j_s])
                    {
                        temp_s = b[i_s];
                        b[i_s] = b[j_s];
                        b[j_s] = temp_s;
                    }
                }
            }
        ///PRINT OUT IN DESC ORDER
            fprintf(file_2, "Descending Order: \n");
            for (i_s = 0; i_s < 10; i_s++)
            {
                fprintf(file_2, "%d", b[i_s]);
            }
            repeat = false;
        }else
        {
            printf("\nError: Wrong code \ntry again\n");
            repeat = true;
        }

        fclose(file_2);

    }

/********************************************
    ///FIRST TOKEN
    token = strtok(buff, ",");

    ///CONTINUE THROUGH THE OTHER TOKENS
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }


fclose(read_file_1);

    char choice;
    scanf("%c", &choice);
    while(choice != 'x')
    {
       switch(choice)
       {
            case 'a':
                printf("Enter the input csv file: ")
                scanf("%s", &)

       }
    }
********************************************/
    return 0;
}
void printToFile(char *(filename), char *texttoprint)
{
        char name[256];

    printf("Enter ''input_file'' file name: ");
    scanf("%s", name);

    FILE *input_file = fopen(name, "r");
    if(input_file == NULL)
    {
        printf("Error: Failed to open file %s", name);
        exit(1);
    }else printf("File opened \n");

    char buff[100];

    while(fscanf(input_file, "%s", buff) != -1)
        printf("Unsorted numbers: %s \n", buff);


    fclose(input_file);
}
void outPutFile(char *(filename), char *texttoprint)
{
    char name[256];

    printf("Enter Output file name: ");
    scanf("%s", name);

    FILE *output_file = fopen(name, "r");
    if(output_file == NULL)
    {
        printf("Error: Failed to open file %s",name);
        exit(1);
    }else
    {   printf("file opened\n");
    }
    fclose(output_file);
}



