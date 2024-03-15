#include<iostream>
using namespace std;

class date
{
    int day;
    int month;
    int year;
    


    public:
    date()
    {

       day=1;
       month=1;
       year=1;
       

    }
    date(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void setday(int day)
    {
        this->day=day;

    }
    int getday()
    {
       return day;
    }

    void setmonth(int month)
    {
        this->month=month;
    }
    int getmonth()
    {
        return month;

    }
    void setyear(int year)
    {
        this->year=year;
    }
    int getyear()
    {
        return year;
    }
    

    void accept( )
    {
        cout<<"Enter the day";
        cin>>day;
        cout<<"Enter the month";
        cin>>month;

        cout<<"Enter the year";
        cin>>year;
        
        
    }
    void display()
    {
        cout<<"Date is :"<<day<<"/"<<month<<"/"<<year;

    }
};

class person 
{
    string name;
    string address;
    date obj;

    public:
    person()
    {
        string name="xx";
        string address="zzz";

    }
    person(string name,string address)
    {
        this->name=name;
        this->address=address;


    }
    void setname(string name)
    {
       this->name=name;

    }
    string getname()
    {
        return name;
    }
     void setaddress(string address)
    {
       this->address=address;

    }
    string getname1()
    {
        return address;
    }
    void accept()
    {
        cout<<"Enter the name";
        cin>>name;

        cout<<"Enter the address";
        cin>>address;

        obj.accept();

    }  
    void display()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"address is "<<address<<endl;
        obj.display();
        
    }

};
class employee:public person
{
     int id;
     float sal;
     string department;

     
     public:
     employee()
     {
        int id=1;
        float sal;
        string department;

     }
     employee(int id,float sal,string department)
     {
        this->id=id;
        this->sal=sal;
        this->department=department;
     }
     void setid(int id)
     {
        this->id;
     }
     int getid()
     {
        return id;

     }
     void setsal(float sal)
     {
        this->sal=sal;
     }
     float getsal()
     {
        return sal;

     }
     void setstring(string department)
     {
        this->department=department;
     }
     int getstring()
     {
        return id;
     }
     void accept()
     {
        cout<<"Enter the id"<<endl;
        cin>>id;
        cout<<"Enter the salary"<<endl;
        cin>>sal;

        cout<<"Enter the department"<<endl;
        cin>>department;
        person::accept();

     }
     void display()
     {
        cout<<"Employee id is : "<<id<<" "<<"employee salaray is : "<<sal<<" "<<"Employee department is :"<<department<<" "<<endl;
        person::display();
     }

};

int main()
{
    //  date d;
    // //  d.getdata();
    //  person d1;
    //  d1.getdataperson();
     employee e1;
     e1.accept();
     e1.display();

}