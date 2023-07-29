#include<stdio.h>
int main()
{
    int i, n, m, k;
    printf("Enter size of Array: ");
    scanf("%d",&m);
    int Tahmid[m];
    printf("Enter shorted Array:\n");
    for(i=0; i<m; i++)
        scanf("%d",&Tahmid[i]);
        printf("Enter number: ");
        scanf("%d",&n);
        for(i=0; i<m; i++){
            if(Tahmid[i]>n){
                k=i;
                break;
            }
        }
    for(i=m-1;i>k;i--){
        Tahmid[i]=Tahmid[i-1];
    }
    Tahmid[k]=n;
    printf("\nAfter shifting...\nArray=");
    for(i=0; i<m; i++)
        printf(" %d",Tahmid[i]);
    return 0;
}
