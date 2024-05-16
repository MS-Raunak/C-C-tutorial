#include<iostream>
using namespace std;

class Restaurant
{
	private:
		
		int foodid;
		char foodtype[50];
		char food[50];
		int foodprice;
		
	public:
		
		void getFood()
		{
			cout<<"Enter Food Id:";
			cin>>foodid;
			cout<<"Enter Food Type:";
			cin>>foodtype;
			cout<<"Enter Food:";
			cin>>food;
			cout<<"Enter Food Price:";
			cin>>foodprice;
		}
		
		void showFood()
		{
			cout<<"Food Id:"<<foodid<<endl;
			cout<<"Food Type:"<<foodtype<<endl;
			cout<<"Food:"<<food<<endl;
			cout<<"Food Price:"<<foodprice<<"-/"<<endl;
		}
		int searchById(int);
		int searchprice(int);
};

int Restaurant::searchById(int id)
{
	if(foodid==id)
	return(1);
	
	return(0);
}

int Restaurant::searchprice(int price)
{
	if(foodprice==price)
	return(1);
	
	return(0);
}

int main()
{
	Restaurant R[3];
	int i,id,ft,ch,qty,amt,price,found=0;
	char foodtype[50];
	
	for(i=0;i<=2;i++)
	{
		R[i].getFood();
	}
	
	do
	{
		cout<<"::Main Menu::\n1]:Display Food:\n2:Exit:"<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;
		if(ch==1)
		cout<<"Enter Your Food Type:";
		cin>>ft;
		if(ft==*foodtype)
		{
			cout<<"1]Chole Bhature.\n2]Soya Chaap.\n3]Paratha.4]Exit.";
			cout<<"Enter Your Food Choice:";
			cin>>ch;
		}
	
		
		else if(ft==*foodtype)
		{
			cout<<"1]Masla Dosa.\n2]Cheese Dosa.\n3]Sambhar Vada.\n4]Exit.";
			cout<<"Enter Your Food Choice:";
			cin>>ch;
		}
		
		
		else if(ft==*foodtype)
		{
			cout<<"1]Noodles.\n2]Momos.\n3]Spirng Roll.\n4]Exit.";
			cout<<"Enter Your Food Choice:";
			cin>>ch;
		}
		
		
		switch(ft)
		{
			case 1:
				
				for(i=0;i<=2;i++)
				{
					cout<<"Enter Food Id:";
					cin>>id;
					
					R[i].getFood();
					
					if(found)
					{
						cout<<"Enter Quantity Of Food:";
						cin>>qty;
						
						cout<<"Enter Price Of Food:";
						cin>>price;
						
						amt=price*qty;
						cout<<"Amout Of Food:"<<endl;
						
						R[i].searchById(id);
						R[i].searchprice(price);
						R[i].showFood();
						break;
					}
				}
				if(!found)
				{
					cout<<"Record Not Found...";
				}
				break;
				
			case 2:
				
				cout<<"Good Bye"<<endl;
	            break;
                default:
                cout<<"Wrong Choice";
		}
		
	}
	while(ch!=2);
}


