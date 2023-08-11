#include <stdio.h>
#define p printf
int main() {
    int date, month, year, newdate, newmonth, last2, ly, ny, day1, dayno;
    printf("January-1\nFebruary-2\nMarch-3\nApril-4\nMay-5\nJune-6\nJuly-7\nAugust-8\nSeptember-9\nOctober-10\nNovember-11\nDecember-12");
    printf("\nEnter the month: ");
    scanf("%d", &month);
    month=month-1;

    if (month < 1 || month > 12) {
        printf("Invalid month input \n");
   
    } 
    else
    {
      
        printf("\nEnter the year: ");
        scanf("%d", &year);
        year=year-1;

        if (year < 1) 
        {
            printf("Invalid year input.\n");
            
        } 
        else 
        {
            switch(month)
    {
      case 1:
      printf("Total no of odd days on this month:%d",newmonth=3);
      break;
      case 2:
      printf("Total no of odd days on this month:%d",newmonth= 3);
      break;
      case 3:
      printf("Total no of odd days on this month:%d",newmonth= 6);
      break;
      case 4:
      printf("Total no of odd days on this month:%d",newmonth= 1);
       break;
      case 5:
      printf("Total no of odd days on this month:%d",newmonth= 4);
       break;
      case 6:
      printf("Total no of odd days on this month:%d",newmonth= 6);
       break;
      case 7:
      printf("Total no of odd days on this month:%d",newmonth= 2);
       break;
      case 8:
      printf("Total no of odd days on this month:%d",newmonth= 5);
       break;
      case 9:
      printf("Total no of odd days on this month:%d",newmonth= 0);
       break;
      case 10:
      printf("Total no of odd days on this month:%d",newmonth= 3);
       break;
      case 11:
      printf("Total no of odd days on this month:%d",newmonth= 5);
       break;
      case 12:
     printf("Total no of odd days on this month:%d",newmonth= 1);
       break;
 default:
      printf("Invalid input");}
            
  

            printf("\nEnter the date: ");
            scanf("%d", &date);

            newdate = date % 7;

            last2 = year % 100;
            ly = last2 / 4;
            ny = last2 - ly;

            day1 = newdate + newmonth + ly*2 + ny;
            dayno = day1 % 7;
          p("\nDate:%d/%d/%d",date,month+1,year+1);

             if(dayno==1)
   {
     p("\nDay:Monday");
   }
    else if (dayno==2)
    {
      p("\nDay:Tuesday");
    }
 else if (dayno==3)
    {
      p("\nDay:Wenesday");
    } 
 else if (dayno==4)
    {
      p("\nDay:Thursday");
    } 
 else if (dayno==5)
    {
      p("\nDay:Friday");
    } 
 else if (dayno==6)
    {
      p("\nDay:Saturday");
    } 
 else
    {
      p("Day:Sunday");
    }
          
        }
    }


    return 0;  
}
