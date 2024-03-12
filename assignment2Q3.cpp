#include<iostream>
#include<string.h>
using namespace std;

class Address
{
     string building;
     string street;
     string city;
     int pin;
      
    public:
     Address()
     {
        building="xxx";
        street="xxx";
        city="xxx";
        pin=1111;
     }
     Address(string building,string street,string city,int pin)
     {
          this->building=building;
          this->street=street;
          this->city=city;
          this->pin=pin;

     }
     void setbuilding()
     {
         cout<<"Enter the building";
         cin>>building;


     }
     string  getbuilding()
     {
       return building;
     }

     void setstreet()
     {
      cout<<"Enter the street";
      cin>>street;
     }
     string getstreet()
     {
      return street;

     }
    
     void setcity()
     {
        cout<<"Enter the city";
        cin>>city;

     }
     string getcity()
     {
        return city;
     }

     void setpin()
     {
         cout<<"Enter the pin";
         cin>>pin;
     }
     int getpin()
     {
        return pin;
     }

     void display()
     {
      cout<<"Building name is"<<building<<endl;
      cout<<"Street name is"<<street<<endl;  
      cout<<"city name is"<<city<<endl;
      cout<<"pin  is"<<pin;
      
     }

};
int main()
{
   Address a;
      a.setbuilding();
      a.getbuilding();
      
      a.setstreet();
      a.getstreet();

      a.setcity();
      a.getcity();
      
       a.setpin();
      a.getpin();
      a.display();
}