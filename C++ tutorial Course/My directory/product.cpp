#include<iostream>
#include<string.h>
using namespace std;
class Product
{
    private:
        int productID;
        char name[30];
        float price;
    public:
        void getProduct()
        {
            cout<<"Enter Product ID:";
            cin>>productID;
            cout<<"Enter Product Name:";
            cin>>name;
            cout<<"Enter Price of Product:";
            cin>>price;
        }
        void putProduct()
        {
            cout<<"Product ID:"<<productID<<endl;
            cout<<"Product Name:"<<name<<endl;
            cout<<"Price:"<<price<<endl;
        }
        int search(int);
        int search(float,float);
        int search(char *);
};
int Product::search(int id)
{
    if(productID==id)
    return(1);
    else
    return(0);
}
int Product::search(float min,float max)
{
    if(price>=min && price<=max)
    {return(1);}
    return(0);
}
int Product::search(char *n)
{
     if(strcmpi(n,name)==0)
    return(1);
   else
    return(0);
}
int main()
{
    Product P[3];
    int i,ch,found=0,count=0,id;
    float min,max;
    char n[30];
    for(i=0; i<=2; i++)
    {
        P[i].getProduct();
    }
    do
    {
       cout<<"Main Menu\n1.Show All Product\n2.Search by Product ID\n3.Search by Min & Max\n4.Search by Name\n5.Exit"<<endl;
       cout<<"Enter Your Choice?";
       cin>>ch;
       switch(ch)
       {
           case 1:
           for(i=0;i<=2;i++)
            {
   	            P[i].putProduct();
            }  break;
            case 2:
            cout<<"Enter Product ID that you want to search?";
            cin>>id;
             for(i=0;i<=2;i++)
            {
   	            found=P[i].search(id);
   	            if(found)
                   {
		            P[i].putProduct();
		            break;
                    }
            }
            if(!found)
   	        { cout<<"Record Not Found...."<<endl;
	        }
	        break;
            case 3:
            cout<<"Search by Min & Max.."<<endl;
            cout<<"Enter Minimum Price:";
            cin>>min;
            cout<<"Enter Maximum Price:";
            cin>>max;
           for(i=0; i<=2; i++)
           {
               found=P[i].search(min,max);
               if(found)
               {
                   P[i].putProduct();
                   count++;
                }
           }cout<<"Total Record Found:"<<count<<endl;
           break;
           case 4:
           cout<<"Enter Product Name you Want to Serach?";
	        cin>>n;
            for(i=0;i<=2;i++)
            {
   	        found=P[i].search(n);
   	        if(found)
               {
		        P[i].putProduct();
		        count++;
		        }
            }
   	        if(count==0)
   	        {  
            cout<<"Record Not Found...."<<endl;
	        }
	        else
	        {
            cout<<"Record Found...."<<count<<endl;
	        }   
	        break;
            case 5:
            cout<<"Exit.."<<endl;
            break;
            default:
            cout<<"Invalid Key.."<<endl;
        }
    } while(ch!=5);
    
}