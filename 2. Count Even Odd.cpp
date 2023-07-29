#include<iostream>
using namespace std;
int main()
{
    int i, n, j=0, k=0;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter the array:\n";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
            j++;
        else
            k++;
    }
    cout << "\nEven Numbers : " << j << endl;
    cout << "Odd Numbers : " << k << endl;
    return 0;
}
