#include<iostream>
using namespace std;
int roll=1;
string name="Bhushan";
int marks=80;

namespace na
{
   int roll=2;
   string name="Dhwanil";
   int marks=85;
       
    namespace nb
    {
        int roll=3;
        string name="vedant";
        int marks=84;
        
    } 
    
}
class Student
{
    public:
        int roll=4;
        string name="Dhanjay";
        int marks=83;
        
   
};   

int main()
{
    Student obj;
    
    cout<<"roll is "<<obj.roll<<endl;
   
   cout<<"Roll is "<<roll<<endl;
   cout<<"Name is "<<::name<<endl;
   cout<<"mark is "<<::marks<<endl;
   cout<<"--------------------"<<endl;

   
   cout<<"Roll is "<<na::roll<<endl;
   cout<<"Name is "<<na::name<<endl;
   cout<<"mark is "<<na::marks<<endl;


   cout<<"--------------------"<<endl;

   cout<<"Roll is "<<na::nb::roll<<endl;
   cout<<"Name is "<<na::nb::name<<endl;
   cout<<"Marks is "<<na::nb::marks<<endl;
   

   cout<<"--------------------"<<endl;

   cout<<"Roll is "<<obj.roll<<endl;
   cout<<"Name is "<<obj.name<<endl;
   cout<<"Marks is "<<obj.marks<<endl;
   
}