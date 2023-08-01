#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

typedef struct user
{
    char user_name[50];
    int age;
    float size;
    char phone_number[50];
    char password[50];
    char email[50];
} THIS_USER;

void OFFER(float *mycrt)
{
    float of = 0.4; // 40% offer for the selected items
    float offer;
    int i;

    offer = of * mycrt[0];

    mycrt[0] = mycrt[0] - offer;
    printf("The offer for NIKE cleat: %f\n", mycrt[0]);

    offer = of * mycrt[2];

    mycrt[2] = mycrt[2] - offer;
    printf("The offer for PUMA cleat: %f\n", mycrt[2]);

    offer = of * mycrt[3];

    mycrt[3] = mycrt[3] - offer;
    printf("The offer for SEGA cleat: %f\n", mycrt[3]);

    printf("\n");
}

void Print_cleat(float *My_Cart)
{
    for (int i = 0; i < 5; i++)
    {
        printf("The Cleat's rate in Rupees acc. to cart order with offer included: %f\n", My_Cart[i]);
    }
    printf("\n");
}
void TO_BUY_CLEAT(char *acc_no, int CVV, float *My_Cart)
{
    int choice, choice_1;
    char acc_no_1[25];
    int cvv;
    float Money_To_Be_Given;
    char con = 'y';
    char address[50];
    printf("\nWhat do you want to buy ?");
    printf("\nPress '1': To buy NIKE");
    printf("\nPress '2': To buy ADIDAS");
    printf("\nPress '3': To buy PUMA");
    printf("\nPress '4': To buy SEGA");
    printf("\nPress '5': To buy KIPSTA");
    printf("\nYour choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nWhat type of transaction do you want to do buddy?");
        printf("\nPress '1': For Online Transcation");
        printf("\nPress '0': Cash on delivery(COD)");
        printf("\nYour choice: ");
        scanf("%d", &choice_1);

        if (choice_1)
        {
            printf("\nWelcome to online transaction");
            printf("\nEnter your account number: ");
            scanf("%s", acc_no_1);
            if (!strcmp(acc_no, acc_no_1))
            {
                printf("\nAccount number valid!!");
                printf("\nEnter your CVV: ");
                scanf("%d", &cvv);
                if (cvv == CVV)
                {
                    while (con == 'y')
                    {
                        printf("\nProceed to transaction");
                        printf("\nEnter your address: "); // Plz enter addres without space
                        scanf("%s", &address);
                        printf("\nEnter the amount: ");
                        scanf("%f", &Money_To_Be_Given);
                        if (Money_To_Be_Given == My_Cart[0])
                        {
                            printf("\nMoney entered successfully");
                            printf("\nYour order for NIKE cleats has been placed successfully");
                            printf("\nYow will recieve your cleats in 7 days");
                            printf("\nHappy shopping!!");
                            break;
                        }
                        else
                        {
                            printf("\nMoney not entered corrctly");
                            printf("\nPlease recheck");
                            printf("\nDo want to re-enter your money [y/n]?");
                            scanf("%s", &con);
                        }
                    }
                }
                else
                {
                    printf("Transaction failed!!");
                }
            }
            else
            {
                printf("Invalid account number!!");
            }
        }
        if (!choice_1)
        {
            printf("\nWelcome to COD");
            printf("\nProceed to transaction");
            printf("\nEnter your address: "); // Plz enter addres without space
            scanf("%s", &address);
            printf("\nYour order for NIKE cleats has been placed successfully");
            printf("\nYow will recieve your cleats in 7 days");
        }
        break;
        //--------------------------------------------------------->
    case 2:
        printf("\nWhat type of transaction do you want to do buddy?");
        printf("\nPress '1': For Online Transcation");
        printf("\nPress '0': Cash on delivery(COD)");
        printf("\nYour choice: ");
        scanf("%d", &choice_1);

        if (choice_1)
        {
            printf("\nWelcome to online transaction");
            printf("\nEnter your account number: ");
            scanf("%s", acc_no_1);
            if (!strcmp(acc_no, acc_no_1))
            {
                printf("\nAccount number valid!!");
                printf("\nEnter your CVV: ");
                scanf("%d", &cvv);
                if (cvv == CVV)
                {
                    while (con == 'y')
                    {
                        printf("\nProceed to transaction");
                        printf("\nEnter your address: "); // Plz enter addres without space
                        scanf("%s", &address);
                        printf("\nEnter the amount: ");
                        scanf("%f", &Money_To_Be_Given);
                        if (Money_To_Be_Given == My_Cart[1])
                        {
                            printf("\nMoney entered successfully");
                            printf("\nYour order for ADIDAS cleats has been placed successfully");
                            printf("\nYow will recieve your cleats in 7 days");
                            printf("\nHappy shopping!!");
                            break;
                        }
                        else
                        {
                            printf("\nMoney not entered corrctly");
                            printf("\nPlease recheck");
                            printf("\nDo want to re-enter your money [y/n]?");
                            scanf("%s", &con);
                        }
                    }
                }
                else
                {
                    printf("Transaction failed!!");
                }
            }
            else
            {
                printf("Invalid account number!!");
            }
        }
        if (!choice_1)
        {
            printf("\nProceed to transaction");
            printf("\nEnter your address: "); // Plz enter addres without space
            scanf("%s", &address);
            printf("\nYour order for ADIDAS cleats has been placed successfully");
            printf("\nYow will recieve your cleats in 7 days");
        }
        break;
        //--------------------------------------------------------->
    case 3:
        printf("\nWhat type of transaction do you want to do buddy?");
        printf("\nPress '1': For Online Transcation");
        printf("\nPress '0': Cash on delivery(COD)");
        printf("\nYour choice: ");
        scanf("%d", &choice_1);

        if (choice_1)
        {
            printf("\nWelcome to online transaction");
            printf("\nEnter your account number: ");
            scanf("%s", acc_no_1);
            if (!strcmp(acc_no, acc_no_1))
            {
                printf("\nAccount number valid!!");
                printf("\nEnter your CVV: ");
                scanf("%d", &cvv);
                if (cvv == CVV)
                {
                    while (con == 'y')
                    {
                        printf("\nProceed to transaction");
                        printf("\nEnter your address: "); // Plz enter addres without space
                        scanf("%s", &address);
                        printf("\nEnter the amount: ");
                        scanf("%f", &Money_To_Be_Given);
                        if (Money_To_Be_Given == My_Cart[2])
                        {
                            printf("\nMoney entered successfully");
                            printf("\nYour order for PUMA cleats has been placed successfully");
                            printf("\nYow will recieve your cleats in 7 days");
                            printf("\nHappy shopping!!");
                            break;
                        }
                        else
                        {
                            printf("\nMoney not entered corrctly");
                            printf("\nPlease recheck");
                            printf("\nDo want to re-enter your money [y/n]?");
                            scanf("%s", &con);
                        }
                    }
                }
                else
                {
                    printf("Transaction failed!!");
                }
            }
            else
            {
                printf("Invalid account number!!");
            }
        }
        if (!choice_1)
        {
            printf("\nProceed to transaction");
            printf("\nEnter your address: "); // Plz enter addres without space
            scanf("%s", &address);
            printf("\nYour order for PUMA cleats has been placed successfully");
            printf("\nYow will recieve your cleats in 7 days");
        }
        break;
        //---------------------------------------------------------------->
    case 4:
        printf("\nWhat type of transaction do you want to do buddy?");
        printf("\nPress '1': For Online Transcation");
        printf("\nPress '0': Cash on delivery(COD)");
        printf("\nYour choice: ");
        scanf("%d", &choice_1);

        if (choice_1)
        {
            printf("\nWelcome to online transaction");
            printf("\nEnter your account number: ");
            scanf("%s", acc_no_1);
            if (!strcmp(acc_no, acc_no_1))
            {
                printf("\nAccount number valid!!");
                printf("\nEnter your CVV: ");
                scanf("%d", &cvv);
                if (cvv == CVV)
                {
                    while (con == 'y')
                    {
                        printf("\nProceed to transaction");
                        printf("\nEnter your address: ");
                        scanf("%s", &address);
                        printf("\nEnter the amount: ");
                        scanf("%f", &Money_To_Be_Given);
                        if (Money_To_Be_Given == My_Cart[3])
                        {
                            printf("\nMoney entered successfully");
                            printf("\nYour order for SEGA cleats has been placed successfully");
                            printf("\nYow will recieve your cleats in 7 days");
                            printf("\nHappy shopping!!");
                            break;
                        }
                        else
                        {
                            printf("\nMoney not entered corrctly");
                            printf("\nPlease recheck");
                            printf("\nDo want to re-enter your money [y/n]?");
                            scanf("%s", &con);
                        }
                    }
                }
                else
                {
                    printf("Transaction failed!!");
                }
            }
            else
            {
                printf("Invalid account number!!");
            }
        }
        if (!choice_1)
        {
            printf("\nProceed to transaction");
            printf("\nEnter your address: ");
            scanf("%s", &address);
            printf("\nYour order for SEGA cleats has been placed successfully");
            printf("\nYow will recieve your cleats in 7 days");
        }
        break;
        //---------------------------------------------------------------------------->
    case 5:
        printf("\nWhat type of transaction do you want to do buddy?");
        printf("\nPress '1': For Online Transcation");
        printf("\nPress '0': Cash on delivery(COD)");
        printf("\nYour choice: ");
        scanf("%d", &choice_1);

        if (choice_1)
        {
            printf("\nWelcome to online transaction");
            printf("\nEnter your account number: ");
            scanf("%s", acc_no_1);
            if (!strcmp(acc_no, acc_no_1))
            {
                printf("\nAccount number valid!!");
                printf("\nEnter your CVV: ");
                scanf("%d", &cvv);
                if (cvv == CVV)
                {
                    while (con == 'y')
                    {
                        printf("\nProceed to transaction");
                        printf("\nEnter your address: ");
                        scanf("%s", &address);
                        printf("\nEnter the amount: ");
                        scanf("%f", &Money_To_Be_Given);
                        if (Money_To_Be_Given == My_Cart[4])
                        {
                            printf("\nMoney entered successfully");
                            printf("\nYour order for KIPSTA cleats has been placed successfully");
                            printf("\nYow will recieve your cleats in 7 days");
                            printf("\nHappy shopping!!");
                            break;
                        }
                        else
                        {
                            printf("\nMoney not entered corrctly");
                            printf("\nPlease recheck");
                            printf("\nDo want to re-enter your money [y/n]?");
                            scanf("%s", &con);
                        }
                    }
                }
                else
                {
                    printf("Transaction failed!!");
                }
            }
            else
            {
                printf("Invalid account number!!");
            }
        }
        if (!choice_1)
        {
            printf("\nProceed to transaction");
            printf("\nEnter your address: ");
            scanf("%s", &address);
            printf("\nYour order for KIPSTA cleats has been placed successfully");
            printf("\nYow will recieve your cleats in 7 days");
        }

        break;
    }
}

