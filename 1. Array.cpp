#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {19, 33, 11, 0, 67};
    int i, x, flag=0;
    cin >> x;
    for (i=0 ; i<5 ; i++)
    {
        if(arr[i]==x)
        {
            cout << x << " Found at " << i+1 << endl;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout << "Not Found." << endl;
    }
}
