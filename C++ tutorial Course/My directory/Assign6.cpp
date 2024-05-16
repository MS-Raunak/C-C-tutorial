//6 		Define a class BOOK with the following specifications :
//Private members of the class BOOK are
//BOOK NO                integer type
#include<iostream>
using namespace std;
class Book
{
    private:
        int bookNo;
        char bookTitle[30];
        float price;
        float TOTALCOST(int n)
        {
            float total;
			total=price*n;
			return (total);
        }
    public:
        void INPUT()
        {
            cout<<"Enter Book No:";
            cin>>bookNo;
            cout<<"Enter Book Title:";
            cin>>bookTitle;
            cout<<"Enter Price:";
            cin>>price;
        }
        void PURCHASE()
        {
            int n;
			cout<<"Enter Number Of Copies To Be Purchased:";
			cin>>n;
            float c=TOTALCOST(n);
            cout<<"Total Cost:"<<c<<"rs"<<endl;
        }
};
int main()
{
    Book B;
    B.INPUT();
    B.PURCHASE();
}
