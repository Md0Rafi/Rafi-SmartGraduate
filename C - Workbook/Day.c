//PROGRAM TO CALCULATE THE DAY BY GETTING INPUTS AS DATE,MONTH AND YEAR

#include<stdio.h>
#include<conio.h>
#include<math.h>

int fm(int date, int month, int year)

{
     int fmonth, leap;

     //leap function 1 for leap & 0 for non-leap
     if ((year % 100 == 0) && (year % 400 != 0))
        leap = 0;
     else if (year % 4 == 0)
        leap = 1;
     else
        leap = 0;
        fmonth = 3 + (2 - leap) * ((month + 2) / (2 * month))+ (5 * month + month / 9) / 2;

     //bring it in range of 0 to 6
     fmonth = fmonth % 7;
     return fmonth;
}
//----------------------------------------------------------------------------------------

int day_of_week(int date, int month, int year)

{
     int dayOfWeek;
     int YY = year % 100;
     int century = year / 100;

     printf("\nDate : %d/%d/%d \n", date, month, year);
     dayOfWeek = 1.25 * YY + fm(date, month, year) + date - 2 * (century % 4);

     //remainder on division by 7
     dayOfWeek = dayOfWeek % 7;

     switch (dayOfWeek)
     {
         case 0:
            printf("\nWeekday = Saturday");
            break;
         case 1:
            printf("\nWeekday = Sunday");
            break;
         case 2:
            printf("\nWeekday = Monday");
            break;
         case 3:
            printf("\nWeekday = Tuesday");
            break;
         case 4:
            printf("\nWeekday = Wednesday");
            break;
         case 5:
            printf("\nWeekday = Thursday");
            break;
         case 6:
            printf("\nWeekday = Friday");
            break;
         default:
            printf("\nIncorrect data");
     }
     return 0;
}

//--------------------------------------------------------------------------------

void main()

{
     int date, month, year;

     printf("\nEnter the year : ");
     scanf("%d", &year);

     printf("\nEnter the month : ");
     scanf("%d", &month);

     printf("\nEnter the date : ");
     scanf("%d", &date);

     day_of_week(date, month, year);

     getch();
}
