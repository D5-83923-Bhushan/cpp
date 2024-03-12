#include<stdio.h>
#include<string.h>
struct Date
{
    int day;
    int month;
    int year;

};
void initDate(struct Date* ptrDate)
{
     ptrDate->day=1;

     ptrDate->month=1;
     ptrDate->year=1;

}
void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter the day");
    scanf("%d", &ptrDate->day);

    printf("Enter the month");
    scanf("%d", &ptrDate->month);
    
    printf("Enter the year");
    scanf("%d", &ptrDate->year);
    
}
void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date is :%d/%d/%d ",ptrDate->day,ptrDate->month,ptrDate->year);
}

int main()
{  
    struct Date d;
    initDate(&d);
    int ch;
    do{
    printf("\n1.initialize date \n");
    printf("2.acceptdate\n");
    printf("3.printdate\n");
    printf("4.Exit\n");
    
    printf("Enter your choice");
    scanf("%d",&ch);
   
    switch (ch)
    {
    case  1:
         initDate(&d);
         printf("date is initialized");
        break;
    case 2:
         acceptDateFromConsole(&d);
         break;
    case 3:
         printDateOnConsole(&d);
         break;
        
    case 4:
         printf("Exiting  program.....");

         break; 
    default:
         printf("Please enter valid choice");
        break;
    }
   }
   while (ch!=4);
   {
    printf("Thank yoouu");
   }


}