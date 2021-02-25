//
//  main.c
//  assignment4_5_patriciaantlitz
//
//  Created by Patricia Antlitz on 2/24/21.
//
/*---------------------------------------------------------------------*/
     /* Student Name: Patricia Antlitz
      Submission Date: Feb 24, 2021
      Program 5: Write a program that determines the day number
      (1 to 366) in a year for a date that is provided as input data.
      As an example, January 1, 1994, is day 1, December 31, 1993,
      is day 365. December 31, 1996, is day 366 because 1996 was a
      leap year. A year is a leap year if it is divisible by four,
      except that any year divisible by 100 is a leap year only if it
      is divisible by 400. Your program should accept the month, day,
      and year as integers. It should output the day number and indicate
      if the year was a leap year or not.
      */
 /*
 * Week #: 3-4
 * Problem #: 5
 * Filename: assignment4_5_patriciaantlitz.c
 *
 * Notes:
 *        -  When running this program, the user is expected to use the CLI in their machine, or withing the IDE of their preference. If using an IDE, the user can click on either "run", "play", "compile" or "build" depending on the selected IDE.
     The user will then be asked to entera date in the format of Month Day Year. The program will check if the year is a leap year or not, and then print the corresponding day of the year for that specific year. If entering December 31 2021, the program should output the day as 365, if entering December 31 1996, the program should output the day as 366.
  
  I have used this chart as a source for the days:
  https://miniwebtool.com/day-of-year-calendar/?year=2021
  
    - This program has been entirely developed by me.
  
 * Sample Output:
    
  Enter a date in the following format: Month, Day Year (E.g., January, 31 2021
  February, 21 1996
  1996 - leap year.

  You Entered February, 21 1996.
  February, 21 is the day number 52 of the year 1996.

  Program ended with exit code: 0
     
 *
 */
/*-----------------------------------------------------------------------*/
//includes stdio library for main built-in functions used
#include <stdio.h>
//includes string library for string comparison
#include <string.h>

