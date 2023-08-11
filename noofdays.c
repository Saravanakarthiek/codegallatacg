#include<stdio.h>
int main()
{
  int date , month, year;  

  printf("Enter the date: ");
  scanf("%d",&date);
  printf("January-1\nFebruary-2\nMarch-3\nApril-4\nMay-5\njune-6\njuly-7\nAugust-8\nSeptember-9\nOctober-10\nNovember-11\nDeceber-12");
  printf("\nEnter the mounth: ");
  scanf("%d",&month);
  printf("\nEnter the year: ");
  scanf("%d",&year);
  switch(month)
    {
      case 1:
      printf("Total no of days:%d",date);
      break;
      case 2:
      printf("Total no of days:%d",31+date);
      break;
      case 3:
      printf("Total no of days:%d",(year%4==0)? 60+date:59+date);
      break;
      case 4:
      printf("Total no of days:%d",(year%4==0)? 91+date:90+date);
       break;
      case 5:
      printf("Total no of days:%d",(year%4==0)? 121+date:120+date);
       break;
      case 6:
      printf("Total no of days:%d",(year%4==0)? 152+date:151+date);
       break;
      case 7:
      printf("Total no of days:%d",(year%4==0)? 182+date:181+date);
       break;
      case 8:
      printf("Total no of days:%d",(year%4==0)? 213+date:212+date);
       break;
      case 9:
      printf("Total no of days:%d",(year%4==0)? 244+date:243+date);
       break;
      case 10:
      printf("Total no of days:%d",(year%4==0)? 274+date:273+date);
       break;
      case 11:
      printf("Total no of days:%d",(year%4==0)? 305+date:304+date);
       break;
      case 12:
      printf("Total no of days:%d",(year%4==0)? 335+date:334+date);
       break;
     
        
      default:
      printf("Invalid input");
    }
    return 0;
}
