#include<iostream>
#include<string.h>
 using namespace std;
 class Restaurant
 {
     private:
        int foodid;
        char foodtype[30];
        char foodname[30];
        float price;
    public:
        void getRestaurant()
        {
            cout<<"Enter Food ID:";
            cin>>foodid;
            cout<<"Enter food Type:";
            cin>>foodtype;
            cout<<"Enter Food Name:";
            cin>>foodname;
            cout<<"Enter Food Price:";
            cin>>price;
        }
        
        void ShowFoodType()
        {
            if(strcmpi(foodtype,"SouthIndian"))
            {
                if(strcmpi(foodname,"Idlidosa"))
                cout<<"Price of Idli Dosa:"<<price;
                if(strcmpi(foodname,"Masaladosa"))
                cout<<"Price of Masala Dosa:"<<price;
                if(strcmpi(foodname,"Hyderabadibiryani"))
                cout<<"Price of Hyderabadibiryani:"<<price;
            }
            if (strcmpi(foodtype,"NorthIndian"))
            {
                if(strcmpi(foodname,"Pulaw"))
                {
                    int qty;
                    cout<<"Enter Quantity:";
                    cin>>qty;
                    int TotalAmount=qty*price;
                     cout<<"Price of Pulaw:"<<TotalAmount<<endl;
                }
                else if(strcmpi(foodname,"Puri"))
                {
                    int qty;
                    cout<<"Enter Quantity:";
                    cin>>qty;
                    int TotalAmount=qty*price;
                    cout<<"Price of Puri:"<<TotalAmount<<endl;
                }
                else if(strcmpi(foodname,"Roti"))
                {
                    int qty;
                    cout<<"Enter Quantity:";
                    cin>>qty;
                    int TotalAmount=qty*price;
                    cout<<"Price of Roti:"<<TotalAmount<<endl;
                }
            }
            else if(strcmpi(foodtype,"Chinese"))
            {
                if(strcmpi(foodname,"Chauming"))
                {
                    int qty;
                    cout<<"Enter Quantity:";
                    cin>>qty;
                   int  TotalAmount=qty*price;
                     cout<<"Price of Chauming:"<<TotalAmount<<endl;
                }
               
                else if(strcmpi(foodname,"Momos"))
                {
                    int qty;
                    cout<<"Enter Qunqtity:";
                    cin>>qty;
                    int TotalAmount=qty*price;
                    cout<<"Price of Momos:"<<TotalAmount<<endl;
                }
                else if(strcmpi(foodname,"Chamgadar"))
               {
                   int qty;
                   cout<<"Enter Quantity:";
                   cin>>qty;
                   int TotalAmount=qty*price;
                    cout<<"Price of Chamgadar:"<<TotalAmount<<endl;
               }
            }
        }

        void putRestaurant()
        {
            cout<<"Food ID:"<<foodid;
            cout<<"Food Type:"<<foodtype;
            cout<<"Food Name:"<<foodname;
            cout<<"Food Price:"<<price<<endl;
        }
            
        int searchbyFoodId(int);
        int searchbyFoodType(char *n);
 };
 int Restaurant::searchbyFoodId(int id)
 {
     if(foodid==id)
     return(1);
     return(0);
 }
 int Restaurant::searchbyFoodType(char *n)
 {
     if(strcmpi(n,foodtype)==0)
     return(1);
     return(0);
 }
 int main()
 {
     Restaurant R[9];
     int i,ch,found=0,id,qty;
     char type[30];
     for(i=0; i<=8; i++)
     {
         R[i].getRestaurant();
     }
     do
     {
         cout<<"Main Menu\n1.Display Food\n2.Exit"<<endl;
         cout<<"Enter Your Choice?";
         cin>>ch;
         switch(ch)
         {
             case 1:
            
        
                cout<<"1.South Indian Food\n2.Nort Indian Food\n3.Chinese Food\n4.Exit"<<endl;
                cout<<"Enter Your Choice?";
                cin>>ch;
                switch(ch)
                {
                     case 1:
                    cout<<"1.Masala Dosa\n2.Idaly Dosa\n3.Hyderabadi Biryani"<<endl;
                    cout<<"Enter Your Choice?";
                    cin>>ch;
                    switch(ch)
                    {
                     case 1:
                     cout<<"Enter Your Quqntity?";
                     cin>>qty;
                     for(i=0; i<=8; i++)
                     {
                          found=R[i].searchbyFoodId(id);
                         if(found)
                         R[i].putRestaurant();
                        R[i].ShowFoodType();
                        break;
                     }
                        if(!found)
                         cout<<"Sorry...."<<endl;
                        break;
                 
                        case 2:
                        cout<<"1.Pulaw\n2.Chhola Bhatura\n3.Panir Farata\n4.Exit"<<endl;
                         cin>>id;
                         for(i=0; i<=8; i++)
                         {
                             found=R[i].searchbyFoodId(id);
                             if(found)
                             R[i].putRestaurant();
                              R[i].ShowFoodType();
                                break;
                         }
                        if(!found)
                         cout<<"Sorry...."<<endl;
                         break;

                         case 3:
                         cout<<"Enter Food Id You Want To Search?";
                         cin>>id;
                         for(i=0; i<=2; i++)
                         {
                             found=R[i].searchbyFoodId(id);
                             if(found)
                             R[i].putRestaurant();
                          R[i].ShowFoodType();
                            break;
                        }
                        if(!found)
                         cout<<"Sorry...."<<endl;
                         break;
                         case 4:
                         cout<<"Thank You For Visiting"<<endl;
                        default:
                        cout<<"Wrong Choice..."<<endl;
                    }
                }
           
             case 2:
             cout<<"Exit.."<<endl;
             default:
             cout<<"Wrong Choice..."<<endl;
         }   
     } while (ch!=2);
 }