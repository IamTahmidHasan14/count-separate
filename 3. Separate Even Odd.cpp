#include <iostream>
using namespace std;
int main()
{
    int S[10], E[10], O[10];
    int i, n, j=0, k=0;
    cout << "Input 10 elements in the array : " << endl;
    for(i=0; i<10; i++){
        cout << "Element " << i << ": ";
        cin >> S[i];
    }
    cout << "\nOutput: " << endl;
    for(i=0;i<10;i++){
        if (S[i]%2 == 0){
            E[j] = S[i];
            j++;
        }
        else{
            O[k] = S[i];
            k++;
        }
    }
    cout << "The Even elements are: " << endl;
    for(i=0;i<j;i++){
        cout << E[i] << " ";
    }
    cout << "\n\nThe Odd elements are:" << endl;
    for(i=0;i<k;i++){
        cout << O[i] << " ";
    }
    cout << endl;
 }
