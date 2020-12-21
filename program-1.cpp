#include<iostream>
using namespace std;
void interchange(int a[], int n)
{
    int sml=0, lar=0, spos, lpos, temp;
    sml=a[1];
    for(int i=1;i<=n;i++){
        if (a[i] <= sml){
            sml=a[i];
            spos=i;
        }
        if(lar<=a[i]){
            lar=a[i];
            lpos=i;
        }
    }
    temp=a[spos];
    a[spos]=a[lpos];
    a[lpos]=temp;
    cout << "Array after interchanging:\n";
    for(int i=1;i<=n;i++){
        cout << "\t" << a[i];
    }
}
int main()
{
    int n,i,a[20],b[20];
    cout << "Enter number of terms: ";
    cin >> n;
    for (i=1;i<=n;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    interchange(a,n);
    return 0;
}