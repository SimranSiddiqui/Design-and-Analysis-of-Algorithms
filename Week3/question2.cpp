#include<bits/stdc++.h>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void selectionSort(int A[], int n){
    int comp=0,numSwap=0;
    int i,j,min;
    for (int i=0; i<n-1; i++){
         min = i;
        {
          for( j=i+1;j<n;j++)
          {
              comp++;
              if(A[j] < A[min])
              {
                  min = j;
              }
          }
        }
        swap(&A[i], &A[min]);
        numSwap++;
    }
    for (int i=0;i<n;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl << "Comparisons " << comp << endl;
    cout << "Swaps " << numSwap << endl;
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
      selectionSort(list,size);

    }
}