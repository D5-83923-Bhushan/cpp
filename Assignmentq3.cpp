#include<iostream>
using namespace std;

class student
{

    int rollno;
    string name;
    int marks;
     
    public:
    void initStudent()
    { 
        rollno=0;
        name="Rohan";
        marks=80;
    }

    void acceptDateFromConsole()
    {  
        cout<<"Enter the roll no."<<endl;
        cin>>rollno;
        
        cout<<"Enter the name"<<endl;
        cin>>name;

        cout<<"Enter the marks."<<endl;
        cin>>marks;
    
    }

    void printStudentOnConsole()
    {
        cout<<"Student roll no:"<<rollno<<endl<<"Name is:"<<name<<endl<<"Marks is :"<<marks<<endl;

    }
};
int main()
{   
    student s;
    int ch;

   do{
    cout<<"1.initialize name"<<endl;
    cout<<"2.acceptdate name"<<endl;
    cout<<"3.print name "<<endl;
     cout<<"4.Exit "<<endl;

    cin>>ch;

    switch (ch)
    {
    case 1:
          s.initStudent();
        break;
    case 2:
          s.acceptDateFromConsole();  
        break;
     case 3:
          s.printStudentOnConsole();
        break;
    case 4:
        cout<<"Exit";          
        break;

    default:
      cout<<"Invalid choice";
        break;
    }
   }
   while (ch!=4);
   {
    cout<<"Thank youuu";
   }
   
}

