#include<iostream>
using namespace std;
class Bank
{
    private:
        int id;
        char name[30];
        long loanamont;
    public:
        void getLoan()
        {
            
            cout<<"Enter loanammount:";
            cin>>loanamont;
        }
        void putLoan()
        {
            cout<<loanamont<<endl;
        }
        void interset (int rate=7)
        {
            int amt=loanamont*rate/100;
            cout<<"Intersest amount:"<<amt<<endl;
        }
       
};
int main()
{
   Bank C1,C2;
    cout<<"Employee One:"<<endl;
    C1.getLoan();
    C1.putLoan();
    C1.interset();
    cout<<"Employee Two:"<<endl;
    C2.getLoan();
    C2.putLoan();
    C2.interset(9);
}


//next tpic: constructor,distructor