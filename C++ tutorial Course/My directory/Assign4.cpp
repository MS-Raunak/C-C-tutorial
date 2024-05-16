 #include<iostream>
using namespace std;
class Test
{
    private:
        int testcode;
        char description;
        int NoCandidates,centerReqd;
        int CALCNTR()
        {
            centerReqd=(NoCandidates/100+1);
            return(centerReqd);
        }
    public:
        void SCHEDULE()
        {
            cout<<"Enter TestCode:";
            cin>>testcode;
            cout<<"Enter description:";
           cin>>description;
            cout<<"Enter No of Candidates:";
            cin>>NoCandidates;
        }
        void DISPTEST()
        {
            cout<<"Test Code:"<<testcode<<endl;
            cout<<"Description:"<<description<<endl;
            cout<<"No Of Candidates:"<<NoCandidates<<endl;
            int p=CALCNTR();
            cout<<"Center:"<<p<<endl;
        }
};
int main()
{
    Test T;
    T.SCHEDULE();
    T.DISPTEST();
}
