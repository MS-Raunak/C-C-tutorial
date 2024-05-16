#include<iostream>
using namespace std;

class Product
{
	private:
		
		int proid;
		char name[30];
		int rate;
		int stock;
		
	public:
		
		void getProduct()
		{
			cout<<"Enter Product Id:";
			cin>>proid;
			cout<<"Enter Product Name:";
			cin>>name;
			cout<<"Enter Product Rate:";
			cin>>rate;
			cout<<"Enter Product Stock:";
			cin>>stock;
		}
		
		void putProduct()
		{
			cout<<"Product Id:"<<proid<<endl;
			cout<<"Product Name:"<<name<<endl;
			cout<<"Product Rate:"<<rate<<"-/"<<endl;
			cout<<"Product Stock:"<<stock<<endl;
		}
		
		void sale()
		{
			int qty,amt;
			
			cout<<"Enter Quantity You Want To Sale?";
			cin>>qty;
			
			 if(stock>=qty)
            {
            	amt=rate*qty;
            	cout<<"Amount is"<<amt<<"-/"<<endl;
            	
            	stock=stock-qty;
            	cout<<":Updated Stock:"<<stock<<endl;
			}
		}
		
		void purchase()
		{
		    int qty,stock,amt;
		
			cout<<"Enter Quantity You Want To Purchase?";
			cin>>qty;
			
			amt=rate*qty;
            cout<<"Amount is"<<amt<<"-/"<<endl;
			
			stock=qty+stock;
			cout<<":Updated Stock:"<<stock<<endl;
		}
		
		int searchById(int);
};

int Product::searchById(int id)
{
	if(proid==id)
	return(1);
	
	else
	return(0);
}

int main()
{
	Product P[3];
	int i,id,found,ch;
	
	for(i=0;i<=2;i++)
	{
		P[i].getProduct();
	}
	
	do
	{
		 cout<<"::MAIN MENU::\n1]:Display All Products:\n2]:Search By Id:\n3]:Sale:\n4]:Purchase:\n5]:Eixt:"<<endl;
		 cout<<"Enter Your Choice:";
		 cin>>ch;
		 
		 switch(ch)
		 {
		 	case 1:
		 		for(i=0;i<=2;i++)
		 		{
		 			P[i].putProduct();
				 }
				 break;
				 
				 case 2:
				 	
				 	cout<<"Enter Product Id You Want To Search?";
				 	cin>>id;
				 	
				 	for(i=0;i<=2;i++)
				 	{
				 		found=P[i].searchById(id);
				 		
				 		if(found)
				 		{
				 			P[i].putProduct();
				 			break;
						 }
					}
						 if(!found)
						 {
						 	cout<<"Record Not Found.....";
						 }
						 break;
						 
				 case 3:
				 	
				    cout<<"Enter Product Id You Want To Sale?";
				    cin>>id;
				    
				    for(i=0;i<=2;i++)
				    {
				    	found=P[i].searchById(id);
				    	
				    	if(found)
				    	{
				    		P[i].putProduct();
				    		P[i].sale();
				    		break;
						}
					}
					if(!found)
					{
						cout<<"Record Not Found....";
					}
					break;
					 
				 case 4:
				 	
				    cout<<"Enter Product Id You Want To Purchase?";
				    cin>>id;
				    
				    for(i=0;i<=2;i++)
				    {
				    	found=P[i].searchById(id);
				    	
				    	if(found)
				    	{
				    		P[i].putProduct();
				    		P[i].purchase();
				    		break;
						}
					}
					if(!found)
					{
						cout<<"Record Not Found.....";
					}
					break;
					 
				 case 5:
				 	
				 cout<<"Good Bye"<<endl;
                
    
             	break;
                default:
                cout<<"Wrong Choice";	
	    }
	}
	while(ch!=5);
}