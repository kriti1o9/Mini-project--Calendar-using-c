                                                                " CALENDAR  USING  C "
                                                                  
                                                                  
Project done by: A.NEHA PRIYA. (RA2111003010782)                                                                   
                 T.KRITHIKA.   (RA2111003010800)
Dept: B.Tech CSE CORE
Class: A2


#include <stdio.h>
#include <stdlib.h>
int get_1st_weekday(int year)
{
  int d;
  //using Zeller's Algorithm
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}
int main()
{
   int year,month,day,daysInMonth,weekDay=0,startingDay;
   printf("\nEnter your desired year: ");
   scanf("%d",&year);

   char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
   int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};

   if((year%4==0&&year%100!=0)||year%400==0)
       monthDay[1]=29;
   startingDay=get_1st_weekday(year);
   for(month=0;month<12;month++)
   {
      daysInMonth=monthDay[month];
      printf("\n\n---------------%s-------------------\n",months[month]);
      printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");
      for(weekDay=0;weekDay<startingDay;weekDay++)
        printf("     ");
      for(day=1;day<=daysInMonth; day++)
      {
        printf("%5d",day);
        if(++weekDay>6)
        {
            printf("\n");
            weekDay=0;
           }
        startingDay=weekDay;
      }
   }
}
          
OUTPUT:

Enter your desired year: 2022


---------------January-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
                                  1
    2    3    4    5    6    7    8
    9   10   11   12   13   14   15
   16   17   18   19   20   21   22
   23   24   25   26   27   28   29
   30   31

---------------February-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
              1    2    3    4    5
    6    7    8    9   10   11   12
   13   14   15   16   17   18   19
   20   21   22   23   24   25   26
   27   28

---------------March-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
              1    2    3    4    5
    6    7    8    9   10   11   12
   13   14   15   16   17   18   19
   20   21   22   23   24   25   26
   27   28   29   30   31

---------------April-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
                             1    2
    3    4    5    6    7    8    9
   10   11   12   13   14   15   16
   17   18   19   20   21   22   23
   24   25   26   27   28   29   30


---------------May-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
    1    2    3    4    5    6    7
    8    9   10   11   12   13   14
   15   16   17   18   19   20   21
   22   23   24   25   26   27   28
   29   30   31

---------------June-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
                   1    2    3    4
    5    6    7    8    9   10   11
   12   13   14   15   16   17   18
   19   20   21   22   23   24   25
   26   27   28   29   30

---------------July-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
                             1    2
    3    4    5    6    7    8    9
   10   11   12   13   14   15   16
   17   18   19   20   21   22   23
   24   25   26   27   28   29   30
   31

---------------August-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
         1    2    3    4    5    6
    7    8    9   10   11   12   13
   14   15   16   17   18   19   20
   21   22   23   24   25   26   27
   28   29   30   31

---------------September-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
                        1    2    3
    4    5    6    7    8    9   10
   11   12   13   14   15   16   17
   18   19   20   21   22   23   24
   25   26   27   28   29   30

---------------October-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
                                  1
    2    3    4    5    6    7    8
    9   10   11   12   13   14   15
   16   17   18   19   20   21   22
   23   24   25   26   27   28   29
   30   31

---------------November-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
              1    2    3    4    5
    6    7    8    9   10   11   12
   13   14   15   16   17   18   19
   20   21   22   23   24   25   26
   27   28   29   30

---------------December-------------------

  Sun  Mon  Tue  Wed  Thurs  Fri  Sat
                        1    2    3
    4    5    6    7    8    9   10
   11   12   13   14   15   16   17
   18   19   20   21   22   23   24
   25   26   27   28   29   30   31
