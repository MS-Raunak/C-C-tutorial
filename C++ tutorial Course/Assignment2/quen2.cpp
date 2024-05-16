/*Q2 Create a Class India which contain single private 
attribute cityname
Now create following functions to process city of india
1)GetCity()
2)PutCity()
3)SearchCity(Char *Pat, StatusChar)
Status represent s for start, and e for end This function will return all the cities according to 
pattern & status                                                                        */

#include<iostream>
using namespace std;
class India
{
    private:
        char name[30];
    public:
        void getCity();
        void putCity();
};