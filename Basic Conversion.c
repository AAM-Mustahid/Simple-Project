#include <stdio.h>
#include <math.h>
#include <string.h>
long int Binary_to_Decimal(long int);
long int Binary_to_Octal(long int);
long int Binary_to_Hexadecimal(long int);
long int Decimal_to_Binary(long int);
long int Decimal_to_Octal(long int);
long int Decimal_to_Hexadecimal(long int);
long int Octal_to_Decimal(long int);
long int Octal_to_Binary(long int);
long int Octal_to_Hexadecimal(long int);
void Hexadecimal_to_Binary(char[]);
void Hexadecimal_to_Decimal(char[]);
void Hexadecimal_to_Octal(char[]);

int main()
{
    printf("--------------------------------------------------------------\n");
    printf("\t\tWelcome to Basic Conversion\n");
    printf("--------------------------------------------------------------\n");

    int operations, numbers = 0, checking, x;
    long int b, o, d;
    char h[100];
    while (numbers != 1)
    {
        printf("\t\t>>>Choose Your Conversion<<<\n");
        printf("---------------------\n");
        printf("|   => BINARY <=     |\n");
        printf("---------------------\n");
        printf("\n");
         printf("-------------------------------\n");
        printf("|   1: Binary to Decimal.     |\n");
        printf("|   2: Binary to Octal.       |\n");
        printf("|   3: Binary to Hexa-Decimal.|\n");
         printf("-------------------------------\n");
        printf("\n");
        printf("=> Decimal <=\n");
        printf("\n4:Decimal To Binary.\n5:Decimal to Octal.\n6:Decimal To Hexa-Decimal.\n");
        printf("\n");
        printf("=> Octal <=\n");
        printf("\n7:Octal To Decimal.\n8:Octal To Binary.\n9.Octal To Hexa-Decimal.\n");
        printf("\n");
        printf("\n=> HEXA-DECIMAL <=\n");
        printf("10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");

        printf("\nEnter Your Choice: ");
        scanf("%d", &operations);

        switch (operations)
        {
        case 1:
            printf("\nYou Have Selected\n\t\t ***Binary To Decimal***\n");
        D:
            printf("Enter Your Binary Number(0 & 1): ");
            scanf("%ld", &b);
            checking = b;
            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 1)
                {
                    printf("This is not Binary Number\n");
                    printf("Input Again\n");
                    goto D;
                }
                else
                    checking = checking / 10;
            }
            Binary_to_Decimal(b);
            break;

        case 2:
            printf("\n You Have Selected ***Binary To Octal***\n\n");
        E:
            printf("Enter Your Binary Number(0 & 1):  ");
            scanf("%ld", &b);
            checking = b;
            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 1)
                {
                    printf("This is not Binary Number\n");
                    printf("Input Again\n");
                    goto E;
                }
                else
                    checking = checking / 10;
            }
            Binary_to_Octal(b);
            break;

        case 3:

            printf("\n You Have Selected ***Binary To Hexa-Decimal***\n\n");
        F:
            printf("Enter Your Binary Number(0 & 1):  ");
            scanf("%ld", &b);
            checking = b;
            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 1)
                {
                    printf("This is not Binary Number\n");
                    printf("Input Again\n");
                    goto F;
                }
                else
                    checking = checking / 10;
            }
            Binary_to_Hexadecimal(b);
            break;
        case 4:
            printf("\n You Have Selected ***Decimal To Binary***\n\n");
            printf("Enter Your Decimal Number(0 to 9): ");
            scanf("%d", &d);
            Decimal_to_Binary(d);
            break;
        case 5:
            printf("\nYou Have Selected ***Decimal To Octal***\n\n");
            printf("Enter Your Decimal Number(0 to 9): ");
            scanf("%d", &d);
            Decimal_to_Octal(d);
            break;
        case 6:
            printf("\nYou Have Selected ***Decimal To Octal***\n\n");
            printf("Enter Your Decimal Number(0 to 9): ");
            scanf("%d", &d);
            Decimal_to_Hexadecimal(d);
            break;
        case 7:
            printf("\nYou Have Selected ***Octal To Decimal***\n\n");
        A:
            printf("Enter Your Octal Number(0 to 7): ");
            scanf("%d", &o);
            checking = o;
            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 7)
                {
                    printf("This is not Octal Number\n");
                    printf("Input Again\n");
                    goto A;
                }
                else
                    checking = checking / 10;
            }
            Octal_to_Decimal(o);
            break;
        case 8:
            printf("\nYou Have Selected ***Octal To Binary***\n\n");
        B:
            printf("Enter Your Octal Number(0 to 7): ");
            scanf("%d", &o);
            checking = o;
            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 7)
                {
                    printf("This is not Octal Number\n");
                    printf("Input Again\n");
                    goto B;
                }
                else
                    checking = checking / 10;
            }
            Octal_to_Binary(o);
            break;

        case 9:
            printf("\n***OCTAL TO HEXA-DECIMAL***\n");
        C:
            printf("\nEnter the Number in Octal form (0 to 7): ");
            scanf("%ld", &o);

            checking = o;

            while (checking != 0)
            {
                numbers = checking % 10;
                if (numbers > 7)
                {
                    printf("\n%d IS NOT OCTAL NUMBER.\n", numbers);
                    goto C;
                }
                else
                {
                    checking = checking / 10;
                    x++;
                }
            }
            Octal_to_Hexadecimal(o);
            break;

        case 10:
            printf("\n***HEXA-DECIMAL TO BINARY***\n");
        X:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", &h);
            // check
            for (x = strlen(h) - 1; x >= 0; x--)
            {
                if (h[x] > 'f' && h[x] <= 'z' || h[x] > 'F' && h[x] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", h[x]);
                    goto X;
                }
            }
            Hexadecimal_to_Binary(h);
            break;

        case 11:
            printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
        Y:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", &h);
            // check
            for (x = strlen(h) - 1; x >= 0; x--)
            {
                if (h[x] > 'f' && h[x] <= 'z' || h[x] > 'F' && h[x] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", h[x]);
                    goto Y;
                }
            }
            Hexadecimal_to_Decimal(h);
            break;

        case 12:
            printf("\n***HEXA-DECIMAL TO OCTAL***\n");
        Z:
            printf("\nEnter the Number in Hexa-Decimal form: ");
            scanf("%s", &h);
            // check
            for (x = strlen(h) - 1; x >= 0; x--)
            {
                if (h[x] > 'f' && h[x] <= 'z' || h[x] > 'F' && h[x] <= 'Z')
                {
                    printf("\nYou have to Enter Hexa-Decimal Number.\n");
                    printf("'%c' IS NOT Hexa-Decimal Number.\n", h[x]);
                    goto Z;
                }
            }
            Hexadecimal_to_Octal(h);
            break;

        default:
            printf("\n***INVALID NUMBER***\n");
            break;
        }
        printf("\n\n>>>If You want to Continue then press 0(YES) Otherwise 1(NO) <<<\n");
        scanf("%d", &numbers);
    }
}

