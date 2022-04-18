#include<bits/stdc++.h>
using namespace std;

void searchWithOccurence(int left,int right,vector<int>& list,int key)
{
    int count =0;
    while(left <= right)
    {
       int  mid = (left+right)/2 ;
       if(list[mid] == key)
       {
          int temp1 =mid;
          int temp2 = mid;
           while(list[temp1--] == key)
           count++;
           while(list[temp2++] ==key)
           count++; 
           cout << key << "-" << count-1 << endl ;
           return;
       }
       else if(list[mid] > key)
       {
           right = mid-1;
       }
       else if(list[mid] < key)
       {
           left = mid+1;
       }
    }
     cout << "Key not present" << endl;
     return ;
}

int main()
{        
    int test, size, key;
    cin >> test;
    while(test--)
    {
    cin >> size;
    vector <int> list;
    for(int j=0;j<size;j++)
    {
        int x;
        cin >> x;
       list.push_back(x);
    }
    cin >> key;
    searchWithOccurence(0,size-1,list,key);

    }
    return 0;
}