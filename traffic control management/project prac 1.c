#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<ctype.h>
#include<windows.h>
void usertype()
{
    int choice;
    printf("\n\n\t\t\t\t\t---------------\n");
    printf("\t\t\t\t\t|| MAIN MENU ||\n");
    printf("\t\t\t\t\t---------------\n");
    printf("\n\n\t\t\t1.Traffic Controller (Store Officers Data)\n");
    printf("\t\t\t2.Automatic traffic light control\n");
    printf("\t\t\t3.Manual traffic light control\n");
    printf("\t\t\t4.About Us\n");
    printf("\t\t\t5.Exit");
    printf("\n\n\t#Enter your choice::");
    lvl:scanf("%d",&choice);
    if(choice==1){
            clrscr();
            traffcontl();
            }
    else if(choice==2){
             clrscr();
        redlight();
    }
    else if(choice==3){
        clrscr();
        clor();
    }
    else if(choice==4){
        clrscr();
        about();
    }
    else if(choice==5){
            clrscr();
    printf("\n\n\t\t**~Thanks for using our application!~**\n\n\n");
        exit(0);
    }
    else{
        printf("\t\t##Wrong Keyword.\n");
        printf("\t\t##Enter a valid keyword:: ");
        goto lvl;
    }
}
void about()
{
        printf("\t\t##Developers Name and ID::\n\n\n");
        printf("\n\t\t\t1.Md. Mahidul Islam\t\t\t \t171-35-219\n\t\t\t2.Tasnimul Alam\t \t\t\t\t171-35-241\n\t\t\t3.Rakib RafshanJani\t\t\t\t171-35-236\n");
        int x;
    printf("\n\n\t\t##Press '1' for Main menu:: ");
    scanf("%d", &x);
    while(x==1){
            clrscr();
        usertype();
    }
        }
void traffcontl()
{
    int pass;
            printf("\n\n\t\t\t\t----------------------------\n");
            printf("\t\t\t\t|| About Security Concern ||\n");
            printf("\t\t\t\t----------------------------\n");
            printf("\n\t##please enter authorized password(Number Only) ::");
            scanf("%d",&pass);
            if(pass==17135219||pass==17135236||pass==17135241){
                svdata();
            }
            else{
                int o;
                printf("\n\tWrong Password.\n\tYou are not allowed to enter into this system.\n\n\tPlease press '1' to MAIN MENU::");
                scanf("%d",&o);
                while(o==1){
                        clrscr();
                    main();
                }
            }
}
void svdata(){
                clrscr();
                printf("\n\n\t\t\t\t******||Store Data Here||******\n");
                printf("\n\n***Enter Data here for 3_ON_DUTY traffic police..\n");
                struct person
                {
                char fst_name[25];
                char lst_name[25];
                char plc1_name[25];
                char plc2_name[25];
                int offnum;
                float tym;
                };
                struct person p[3];
                int i,z;
                for(i=0;i<=2;i++){
                printf("\t%d\n",i+1);
                printf(" \n\tName(first+last)::");
                scanf("%s",&p[i].fst_name);
                scanf("%s",&p[i].lst_name);
                printf(" \n\tOfficial Number(must be in 8 digits)::");
                scanf("%d",&p[i].offnum);
                printf(" \n\tDuty place(name must to be in two words)::");
                scanf("%s",&p[i].plc1_name);
                scanf("%s",&p[i].plc2_name);
                printf(" \n\tDuty starts from(world clock)::");
                scanf("%f",&p[i].tym);
                printf("\n ");
                }
                clrscr();
                printf("\n\n \t\t###***Data saved successfully.***###\n");
                printf("\n\nPress '1' to go to MAIN MENU\nPress '2' to see the Save Data.\nEnter choice.");
                scanf("%d",&z);
                if(z==1){
                    clrscr();
                    usertype();
                }
                else{
                        label:
                        clrscr();
                        printf("SN.\t\tName\t\t\tOfficial Number\t\t\tDuty Place\t\t\tDuty Starts From\t\tEnds At\n\n");
                    for(i=0;i<=2;i++){
                        printf("%d\t\t%s %s\t\t%d\t\t\t%s %s\t\t\t%.2f\t\t\t%.2f\n",i+1,p[i].fst_name,p[i].lst_name,p[i].offnum,p[i].plc1_name,p[i].plc2_name,p[i].tym,p[i].tym+6);
                    }
                int a;
    printf("\n\n\t##Press '1' for Main menu:: ");
    scanf("%d", &a);
    while(a==1){
            clrscr();
        usertype();
    }
                }
}
twentyfiveseconds()
{
    time_t start;
    time_t current;
    time(&start);
    do
    {
        time(&current);
    }
    while(difftime(current,start) < 15.0);
}

fiveseconds()
{
    time_t start;
    time_t current;
    time(&start);
    do
    {
        time(&current);
    }
    while(difftime(current,start) < 5.0);
}

