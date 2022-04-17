#include<bits/stdc++.h>
using namespace std;

void jump_search(vector<int>,int,int );

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
    jump_search(list,key,size);

    }
    return 0; 
}

void jump_search(vector<int> list,int key,int size)
{
    int left=0;
    int right=2;
    int jump = 0;
    while(right < size)
    {
        if(list[right] < key)
        {
          left = right;
          right += 2;
          jump++;
        }
        else if(list[right] >= key)
        {
          for(int i=left;i<=right;i++,jump++)
          {
              if(list[i]==key)
              {
                  cout<<"Present " << jump << endl;
                  return;
              }
          }
        }
        
    }
       if(list[size-1]==key)
        {
        jump++;
        cout << "Present " << jump << endl;
        return;
        }
    cout << "Not Present " << jump << endl;
    return;
}