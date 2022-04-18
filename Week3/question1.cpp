#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int A[], int n){
    int shift=0,comp=0;
    for (int i=1; i<n; i++){
        int j = i-1;
        int x = A[i];
        while (j>-1 && A[j] > x){
            A[j+1] = A[j];
            j--;
            comp++;
            shift++;
        }
        A[j+1] = x;
        shift++;
    }
    for(int i=0;i<n;i++)
    {
       cout << A[i] << " ";
    }
    cout << endl << "Comparisons = " << comp <<endl;
    cout <<  "Shifts = " << shift<<endl;
 
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
      int size;
      cin >> size;
      int list[size];
      for(int i=0;i<size;i++)
      {
          cin >> list[i];
      }
      InsertionSort(list,size);

    }
}