long int Binary_to_Decimal(long int binary)
{
    int reminder, sum = 0, x = 0;
    while (binary != 0)
    {
        reminder = binary % 10;
        binary = binary / 10;
        sum += reminder * pow(2, x);
        x++;
    }
    printf("\nDECIMAL Number: %d\n", sum);
}
long int Binary_to_Octal(long int binary)
{

    int sum = 0, x = 0, reminder;
    int oct[50], len = 0;
    while (binary != 0)
    {
        reminder = binary % 10;
        binary = binary / 10;
        sum += reminder * pow(2, x);
        x++;
    }
    x = 0;
    while (sum != 0)
    {
        oct[x] = sum % 8;
        sum = sum / 8;
        x++;
        len++;
    }
    printf("\nYour Equivalent octal Number is: ");
    for (x = len - 1; x >= 0; x--)
    {
        printf("%d", oct[x]);
    }
}
long int Binary_to_Hexadecimal(long int binary)
{
    int sum = 0, x = 0, reminder;
    int hexa[50], len = 0;
    while (binary != 0)
    {
        reminder = binary % 10;
        binary = binary / 10;
        sum += reminder * pow(2, x);
        x++;
    }
    x = 0;
    while (sum != 0)
    {
        hexa[x] = sum % 16;
        sum = sum / 16;
        x++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for (x = len - 1; x >= 0; x--)
    {
        switch (hexa[x])
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d", hexa[x]);
        }
    }
}
long int Decimal_to_Binary(long int decimal)
{
    int rem[50], i = 0, len = 0;
    do
    {
        rem[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
        len++;
    } while (decimal != 0);
    i = 0;
    printf("\nYour Equivalent Binary Number: ");
    for (i = len - 1; i >= 0; i--)
    {
        printf("%d", rem[i]);
    }
}
long int Decimal_to_Octal(long int decimal)
{
    int rem[50], i = 0, len = 0;
    do
    {
        rem[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
        len++;
    } while (decimal != 0);
    i = 0;
    printf("\nYour Equivalent Octal Number: ");
    for (i = len - 1; i >= 0; i--)
    {
        printf("%d", rem[i]);
    }
}
long int Decimal_to_Hexadecimal(long int decimal)
{
    int rem[50], i = 0, len = 0;
    do
    {
        rem[i] = decimal % 16;
        decimal = decimal / 16;
        i++;
        len++;
    } while (decimal != 0);
    printf("\nEquivalent Hexa-Decimal Number : ");
    for (i = len - 1; i >= 0; i--)
    {
        switch (rem[i])
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d", rem[i]);
        }
    }
}
long int Octal_to_Decimal(long int octal)
{
    int decimals = 0, x = 0, answers;
    while (octal != 0)
    {
        answers = octal % 10;
        decimals += answers * pow(8, x);
        x++;
        octal /= 10;
    }
    printf("\nYour Equivalent Decimal Number: %d", decimals);
}
long int Octal_to_Binary(long int octal)
{
    int answers, decimals = 0, x = 0, len = 0, rem[50];
    while (octal != 0)
    {
        answers = octal % 10; // Octal to Decimal
        decimals += answers * pow(8, x);
        x++;
        octal = octal / 10;
    }
    x = 0;
    do
    {
        rem[x] = decimals % 2;
        x++;
        len++;
        decimals = decimals / 2;
    } while (decimals != 0);
    printf("\nEquivalent Binary Number: ");
    for (x = len - 1; x >= 0; x--)
    {
        printf("%d", rem[x]);
    }
}
long int Octal_to_Hexadecimal(long int oct)
{
    int remainder[50], length = 0, decimal = 0, x = 0, numbers, answers = 0;
    while (oct != 0)
    {
        answers = oct % 10;
        decimal = decimal + answers * pow(8, x);
        x++;
        oct = oct / 10;
    }
    x = 0;
    while (decimal != 0)
    {
        remainder[x] = decimal % 16;
        decimal = decimal / 16;
        x++;
        length++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for (x = length - 1; x >= 0; x--)
    {
        switch (remainder[x])
        {
        case 10:
            printf("A");
            break;

        case 11:
            printf("B");
            break;

        case 12:
            printf("C");
            break;

        case 13:
            printf("D");
            break;

        case 14:
            printf("E");
            break;

        case 15:
            printf("F");
            break;

        default:
            printf("%d", remainder[x]);
        }
    }
}
void Hexadecimal_to_Binary(char hex[])
{
    int x = 0;
    printf("\nEquivalent Binary Number : ");
    for (x = 0; x < strlen(hex); x++)
    {
        switch (hex[x])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
        case 'a':
            printf("1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;

        default:
            printf("\n Invalid hexa digit %c ", hex[x]);
        }
    }
}

void Hexadecimal_to_Decimal(char hex[])
{
    int x, numbers = 0, powered = 0, decimal = 0;

    for (x = strlen(hex) - 1; x >= 0; x--)
    {
        if (hex[x] == 'A' || hex[x] == 'a')
        {
            numbers = 10;
        }
        else if (hex[x] == 'B' || hex[x] == 'b')
        {
            numbers = 11;
        }
        else if (hex[x] == 'C' || hex[x] == 'c')
        {
            numbers = 12;
        }
        else if (hex[x] == 'D' || hex[x] == 'd')
        {
            numbers = 13;
        }
        else if (hex[x] == 'E' || hex[x] == 'e')
        {
            numbers = 14;
        }
        else if (hex[x] == 'F' || hex[x] == 'f')
        {
            numbers = 15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            numbers = hex[x] - 48;
        }

        decimal = decimal + numbers * pow(16, powered);
        powered++;
    }
    printf("\nEquivalent Decimal Number : %d", decimal);
}

void Hexadecimal_to_Octal(char hex[])
{
    int x, length, numbers = 0, powered = 0, decimal = 0, remainder[100];

    for (x = strlen(hex) - 1; x >= 0; x--)
    {
        if (hex[x] == 'A' || hex[x] == 'a')
        {
            numbers = 10;
        }
        else if (hex[x] == 'B' || hex[x] == 'b')
        {
            numbers = 11;
        }
        else if (hex[x] == 'C' || hex[x] == 'c')
        {
            numbers = 12;
        }
        else if (hex[x] == 'D' || hex[x] == 'd')
        {
            numbers = 13;
        }
        else if (hex[x] == 'E' || hex[x] == 'e')
        {
            numbers = 14;
        }
        else if (hex[x] == 'F' || hex[x] == 'f')
        {
            numbers = 15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            numbers = hex[x] - 48;
        }

        decimal = decimal + numbers * pow(16, powered);
        powered++;
    }

    x = 0, length = 0;
    while (decimal != 0)
    {
        remainder[x] = decimal % 8;
        decimal = decimal / 8;
        x++;
        length++;
    }
    printf("\nEquivalent Octal Number : ");
    for (x = length - 1; x >= 0; x--)
    {
        printf("%d", remainder[x]);
    }
}
