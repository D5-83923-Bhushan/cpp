#include<iostream>
using namespace std;

class Date
{
   private:
   int day;
   int month;
   int year;


   public:
   void initDate()
   {
      day=1;
      month=1;
      year=1;
   }
  void acceptDateFromConsole()
  { 
    cout<<"Enter the day";
    cin>>day;

    cout<<"Enter the month";
    cin>>month;

    cout<<"Enter the year";
    cin>>year;
  }
  void printDateOnConsole()
  {
     cout<<" Day is :"<<day<<"Month is :"<<month<<"year is "<<year;

  }
  void leapYear()
  {
     if(year % 400 == 0)
     {
        cout<<"Leap year"<<endl;

     }
     else if(year % 4 == 0 && year % 100 != 0)
     {
         cout<<"Leap year"<<endl;
     }
     else{
        cout<<"year will be not"<<endl;
     }

  }
};
int main()
{
    
   Date d;
    int ch;
    do{
    cout<<"1.initialize date"<<endl;
    cout<<"2.acceptdate date"<<endl;
    cout<<"3.printdate "<<endl;
    cout<<"4.check leap year "<<endl;
    cout<<"5..exit "<<endl;

   cin>>ch;

   switch (ch)
   {
   case 1:
         d.initDate();
         cout<<"Date is initialized";
    break;
   case 2:
         d.acceptDateFromConsole();
         cout<<"Date is accepted";
    break;

    case 3:
         d.printDateOnConsole();  
    break;

   case 4:
         d.leapYear();
         break;
    case 5:
         cout<<"Exit....";

    break;

   default:
       cout<<"Please enter right choice";
    break;
   }
    }
   while (ch!=5);
   {
    cout<<"Thank youuuuu";
   }
   

}

