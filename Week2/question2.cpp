#include<bits/stdc++.h>
using namespace std;

void twoSum(int list[], int size)
{
    for(int i=0;i<size;i++)
    {
         int j=i+1;
         int k=size-1;
        for(j=i+1;j<size;)
        {
           if(list[i]+list[j]==list[k])
           {
               cout << i+1 << "," << j+1 << "," << k+1 << endl;
               return;
           }
           else if(list[i]+list[j] < list[k])
           {
                k--;
           }
           else 
           {
               j++;
               k=size-1;
           }
        }
    }
    cout << "No Sequence found" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int size;
        cin >> size;
        int list[size];
        for(int i=0;i<size;i++)
        {
            cin >> list[i];
        }
        twoSum(list,size);
    }
    return 0;
}