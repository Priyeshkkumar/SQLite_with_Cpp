#include"SManagement.h"

int main()
{
    int id ;
    string name ;
    int marks ;
    DB O1 ;
    int choice ;
    do
    {
        cout<<"Enter Choice \n1.Create Table \n2.Show table \n3.Insert Data \n4.Delete an entry \n5.Exit: " ;
        cin>>choice ;
        switch(choice)
        {
        case 1:O1.createtable() ;
                  break;  
        
        case 2:O1.showtable() ;
                  break ;

        case 3:cout<<"\n\nEnter id: " ;
               cin>>id ;
               cout<<"Enter name: ";
               cin>>name ;
               cout<<"Enter total marks: " ;
               cin>>marks ;
               O1.insertdata(id , name, marks) ;
               break ;

            
        case 4:int id2 ;
               cout<<"Enter id:" ;
               cin>>id2 ;
               O1.deleteEntry(id2) ;
               break ;

        default:
            break;
        }
    } while (choice!=5);
    
    
}