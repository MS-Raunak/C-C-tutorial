//Hybrid Inheritance
/*
                Company
           /               \
    ProductioUnitOne	ProductionUnitTwo
	       \               /
		    TotalProduction */

#include<iostream>
using namespace std;
class Company
{
    private:
        int companyid;
        string companyname;
        string city;
    public:
        void getCompany()
        {
            cout<<"Enter Company Id:";   cin>>companyid;
            cout<<"Enter Company Name:"; cin>>companyname;
            cout<<"Enter Company City:"; cin>>city;
        }
        void putCompany()
        {
            cout<<"Company Id:"<<companyid<<"\nCompany Name:"<<companyname<<"\nCity:"<<city<<endl;
        }
};

class ProductionUnitOne:virtual public Company
{
    protected:
        int totalone;
    public:
        void getProductionOne()
        {
            cout<<"Enter Production One:"; cin>>totalone;
        }
        void putProductionOne()
        {
            cout<<"Total Production One:"<<totalone<<endl;
        }
};

class ProductionUnitTwo:virtual public Company
{
    protected:
        int totaltwo;
    public:
        void getProductionTwo()
        {
            cout<<"Enter Production Two:"; cin>>totaltwo;
        }
        void putProductionTwo()
        {
            cout<<"Total Production One:"<<totaltwo<<endl;
        }
};

class TotalProduction:public ProductionUnitOne, ProductionUnitTwo
{
    private:
        int nettotal;
    public:
        void getTotal()
        {
            getCompany();
            getProductionOne();
            getProductionTwo();
            nettotal=totalone+totaltwo;
        }
        void putTotal()
        {
            putCompany();
            putProductionOne();
            putProductionTwo();
            cout<<"Net Total:"<<nettotal<<endl;
        }
};
int main()

{
    TotalProduction T;
    T.getTotal();
    T.putTotal();
}

