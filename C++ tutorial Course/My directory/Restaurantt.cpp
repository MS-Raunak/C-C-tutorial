#include<iostream>
#include<string.h>
using namespace std;
class Restaurant
{
    private:
        char foodtype[30];
        int foodid;
        char foodname[30];
        int foodprice;
    public:
        void getfood()
        {
            cout<<"Enter Food Type:";
            cin>>foodtype;
            cout<<"Enter Food Id:";
            cin>>foodid;
            cout<<"Enter Food Name:";
            cin>>foodname;
            cout<<"Enter Price:";
            cin>>foodprice;
        }
        void showfood()
        {
            cout<<"Food Type:"<<foodtype<<endl;
            cout<<"Food Id:"<<foodid<<endl;
            cout<<"Food Name:"<<foodname<<endl;
            cout<<"Food Price:"<<foodprice<<endl;
        }
        void showamount()
        {
            int amt;
            int TotalAmount;
            cout<<"Enter Your Amount?";
            cin>>amt;
            TotalAmount=amt*foodprice;
            cout<<"Total Amount:"<<TotalAmount<<endl;
        }
        int searchbyfoodid(int);
        int searchbyfoodtype(char *);
};
int Restaurant::searchbyfoodid(int id)
{
    if(foodid==id)
    return(1);
    return(0);
}
int Restaurant::searchbyfoodtype(char *type)
{
    if(strcmpi(type,foodtype)==0)
    return(1);
    return(0);
}
int main()
{
        Restaurant R[9];
        int i,ch,found=0,id;
        char type[30];
        for(i=0; i<=8; i++)
        {
            R[i].getfood();
        }
        do
        {
            cout<<"Main Menu\n1.Display Food\n2.Exit"<<endl;
            cout<<"Press 1 For Display Food\nPress 2 For Exit:";
            cin>>ch;
            switch(ch)
            {
                case 1:
                cout<<"Enter Food Type?"<<endl;
                cin>>type;
                if(strcmpi(type,"SouthIndian"))
                {    
                    cout<<"1.Masala Dosa\n2.Chicken Stew\n3.Paal Payasam\4.Exit\n"<<endl;
                    cout<<"Enter Your Choice?";
                    cin>>ch;
                    switch(ch)
                    {
                       case 1:
                       cout<<"Enter Food Id You Want to Search?";
                       cin>>id;
                       for(i=0; i<=8; i++)
                      {
                           found=R[i].searchbyfoodid(id);
                           if(found)
                           R[i].showfood();
                           R[i].showamount();
                           break;
                       }
                        if(!found)
                       cout<<"Sorry,This Food is Not Available..."<<endl;
                       break;

                       case 2:
                       cout<<"Enter Food Id You Want to Search?";
                        cin>>id;
                       for(i=0; i<=8; i++)
                       {
                           found=R[i].searchbyfoodid(id);
                           if(found)
                           R[i].showfood();
                           R[i].showamount();
                          break;
                       }
                       if(!found)
                       cout<<"Sorry,This Food is Not Available..."<<endl;
                       break;
                       case 3:
                       cout<<"Enter Food Id You Want to Search?";
                       cin>>id;
                       for(i=0; i<=8; i++)
                       {
                           found=R[i].searchbyfoodid(id);
                            if(found)
                            R[i].showfood();
                            R[i].showamount();
                            break;
                        }
                       if(!found)
                       cout<<"Sorry,This Food is Not Available..."<<endl;
                       break;
                       case 4:
                     cout<<"Good Bye.."<<endl;
                        break;
                        default:
                        cout<<"Sorry,Wrong Choice..."<<endl;
                    }
                }    

                else if(strcmpi(type,"NorthIndian"))
                {
                    cout<<"1.Pulaw\n2.Rajma Rice\n3.Puri\4.Exit"<<endl;
                    cout<<"Enter Your Choice?";
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                        cout<<"Enter Food Id You Want to Search?";
                        cin>>id;
                        for(i=0; i<=8; i++)
                        {
                            found=R[i].searchbyfoodid(id);
                            if(found)
                            R[i].showfood();
                            R[i].showamount();
                            break;
                        }
                        if(!found)
                        cout<<"Sorry,This Food is Not Available..."<<endl;
                        break;

                       case 2:
                       cout<<"Enter Food Id You Want to Search?";
                       cin>>id;
                       for(i=0; i<=8; i++)
                       {
                           found=R[i].searchbyfoodid(id);
                           if(found)
                           R[i].showfood();
                           R[i].showamount();
                           break;
                       }
                       if(!found)
                       cout<<"Sorry,This Food is Not Available..."<<endl;
                       break;
                       case 3:
                       cout<<"Enter Food Id You Want to Search?";
                       cin>>id;
                       for(i=0; i<=8; i++)
                       {
                           found=R[i].searchbyfoodid(id);
                           if(found)
                            R[i].showfood();
                            R[i].showamount();
                            break;
                        }
                       if(!found)
                       cout<<"Sorry,This Food is Not Available..."<<endl;
                       break;
                       case 4:
                       cout<<"Good Bye.."<<endl;
                       break;
                       default:
                       cout<<"Sorry,Wrong Choice..."<<endl;
                    }    
                }
               else if(strcmpi(type,"Chinese"))
               {
                    cout<<"1.Saap\n2.Bichhu\n3.Chamgadar\4.Exit"<<endl;
                    cout<<"Enter Your Choice?";
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                        cout<<"Enter Food Id You Want to Search?";
                         cin>>id;
                     for(i=0; i<=8; i++)
                     {
                         found=R[i].searchbyfoodid(id);
                         if(found)
                            R[i].showfood();
                            R[i].showamount();
                         break;
                     }
                     if(!found)
                     cout<<"Sorry,This Food is Not Available..."<<endl;
                     break;

                     case 2:
                     cout<<"Enter Food Id You Want to Search?";
                     cin>>id;
                     for(i=0; i<=8; i++)
                       {
                            found=R[i].searchbyfoodid(id);
                            if(found)
                            R[i].showfood();
                            R[i].showamount();
                            break;
                        }
                        if(!found)
                        cout<<"Sorry,This Food is Not Available..."<<endl;
                        break;
                        case 3:
                        cout<<"Enter Food Id You Want to Search?";
                        cin>>id;
                        for(i=0; i<=8; i++)
                        {
                            found=R[i].searchbyfoodid(id);
                            if(found)
                            R[i].showfood();
                            R[i].showamount();
                            break;
                        }
                        if(!found)
                        cout<<"Sorry,This Food is Not Available..."<<endl;
                        break;
                        case 4:
                        cout<<"Good Byee..."<<endl;
                        break;
                        default:
                        cout<<"Wrong Choice...."<<endl;
                    }
                }
            }
        } while (ch!=2);
        
}