redlight()
{
    int pass;
            printf("\n\n\t\t\t\t----------------------------\n");
            printf("\t\t\t\t|| About Security Concern ||\n");
            printf("\t\t\t\t----------------------------\n");
            printf("\n\t##please enter authorized password(Number Only) ::");
            scanf("%d",&pass);
            if(pass==17135219||pass==17135236||pass==17135241){
              aclcr();
            }
            else{
                int o;
                printf("\n\tWrong Password.\n\tYou are not allowed to enter into this system.\n\n\tPlease press '1' to MAIN MENU::");
                scanf("%d",&o);
                while(o==1){
                        clrscr();
                        main();
                }
            }

}
aclcr()
{
    clrscr();
     system("COLOR A");
      printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("________|   N1  .  N2   |_________\n");
     printf("\n\n\tW1\t \tE1\n");
     printf("\n.........\t\t..........\n");
     printf("\n\n\tW2\t \tE2\n");
     printf("\n________    S1  .  S2    _________\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
    printf("Automatic Control is RUNNING..\n\n");
    printf("Lights for East-West:\n\n");
    printf("\tGREEN::W1,,E2\n\n\t\tW1 -> N1 -> Opened\n\t\tW1 -> E1 -> Opened\n\t\tE2 -> S2 -> Opened\n\t\tE2 -> W2 -> Opened\n");
    printf("\tRED::\n\n\t\tS1 -> is closed\n\t\tN2 -> is closed\n\t\tW1 -> S2 -> Closed\n\t\tE2 -> N1 -> Closed\n");
    twentyfiveseconds();
    printf("\tYellow::\n\t\tMaintaining standby mode for every lane.\n");
    fiveseconds();
    autoclr();
}
autoclr()
{
     clrscr();
     system("COLOR A");
      printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("________|   N1  .  N2   |_________\n");
     printf("\n\n\tW1\t \tE1\n");
     printf("\n.........\t\t..........\n");
     printf("\n\n\tW2\t \tE2\n");
     printf("\n________    S1  .  S2    _________\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
    printf("Automatic Control is RUNNING..\n\n");
    printf("Lights for North-South:\n\n");
    printf("\tGREEN::S1,,N2\n\n\t\tN2 -> E1 -> Opened\n\t\tN2 -> S2 -> Opened\n\t\tS1 -> W2 -> Opened\n\t\tS1 -> N1 -> Opened\n");
    printf("\tRED::\n\n\t\tS1 -> is Closed\n\t\tN2 -> W2 -> Closed\n\t\tS1 -> E1 -> Closed\n");
    twentyfiveseconds();
    printf("\tYellow::\n\t\tMaintaining standby mode for every lane.\n");
    fiveseconds();
    int a;
    printf("\n\t\tPress '1' for continue Automatic Control..\n\n\t\tPress '2' for Exit & back to Main Menu..\n\t\t:: ");
    scanf("%d", &a);
    if(a==1){
          aclcr();
    }
    else{
     clrscr();
        usertype();
    }

}
void clor() {
    int pass;
            printf("\n\n\t\t\t\t----------------------------\n");
            printf("\t\t\t\t|| About Security Concern ||\n");
            printf("\t\t\t\t----------------------------\n");
            printf("\n\t##please enter authorized password(Number Only) ::");
            scanf("%d",&pass);
            if(pass==17135219||pass==17135236||pass==17135241){
            int side;
    clrscr();
    system("COLOR A");
    printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("________|   N1  .  N2   |_________\n");
     printf("\n\n\tW1\t \tE1\n");
     printf("\n.........\t\t..........\n");
     printf("\n\n\tW2\t \tE2\n");
     printf("\n________    S1  .  S2    _________\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
     printf("\t|\t.\t|\n");
    printf("Which side you want to change?\nFor North-South press 1..\nFor East-West press 2..\n::");
    scanf("%d", &side);
    if(side==1){
    clo();
    }
   else if(side==2){
    clo();
   }
   else {
    printf("You typed wrong number.\n");
    fiveseconds();
    main();
   }
            }
                        else{
                int o;
                printf("\n\tWrong Password.\n\tYou are not allowed to enter into this system.\n\n\tPlease press '1' to MAIN MENU::");
                scanf("%d",&o);
                while(o==1){
                        clrscr();
                    main();
                }
            }

}
void clo() {
    clrscr();
    char colour;
       printf ("Enter the color of the light (R,G,Y,A): ");
   scanf (" %c", &colour);
   switch (colour)
   {

       case 'R':
       case 'r':
           system("COLOR CF");
                 printf ("STOP! \n");
                 int x;
    printf("Press '1' for Main menu:: ");
    scanf("%d", &x);
    while(x==1){
            clrscr();
        usertype();
    }
                 break;
       case 'Y':
       case 'y':
       case 'A':
       case 'a':
           system("COLOR 6F");
                 printf ("CAUTION! \n");
                 int a;
    printf("Press '1' for Main menu:: ");
    scanf("%d", &a);
    while(a==1){
            clrscr();
        usertype();
    }
                 break;
       case 'G':
       case 'g':
           system("COLOR 2F");
                 printf ("GO! \n");
                 int b;
    printf("Press '1' for Main menu:: ");
    scanf("%d", &b);
    while(b==1){
            clrscr();
        usertype();
    }
                 break;
       default:
           system("COLOR F");
                 printf ("The color is not valid.\n");
                 int y;
    printf("Press '1' for Main menu:: ");
    scanf("%d", &y);
    while(y==1){
            clrscr();
        usertype();
    }

   }
            }

void clrscr(){
    system("cls");
}
int main()
{
    system("COLOR 3A");
    printf("\n\n\t\t\t\t-------------------------------------\n");
    printf("\t\t\t\t||Traffic Control Management System||\n");
    printf("\t\t\t\t-------------------------------------\n");
    time_t t;
    time(&t);
    printf("\n\n\n\t\t\t    Today's Date & Time: %s", ctime(&t));
    printf("\n\n\t\t\t\t\t -------------\n");
    printf("\t\t\t\t\t || WELCOME ||\n");
    printf("\t\t\t\t\t -------------\n");
    printf("\n\n\n\n\t\t\t\t  Press ENTER  to continue..." );
    char y;
    scanf("%c",&y);
    clrscr();
    usertype();
    getch();
}
