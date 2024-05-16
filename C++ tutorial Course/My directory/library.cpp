#include<iostream>
#include<string.h>
using namespace std;
class Library
{
    private:
        int bookid;
        char title[30];
        char sub[30];
        char author[30];
        int price;
        char status[10];
    public:
        void getbook()
        {
            cout<<"Enter Book ID:";
            cin>>bookid;
            cout<<"Enter Book Name:";
            cin>>title;
            cout<<"Enter Subject:";
            cin>>sub;
            cout<<"Enter Author:";
            cin>>author;
            cout<<"Enter Price Of Book:";
            cin>>price;
            cout<<"Enter Status:";
            cin>>status;
        }
        void putbook()
        {
            cout<<"Book ID:"<<bookid<<endl;
            cout<<"Book Title:"<<title<<endl;
            cout<<"Subject:"<<sub<<endl;
            cout<<"Author:"<<author<<endl;
            cout<<"Price:"<<price<<endl;
            cout<<"Status:"<<status<<endl;
        }
        void issuebook()
        {
          if(strcmpi(status,"avl")==0)
          cout<<"Book Issued"<<endl;
          if(strcmpi(status,"navl")==0)
          cout<<"Book Not Available"<<endl;
        }
        void receivebook()
        {
          cout<<"Book Received"<<endl;
          strcmpi(status,"avl");
        }
        int search(int);
};
int Library::search(int id)
{
  if(bookid==id)
  return(1);
  return(0);
}
int main()
{
  Library L[3];
  int i,id,ch,found=0;
  for(i=0; i<=2; i++)
  {
    L[i].getbook();
  }
  do
  {
    cout<<"Main Menu\n1.Display All Books\n2.Search by ID\n3.Issue Book\n4.Receive Book\n5.Exit"<<endl;
    cout<<"Enter Your Choice?";
    cin>>ch;
    switch(ch)
    {
        case 1:
        for(i=0; i<=2; i++)
        {
          L[i].putbook();
        }break;
        case 2:
        cout<<"Enter book id that you want to search?";
        cin>>id;
        for(i=0; i<=2; i++)
        {
          found=L[i].search(id);
          if(found)
          {L[i].putbook();}
        }break;
        if(!found)
        {cout<<"Record not Found...."<<endl;}
        break;
        case 3:
        cout<<"Enter Book ID for Book Issue:";
        cin>>id;
        for(i=0; i<=2; i++)
        {
          found=L[i].search(id);
          if(found)
          {L[i].putbook();
          L[i].issuebook();}
        }break;
        if(!found)
        {cout<<"Record not found..."<<endl;}
        break;
        case 4:
        cout<<"Ener book id that you want to receive:";
        cin>>id;
        for(i=0; i<=2; i++)
        {
          found=L[i].search(id);
          if(found)
          L[i].putbook();
          L[i].receivebook();
        }break;
        if(!found)
        {cout<<"Record not found..."<<endl;}
        break;
        case 5:
        cout<<"Exit"<<endl;
        default:
        cout<<"Wrong key you input..."<<endl;
    }
  } while (ch!=5);
  
}