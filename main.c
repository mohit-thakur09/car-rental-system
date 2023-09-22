#include <stdio.h>
#include <string.h>
#include "car.h"
#include "conio2.h"
#include <time.h>

int main()
{
     gotoxy(46,12);
     textcolor(YELLOW);
     printf("WELCOME TO CAR RENTAL SYSTEM");
     gotoxy(42,14);
     textcolor(LIGHTGREEN);
     printf("RENT A CAR AND GO WHEREVER YOU WANT\n");
     getch();
     textcolor(YELLOW);
     addAdmin();
     addEmployee1();
    User* user;
    int result,type,i,choice;
    while(1)
    {
        clrscr();
        textcolor(LIGHTCYAN);
        gotoxy(47,5);
        printf("CAR RENTAL SYSTEM");
        //upper line

        gotoxy(1,8);
        textcolor(YELLOW);
        for(i=0;i<120;i++)
            printf("*");
        //lower line
        gotoxy(1,17);
        for(i=0;i<120;i++)
            printf("*");
        gotoxy(46,10);
        textcolor(YELLOW);
        printf("1.ADMIN");

        gotoxy(46,12);
        printf("2.EMPLOYEE");
        gotoxy(46,14);
        textcolor(LIGHTMAGENTA);
        int k;
        printf("select your role:");


        do{

                //while(getch()==13 || getch()==32)
                         //printf("");


            scanf("%d",&type);
            //while(getch()==13 || getch()==32)
                        // printf("");


            k=0;
            if(type==1)
            {

                   do{

                    user = getInput();
                    if(user!=NULL)
                    {
                        k = checkUserExist(*user,"admin");
                        //code for validation user_id and password

                    }
                    else
                    {
                        break;
                    }


            }
            while(k==0);
             if(k==1)
            {
                gotoxy(30,14);
                textcolor(LIGHTGREEN);
                printf("Login Accepted");
                gotoxy(1,20);
                textcolor(WHITE);
                printf("Enter any key to continue");

                getch();
                while(1)
                {
                    clrscr();
                    choice = adminMenu();

                    if(choice==7)
                    {   clrscr();
                        break;
                    }
                    switch(choice)
                    {
                    case 1:


                        addEmployee();
                        break;

                    case 2:
                        addCarDetails();
                       break;
                    case 3:
                        clrscr();
                        viewEmployee();
                        break;
                    case 4:

                        clrscr();


                        showCarDetails();
                        break;
                   case 5:
                         clrscr();
                         result= deleteEmp();
                         if(result==0)
                         {
                             gotoxy(15,14);
                             textcolor(LIGHTRED);
                             printf("Sorry! NO Employee found with the given Employee Id");
                             textcolor(WHITE);
                             printf("\n\nPress any key to go back to main manu");
                             getch();


                         }
                         else if(result==1)
                         {
                             gotoxy(25,14);
                             textcolor(LIGHTRED);
                             printf("Record delete Successfully");
                             textcolor(WHITE);
                             printf("\n\nPress any key to go back to main manu");

                             getch();

                         }


                         break;
                   case 6:
                     clrscr();
                                 result = deleteCarModel();
                                 if(result == 0)
                                 {
                                     gotoxy(15,14);
                                     textcolor(LIGHTRED);
                                     printf("Sorry! No Car Found with The given Car ID");
                                     textcolor(WHITE);
                                     printf("\n\nPress any key to go back to the main menu");
                                     _getch();
                                 }
                                 else if(result == 1)
                                 {
                                     gotoxy(25,14);
                                     textcolor(LIGHTGREEN);
                                     printf("Record Deleted Successfully!");
                                     textcolor(WHITE);
                                     printf("\n\nPress any key to go back to the main menu");
                                     _getch();
                                 }
                                 break;
                             default:
                                 printf("Incorrect Choice!");
                                 _getch();
                         }//switch close

                }

            }

            }



            else if(type==2)
            {
                //code for handling employee login

                   do{

                    user = getInput();
                    if(user!=NULL)
                    {
                        k = checkUserExist(*user,"employee");
                        //code for validation user_id and password

                    }
                    else
                    {
                        break;
                    }


            }while(k==0);
           if(k==1)
            {
                gotoxy(30,14);
                textcolor(LIGHTGREEN);
                printf("Login Accepted");
                gotoxy(1,20);
                textcolor(WHITE);
                printf("Enter any key to continue");
                getch();
                while(1)
                {
                    clrscr();
                    choice = empMenu();
                    if(choice==5)
                    {   clrscr();
                        break;
                    }
                    switch(choice)
                    {
                    case 1:
                        clrscr();
                        int j;
                        do
                        {
                            clrscr();
                            j=rentCar();
                            if(j==0)
                                printf("Booking Cancelled\nTry again");
                            getch();

                        }
                        while (j==0);
                        _getch();


                        break;

                    case 2:
                        clrscr();
                        bookedCarDetails();
                        getch();
                       break;

                    case 3:
                        clrscr();
                         availableCarDetails();
                        getch();
                        break;
                    case 4:

                        clrscr();

                        showCarDetails();
                        getch();
                        break;

                   case 5:
                         clrscr();
                         deleteEmp();

                         break;

                    default :
                        printf("Incorrect choice");
                        getch();
                }
                }

            }

            }


            else
            {
                textcolor(LIGHTRED);
                gotoxy(30,20);
                printf("Invalid User Type!");
                getch();
                gotoxy(30,20);
                printf("\t\t\t");
                gotoxy(49,14);
                printf("\t");
                gotoxy(50,14);
                textcolor(WHITE);
            }
           }

            while(type!=1 && type!=2);
        }
    return 0;
        }
