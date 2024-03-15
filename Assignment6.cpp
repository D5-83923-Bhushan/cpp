#include<iostream>
using namespace std;

class Employee
{
     int id;
     float sal;

     public:
     Employee()
     {


     }
     Employee(int id,float sal):id(id),sal(sal)
     {

     }
     void setid(int id)
     {
        this->id=id;
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

     virtual void accept()
     {
        cout<<"Enter the id";
        cin>>id;
        cout<<"Enter the salary";
        cin>>sal;
     }
      virtual void display()
     {
        cout<<"ID is :"<<id<<endl;

        cout<<"salary is :"<<sal;

     }
     virtual ~Employee()
     {

     }

};
class manager :virtual public Employee
{   
    float bonus;

    public:
    manager()
    {
        bonus=0;
    }
     manager(int id,float sal,float bonus):Employee(id,sal)
     {
        
         this->bonus=bonus;
     }
    
    void setbonus(float bonus)
    {
        this->bonus=bonus;

    }
    float getbonus()
    {
        return bonus;
    }
     protected:
    void acceptmanager()
    {
         cout<<"Enter the bonus";
        cin>>bonus;

    }
    void displaymanger()
    {
       
        cout<<"Bonus is :"<<bonus;
    }
   public:
    void accept()
    {

        Employee::accept();
        acceptmanager();

    }
    void display()
    {
         Employee::display();
        displaymanger();
    }
     ~manager()
     {

     }
};

class salesman :virtual public Employee
{   
    float comm;

    public:
    salesman()
    {
        comm=0;
    }
     salesman(int id,float sal,float comm):Employee(id,sal)
     {
        this->comm=comm;

     }
    
    void setcomm(float comm)
    {
        this->comm=comm;

    }
    float getcomm()
    {
        return comm;
    }
    protected:
    void acceptsalesman()
    {

        cout<<"Enter the commision";
        cin>>comm;
        
    }
    void displaysalesman()
    {

        cout<<"commision is :"<<comm;
        
    }
     public:
     void accept()
    {
        Employee::accept();
        acceptsalesman();
    }
    void display()
    {
        Employee::display();
        displaysalesman();
    }
     ~salesman()
     {

     }

};
class salesmanager:public salesman,public manager
{ 
    public:
    salesmanager()
    {


    }
    salesmanager(int id, float sal,float bonus,float comm)
    { 
          this->setid(id);
    }
   void accept()
    {
        Employee::accept(); // id,sal
        acceptmanager();    // bonus
        acceptsalesman();   // comm
    }
    void display()
    {
        Employee::display();
        displaymanger();
        displaymanger();
    }
      ~salesmanager()
    {
        cout << "SalesManager Destructor" << endl;
    }


};

int main()
{


 salesmanager obj(1, 2000, 100, 200);

    obj.accept();
    obj.display();

}