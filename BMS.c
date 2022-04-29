/*THIS IS THE BANK MANAGEMENT SYSTEM*/
#include <stdio.h>
#include <stdlib.h>

//#define filename clientData.dat

void newAcc()
{
   FILE *fh;
   struct cData{
       int rNum;
       char name[20];
       char sname[20];
       int accNum;
   };
   struct cData client;

   fh = fopen("database.dat", "w");
   if(fh == NULL)
   {
       perror("ERROR: ");
       exit(1);
   }
   else
   {
       printf("Please enter roll number: ");
       scanf("%d", &client.rNum);

       while(client.rNum != 0)
       {
           printf("Enter name surname and 2 digits Account Number\n");
           fscanf(stdin, "%s%s%d", client.name, client.sname, &client.accNum);

           fwrite(&client, sizeof(struct cData), 1, fh);

           printf("Enter roll number: ");
           scanf("%d", &client.rNum);
       }
       fclose(fh);
   }

}
void append()
{
    ;
}
void deleteAcc()
{
    struct cData
    {
        int rNum;
        char name[20];
        char sname[20];
        int accNum;
    };
    FILE *fh, *fh1;
}
void display()
{
    struct cData
    {
        int rNum;
        char name[20];
        char sname[20];
        int accNum;
    };
    struct cData client;
    FILE *fh;

    if((fh = fopen("database.dat", "r")) == NULL)
        {
            perror("ERROR: ");
            exit(1);
        }
    else
    {
        printf("%-10s%-10s%-10s%-10s\n", "RollNum", "Name", "sName", "AccNum");

        while(fread(&client, sizeof(struct cData), 1, fh))
        {
            if(!0)
                printf("%-10d%-10s%-10s%-10d", client.rNum, client.name, client.sname, client.accNum);
        }
    }
    fclose(fh);

}

int main()
{
    int choice;

    printf("MENUE\n 1-New Account\n 2-Append Account\n 3-Delete Account\n 4.Display\n");

    printf("Please select option: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        newAcc();
        break;
    case 2:
        append();
        break;
    case 3:
        deleteAcc();
        break;
    case 4:
        display();
        break;

    default:
        printf("Inalid selection");
        break;
    }

}
