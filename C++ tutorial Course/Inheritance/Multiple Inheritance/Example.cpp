/*          Multiple Inheritance

    ProductionUnitOne       ProductionUnitTwo
            \                      /
                TotalProduction                     */
                                                     
#include<iostream>
using namespace std;
class ProductionUnitOne
{
    protected:
        int totalone;
    public:
        void getProductionOne()
        {
            cout<<"Enter Production One:";
            cin>>totalone;
        }
        void putProductionOne()
        {
            cout<<"Production One:"<<totalone<<endl;
        }
};
class ProductionUnitTwo
{
    protected:
        int totaltwo;
    public:
        void getProductionTwo()
        {
            cout<<"Enter Production Two:";
            cin>>totaltwo;
        }
        void putProductionTwo()
        {
            cout<<"Production One:"<<totaltwo<<endl;
        }
};
class TotalProduction:public ProductionUnitOne,ProductionUnitTwo
{
    private:
        int netTotal;
    public:
        void getTotal()
        {
            getProductionOne();
            getProductionTwo();
            netTotal=totalone+totaltwo;
        }
        void putTotal()
        {
            putProductionOne();
            putProductionTwo();
            cout<<"Net Total:"<<netTotal<<endl;
        }
};
int main()
{
    TotalProduction T;
    T.getTotal();
    T.putTotal();
}