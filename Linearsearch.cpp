#include <iostream>
using namespace std;
int main()
{
    int target;
    cout << "Enter the value of target :" << endl;
    cin >> target;

    int array[6] = {12,
                    18,
                    20,
                    42,
                    8,
                    10};
    for (int i = 0; i <= 5; i++)
    {
        if (target == array[i])
            cout << i << ": index" << target << endl;
    }
}
