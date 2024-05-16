/*Q1 Create a Class Product having private attribute
Product id, product name, product rate and stock
 Now create following functions to process products
1)GetProducts() 
2)ShowProducts()
3)SearchProduct By Id, this function must be static
it means that u have to search the product in single 
line 
Like Product.search(ListOfProduct,200)
If product exist within an array it will return the
index of product other wise it will return -1*/


#include<iostream>
using namespace std;
class Product
{
    private:
        int id;
        char productname[30];
        int stock;
        float rate;
    public:
        void getProduct()
        {
            cout<<"Enter Product Id:";
            cin>>id;
            cout<<"Enter Product Name:";
            cin>>productname;
            cout<<"Enter Stock:";
            cin>>stock;
            cout<<"Enter Rate:";
            cin>>rate;
        }
        void showProduct()
        {
            cout<<"Product Id:"<<id<<endl;
            cout<<"Product Name:"<<productname<<endl;
            cout<<"Stock:"<<stock<<endl;
            cout<<"Rate:"<<rate<<endl;
        } 
        int searchbyId(int);
};
int Product::searchbyId(int ID)
{
    if(id==ID)
    return(1);
    else
    return(0);
}
int main()
{
    Product P[3];
    int i,id,ch,found=0;
    for(i=0; i<=2; i++)
    {
        P[i].getProduct();
    }
    do
    {
       cout<<"Main Menu\n1.Show All Products\n2.Search by id\n3.Exit"<<endl;
       cout<<"Enter Your Choice:"; 
       cin>>ch;
      switch(ch)
      {
          case 1:
            for(i=0; i<=2; i++)
            {
                P[i].showProduct();
            }
            break;
            case 2:
            cout<<"Enter Product Id You Want to search:";
            cin>>id;
              for(i=1; i<=3; i++)
              {
                found=P[i].searchbyId(id);
                if(found)
                {
                 P[i].showProduct();
                 break;}
              }
              if(!found)
              {
                  cout<<"Record Not Found...."<<endl;
              }
              break;
              case 3:
              break;
              default:
              cout<<"Wrong Key You Pressed....."<<endl;
      }

    } while (ch!=3);
    
}