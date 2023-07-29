#include<iostream>
using namespace std;
int main()
{
    int Tahmid[] = {19,33,11,67};
    int i, k=0, m=5, n=4, j=n;
    int pos1 = 2;
    int pos2 = 8;
    cout<<"Past Array"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<Tahmid[i]<<endl;
    }
    n = n+1;
    while(j>=k)
    {
        Tahmid[j+1]=Tahmid[j];
        j=j-1;
    }
    Tahmid[k]=pos1;
    cout<<"\nNew Array"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<Tahmid[i]<<endl;
    }
    n = n+1;
    while(j>=m)
    {
        Tahmid[j+1]=Tahmid[j];
        j=j-1;
    }
    Tahmid[m]=pos2;
    cout<<"\nNew Array"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<Tahmid[i]<<endl;
    }
}
