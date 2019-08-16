#include <iostream>
using namespace std;

void merge(int a[],int p,int q,int r){

    int n1 = q - p + 1;
    int n2 = r-q;
    int L[n1];
    int R[n1];

    for (int i=0; i<n1; ++i)
        L[i] = a[p + i];
    for (int j=0; j<n2; ++j)
        R[j] = a[q + 1 + j];

    L[n1] = 999;
    R[n2] = 999;
    int i = 0, j = 0;
    int k;

    for(k=p;k<r;k++) {

        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
    }
}

void mergeSort(int a[], int p, int r) {
    int q;
    if (p < r) {
        q = (p+r)/2;
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        merge(a, p, q, r);
    }
}
void output(int a[],int n) {
    int i;
    for (i=0; i<n; ++i)
        cout<<a[i]<<" "<<endl;
}

int main() {

    int a[] = {12, 10, 13, 5, 6};
    int a_size = sizeof(a)/sizeof(a[0]);

    mergeSort(a, 0, a_size - 1);
    cout<<"Sorted array"<<endl;

    output(a, a_size);

    return 0;
}
