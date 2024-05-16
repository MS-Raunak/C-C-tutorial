#include <iostream>
using namespace std;
class Array
{
private:
    int *x, size;

public:
Array()
{

}
Array(int);
    void getArray(int);
    void putArray();
   ~Array()
    {
        cout << "Destroy of memory of x size:" << size << endl;
        delete x;
    }
};
void Array::getArray(int n)
{
    int i;
    size = n;
    x = new int[size];
    for (i = 0; i < size; i++)
    {
        cout << "Enter [" << i << "]:";
        cin >> x[i];
    }
}



void Array::putArray()
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << x[i] << ",";
    }
    cout << endl;
}
int main()
{
    Array A1;
    A1.getArray(5);
    A1.putArray();

    Array A2;
    A2.getArray(3);
    
    A2.putArray();
}