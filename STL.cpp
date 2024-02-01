#include <iostream>
using namespace std;
#include <array>
int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << a.at(2) << endl;
    cout << "empty or not " << a.empty() << endl;
    cout<<"ist "<<a.front()<<endl;
    cout<<"2nd "<<a.back()<<endl;
    
}