int main()
{
    THIS_USER usr;
    int options, choice;
    char file_name[50], PH_NO[20], PWD[40];
    char cont = 'y';
    char MY_CART[5][30] = {"NIKE", "ADIDAS", "PUMA", "SEGA", "KIPSTA"}; // Names of the cleats
    float MY_CRT[5] = {6200, 5000, 4500, 1000, 3000};                   // True Amount of cleats in Rs
    int count = 0;
    char acc_no[] = "2334_1234_1234_1267"; // Valid account number
    int CVV = 433;                         // CVV of the card

    FILE *fp = NULL;
    printf("\nHi Buddy!!");
    printf("\nWhat do you want from us?");
    printf("\n1)Create a new account");
    printf("\n2)Login to your account");

    printf("\nIt's Your choice: ");
    scanf("%d", &options);

    // Creating a new account with given details by the user
    if (options == 1)
    {
        system("cls");
        printf("\nEnter the Username: ");
        scanf("%s", &(usr.user_name));
        printf("\nEnter your age: ");
        scanf("%d", &(usr.age));
        printf("\nEnter your foot size: ");
        scanf("%f", &(usr.size));
        printf("\nEnter your phone number: ");
        scanf("%s", &(usr.phone_number));
        printf("\nEnter your Password: ");
        scanf("%s", &(usr.password));
        printf("\nEnter your email: ");
        scanf("%s", &(usr.email));

        strcpy(file_name, usr.phone_number); // copying phone number to the file created
        fp = fopen(strcat(file_name, ".dat"), "w");
        fwrite(&usr, sizeof(THIS_USER), 1, fp);
        if (fwrite != 0)
        {
            printf("\nAccount created successfully!!");
        }
        else
        {
            printf("\nSomething went wrong please try again");
        }
    }
    fclose(fp);

    // Login to your account
    if (options == 2)
    {
        system("cls");
        printf("Enter your phone number: ");
        scanf("%s", &PH_NO);
        printf("Enter your password: ");
        scanf("%s", PWD);
        strcpy(file_name, PH_NO);
        fp = fopen(strcat(file_name, ".dat"), "r");
        if (fp == NULL)
        {
            printf("Ooops Account not registered!!");
        }

        else
        {
            fread(&usr, sizeof(THIS_USER), 1, fp);
            fclose(fp);
            if (!strcmp(PWD, usr.password))
            {

                while (cont == 'y')
                {
                    system("cls");
                    printf("\n1)Password Matched");
                    printf("\n2)Hi Buddy!!!");
                    printf("\n1)Press '1': To check items in cart");
                    printf("\n2)Press '2': For offers of cleats in the cart's order");
                    printf("\n3)Press '3': To buy your cleat");
                    printf("\nPress '4': To change Password");
                    printf("\nYour choice: ");
                    scanf("%d", &choice);

                    switch (choice)
                    {
                    case 1:

                        for (int i = 0; i < 5; i++)
                        {
                            if (*MY_CART[i] != '\0')
                            {
                                printf("%s\n", MY_CART[i]);
                                count++;
                            }
                            if (count == 5)
                            {
                                printf("The cart is FULL!!");
                            }
                        }
                        break;

                    case 2:
                        printf("\n");
                        printf("Hiii Buddy!!!\n");
                        printf("There are offers for you!!!\n");
                        printf("The offers are on NIKE, PUMA, SEGA!!\n");
                        printf("\n");
                        OFFER(MY_CRT);
                        Print_cleat(MY_CRT);
                        break;

                    case 3:
                        printf("\n");
                        Print_cleat(MY_CRT);
                        OFFER(MY_CRT);
                        Print_cleat(MY_CRT);
                        TO_BUY_CLEAT(acc_no, CVV, MY_CRT);
                        break;

                    case 4:
                        printf("Enter new password: ");
                        scanf("%s", &PWD);
                        fp = fopen(file_name, "w");
                        strcpy(usr.password, PWD);
                        fwrite(&usr, sizeof(THIS_USER), 1, fp);
                        if (fwrite != NULL)
                        {
                            printf("Password succesfully changed");
                        }
                    }

                    printf("\nDo you want to continue [y/n]?");
                    scanf("%s", &cont);
                }
            }

            else
            {
                printf("Invalid Password!!");
            }
        }
    }

    return 0;
}