#include <stdio.h>
#include <cs50.h>



int main(void)
{

long cardnumber = get_long("Write Creditcartnumber: ");

int sum = 0;
int positon = 0;
long temporarycard = cardnumber;

while (temporarycard > 0)
{
  int figutr = temporarycard % 10;

if (positon % 2 == 1)
{
    figutr *= 2;
   if  figutr = figutr / 10 + figutr % 10;


   sum += digit;
        temporarycard /= 10;
        position++;
}


 if (length == 15 && (first_two == 34 || first_two == 37))
    {
        printf("AMEX\n");
    }
    else if (length == 16 && (first_two >= 51 && first_two <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((length == 13 || length == 16) && first_one == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }




}
}


