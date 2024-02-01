#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> v;
    // cout<<"Size -> "<<v.capacity()<<endl;
    v.push_back(1);
    //   cout<<"Size -> "<<v.capacity()<<endl;
    v.push_back(2);
    //    cout<<"Size -> "<<v.capacity()<<endl;
    // cout<<"Size -> "<<v.size()<<endl;
    v.push_back(3);
    //    cout<<"Size -> "<<v.capacity()<<endl;
    // cout<<"Size -> "<<v.size()<<endl;
    cout << "2nd element " << v.at(1) << endl;
    cout << "1st : " << v.front() << endl;
    cout << "last : " << v.back() << endl;

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;

    vector<int> a(5, 1);
    cout << "VALUE OF A" << endl; 
    for (int i : a)
    {
        cout << i << endl;
    }
}