//function main will hold the code that runs this program
int main(int argc, const char * argv[]) {
    // insert code here...
    //variable of time char will hold a string, or array of charactes as the month
    char monthOfYear[11];
    //variable of type int will hold the day of the month
    int dayOfMonth;
    //the year entered by the user
    int yearNumber;
    // yearday will hold the value of yearNumber
    int yearDay;

    
    //asks the user to input a date
    printf("Enter a date in the following format: Month, Day Year (E.g., January, 31 2021\n");
    //listens to the date enteres as month
    scanf("%s", monthOfYear);
    //followed by the day and year
    scanf("%d %d", &dayOfMonth, &yearNumber);
    
    //assigns the user's entry for the day to yearDay
    yearDay = dayOfMonth;
    
    /* if statement checks if yearNumber is divisable by 400 and divisable by 100 to determ. if the year is a leap year, (e.g., 2000) or, it checks if the year is divisable by 4 (for years such as 1996) */
    if((yearNumber % 400 == 0 && yearNumber % 100 == 0) || (yearNumber % 4 == 0)){
        //prints the year entered as a leap year
        printf("%d - leap year.\n", yearNumber);
        /*inner if statement compares the value to variable monthYear, checks if the dayOfMonth are within January's days and if the year is larger than 0*/
        if((strcmp(monthOfYear, "January,")==0 || strcmp(monthOfYear, "january,")==0) || ((strcmp(monthOfYear, "January")==0 || strcmp(monthOfYear, "january")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
        //prints the selected date
        printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year
        printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, dayOfMonth, yearNumber);
        }
        /*compares the value to variable monthYear, checks if the dayOfMonth are within Feb's leap days and if the year is larger than 0*/
        else if((strcmp(monthOfYear, "February,")==0 || strcmp(monthOfYear, "february,")==0) || ((strcmp(monthOfYear, "February")==0 || strcmp(monthOfYear, "february")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 29) && (yearNumber > 0))){
            //prints the selected date
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year plus the corresponding days (31)
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+31, yearNumber);
        }
        /*compares the value to variable monthYear, checks if the dayOfMonth are within March's leap days and if the year is larger than 0*/
        else if((strcmp(monthOfYear, "March,")==0 || strcmp(monthOfYear, "march,")==0) || ((strcmp(monthOfYear, "March")==0 || strcmp(monthOfYear, "march")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year plus the corresponding days (60)
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+60, yearNumber);
        }
        /*compares the value to variable monthYear, checks if the dayOfMonth are within April's leap days and if the year is larger than 0*/
        else if((strcmp(monthOfYear, "April,")==0 || strcmp(monthOfYear, "april,")==0) || ((strcmp(monthOfYear, "April")==0 || strcmp(monthOfYear, "april")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 30) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year plus the corresponding days (91)
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+91, yearNumber);
        }
        /*compares the value to variable monthYear, checks if the dayOfMonth are within May's leap days and if the year is larger than 0*/
        else if((strcmp(monthOfYear, "May,")==0 || strcmp(monthOfYear, "may,")==0) || ((strcmp(monthOfYear, "May")==0 || strcmp(monthOfYear, "may")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year plus the corresponding days (121)
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+121, yearNumber);
        }
        else if((strcmp(monthOfYear, "June,")==0 || strcmp(monthOfYear, "june,")==0) || ((strcmp(monthOfYear, "June")==0 || strcmp(monthOfYear, "June")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 30) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year plus the corresponding days (152)
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+152, yearNumber);
        }
        else if((strcmp(monthOfYear, "July,")==0 || strcmp(monthOfYear, "july,")==0) || ((strcmp(monthOfYear, "July")==0 || strcmp(monthOfYear, "july")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year plus the corresponding days (182)
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+182, yearNumber);
        }
        else if((strcmp(monthOfYear, "August,")==0 || strcmp(monthOfYear, "august,")==0) || ((strcmp(monthOfYear, "August")==0 || strcmp(monthOfYear, "august")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year plus the corresponding days (213)
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+213, yearNumber);
        }
        else if((strcmp(monthOfYear, "September,")==0 || strcmp(monthOfYear, "september,")==0) || ((strcmp(monthOfYear, "September")==0 || strcmp(monthOfYear, "september")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 30) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year plus the corresponding days (244)
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+244, yearNumber);
        }
        else if((strcmp(monthOfYear, "October,")==0 || strcmp(monthOfYear, "october,")==0) || ((strcmp(monthOfYear, "October")==0 || strcmp(monthOfYear, "october")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year plus the corresponding days (274)
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+274, yearNumber);
        }
        else if((strcmp(monthOfYear, "November,")==0 || strcmp(monthOfYear, "november,")==0) || ((strcmp(monthOfYear, "November")==0 || strcmp(monthOfYear, "november")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 30) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year plus the corresponding days (305)
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+305, yearNumber);
        }
        else if((strcmp(monthOfYear, "December,")==0 || strcmp(monthOfYear, "december,")==0) || ((strcmp(monthOfYear, "December")==0 || strcmp(monthOfYear, "december")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //prints the day of the year plus the corresponding days (335)
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+335, yearNumber);
        } //error message for the inner if statement
        else{
            printf("Please try again with the following format: Month, Day Year");
        }
    } //else, if not a leap year:
    else{
        //print the year and the "not a leap year" statement
       printf("%d - not a leap year\n", yearNumber);
        //compare string for month, check days and year
        if((strcmp(monthOfYear, "January,")==0 || strcmp(monthOfYear, "january,")==0) || ((strcmp(monthOfYear, "January")==0 || strcmp(monthOfYear, "january")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){

        printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
        printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, dayOfMonth, yearNumber);
        }
        else if((strcmp(monthOfYear, "February,")==0 || strcmp(monthOfYear, "february,")==0) || ((strcmp(monthOfYear, "February")==0 || strcmp(monthOfYear, "february")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 28) && (yearNumber > 0))){
                
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //will add to the days as a regular year
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+31, yearNumber);
        }
        else if((strcmp(monthOfYear, "March,")==0 || strcmp(monthOfYear, "march,")==0) || ((strcmp(monthOfYear, "March")==0 || strcmp(monthOfYear, "march")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //will add to the days as a regular year
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+59, yearNumber);
        }
        else if((strcmp(monthOfYear, "April,")==0 || strcmp(monthOfYear, "april,")==0) || ((strcmp(monthOfYear, "April")==0 || strcmp(monthOfYear, "april")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 30) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //will add to the days as a regular year
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+90, yearNumber);
        }
        else if((strcmp(monthOfYear, "May,")==0 || strcmp(monthOfYear, "may,")==0) || ((strcmp(monthOfYear, "May")==0 || strcmp(monthOfYear, "may")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //will add to the days as a regular year
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+120, yearNumber);
        }
        else if((strcmp(monthOfYear, "June,")==0 || strcmp(monthOfYear, "june,")==0) || ((strcmp(monthOfYear, "June")==0 || strcmp(monthOfYear, "June")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 30) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //will add to the days as a regular year
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+151, yearNumber);
        }
        else if((strcmp(monthOfYear, "July,")==0 || strcmp(monthOfYear, "july,")==0) || ((strcmp(monthOfYear, "July")==0 || strcmp(monthOfYear, "july")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //will add to the days as a regular year
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+181, yearNumber);
        }
        else if((strcmp(monthOfYear, "August,")==0 || strcmp(monthOfYear, "august,")==0) || ((strcmp(monthOfYear, "August")==0 || strcmp(monthOfYear, "august")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //will add to the days as a regular year
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+212, yearNumber);
        }
        else if((strcmp(monthOfYear, "September,")==0 || strcmp(monthOfYear, "september,")==0) || ((strcmp(monthOfYear, "September")==0 || strcmp(monthOfYear, "september")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 30) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //will add to the days as a regular year
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+243, yearNumber);
        }
        else if((strcmp(monthOfYear, "October,")==0 || strcmp(monthOfYear, "october,")==0) || ((strcmp(monthOfYear, "October")==0 || strcmp(monthOfYear, "october")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //will add to the days as a regular year
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+273, yearNumber);
        }
        else if((strcmp(monthOfYear, "November,")==0 || strcmp(monthOfYear, "november,")==0) || ((strcmp(monthOfYear, "November")==0 || strcmp(monthOfYear, "november")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 30) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //will add to the days as a regular year
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+304, yearNumber);
        }
        else if((strcmp(monthOfYear, "December,")==0 || strcmp(monthOfYear, "december,")==0) || ((strcmp(monthOfYear, "December")==0 || strcmp(monthOfYear, "december")==0) && (dayOfMonth >= 1) && (dayOfMonth <= 31) && (yearNumber > 0))){
 
                printf("\nYou Entered %s %d %d.\n", monthOfYear, dayOfMonth, yearNumber);
            //will add to the days as a regular year
                printf("%s %d is the day number %d of the year %d.\n", monthOfYear, dayOfMonth, yearDay+334, yearNumber);
        }//error message for the inner if statement
        else{
            printf("Please try again with the following format: Month, Day Year");
        }
    }
    
    //prints a line between the outputs and the exit code
    printf("\n");
    //return successfull exit code 0
    return 0;
}
// end.
