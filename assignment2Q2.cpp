#include<iostream>
using namespace std;

class tollbooth
{    
     int cars;
    double money=0;
    int nopaycars;
    double paycars;

     public:
     tollbooth()
     { 
         cars=0;
         money=0;
         nopaycars=0;
         paycars=0;
     }

     void payingCar()
     {
          cars++;
          money=money+0.50;
          ++paycars;
          
     }
    
     void nopayCar()
     {
        cars++;
        nopaycars++;
        
     }

     void display()
     {
          cout<<"Total Number of cars paying"<<paycars<<endl;
          cout<<"Total Number of non paying cars"<<nopaycars<<endl;


          cout<<"Total Number of cars "<<cars<<endl;
          cout<<"Total Number of money collected: "<<money<<endl;
            
     }

};
int main()
{
    tollbooth t;
    t.payingCar();
    t.nopayCar();
    t.display();
    t.payingCar();
    t.display();
    t.payingCar();
    t.display();

}