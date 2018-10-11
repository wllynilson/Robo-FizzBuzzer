#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 15; i++)
    {
        if( !(i%15))
        {
            cout << "fizzbuzz" << endl;
        }
        else if( !(i%5))
        {
            cout << "buzz" << endl;
        }
        else if( !(i%3))
        {
            cout << "fizz" << endl;
        }
        else
        {
            cout << i << endl;
        }        
    }
    return 0;
}