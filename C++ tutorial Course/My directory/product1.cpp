#include<iostream>
using namespace std;
class Product
{
    private:
        int productID;
        char productname[30];
        int stock;
        int rate;
    public:
        void getProduct()
        {
            cout<<"Enter Product ID:";
            cin>>productID;
            cout<<"Enter Product Name:";
            cin>>productname; 
            cout<<"Enter Product Stock:";
            cin>>stock;
            cout<<"Enter rate of Product:";
            cin>>rate;
        }
        void putProduct()
        {
            cout<<"Product ID:"<<productID<<endl;
            cout<<"Product Name:"<<productname<<endl;
            cout<<"Stock:"<<stock<<endl;
            cout<<"Rate of Product:"<<rate<<endl;
        }
        void sale()
        {
            int qty,amt;
            cout<<"Enter Quantity You want to sale?";
            cin>>qty;
            if(stock>=qty)
            {
                amt=qty*rate;
                cout<<"Total amount of product afer saling:"<<amt<<endl;
                stock=stock-qty;
                cout<<"Available Stock:"<<stock<<endl;
            }
            else
            {
                cout<<"Less Stock....."<<endl;
            }
            
        }
        void purchase()
        {
            int qty;
            cout<<"Enter Quantity You Want To Purchase?";
            cin>>qty;
            stock=stock+qty;
            cout<<"Updaited Stock:"<<stock<<endl;
        }
        int search(int);
};
int Product::search(int id)
{
    if(productID==id)
    return(1);
    return(0);
}
int main()
{
    Product P[3];
    int i,ch,id,found=0;
    for(i=0; i<=2; i++)
    {
        P[i].getProduct();
    }
    do
    {
       cout<<"Main Menu\n1.Display All Products\n2.Search by ID\n3.Sale\n4.Purchase\n5.Exit"<<endl;
        cout<<"Enter Your Choice?";
        cin>>ch;
        switch(ch)
        {
            case 1:
            for(i=0; i<=2; i++)
            {
                P[i].putProduct();
            }break;
            case 2:
            cout<<"Enter Product ID that You Want  to Search?";
            cin>>id;
            for(i=0; i<=2; i++)
            {
                found=P[i].search(id);
                if(found)
                {P[i].putProduct(); break;}
            }
            if(!found)
            {
                cout<<"Record not Found...."<<endl;
            }break;
            case 3:
            cout<<"Enter Product ID that You Want to Sale?";
            cin>>id;
            for(i=0; i<=2; i++)
            {
                found=P[i].search(id);
                if(found)
                P[i].putProduct();
                P[i].sale();
                break;
            }
            if(!found)
            {
                cout<<"Record Not Found...."<<endl;
            }
            break;
            case 4:
            cout<<"Enter Product ID that You want to Purchase?";
            cin>>id;
             for(i=0; i<=2; i++)
            {
                found=P[i].search(id);
                if(found)
                P[i].putProduct();
                P[i].purchase();
                break;
            }
            if(!found)
            {
                cout<<"Record Not Found...."<<endl;
            }
            break;
            case 5:
            cout<<"Exit"<<endl;
            default:
            cout<<"Invalid key"<<endl;
            
        }
    } while (ch!=5);
    
}