#include<bits/stdc++.h>
using namespace std;

void differenceEqualK(int list[],int size,int key)
{
    sort(list,list+size);
     int left =0;
     int count=0;
     int right= 0;
     while(left!=size && right!=size)
     {
         if(list[left]-list[right] == key)
         {
             count++;
             left++;
         }
         else if(list[left]-list[right] > key)
         {
             right++;
         }
         else
         {
             left++;
         }
     }
    cout << count << endl;
    return;
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size,key;
        cin >> size;
        int list[size];
        for(int i=0;i<size;i++)
        {
            cin >> list[i];
        }
        cin >> key;
        differenceEqualK(list,size,key);
    }
}
