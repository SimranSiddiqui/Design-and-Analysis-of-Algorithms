#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    void binary_search(int left,int right,vector<int>& list,int key);                    
    
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
    binary_search(0,size-1,list,key);

    }
    return 0;
}
 
void binary_search(int left,int right,vector<int>& list,int key)
{
    int count =0;
    while(left <= right)
    {
       int  mid = (left+right)/2 ;
       if(list[mid] == key)
       {
           count++;
           cout << "Present " << count << endl;
           return;
       }
       else if(list[mid] > key)
       {
           right = mid-1;
           count++;
       }
       else if(list[mid] < key)
       {
           left = mid+1;
           count++;
       }
    }
     cout << "Not Present " << count << endl;
     return ;
}