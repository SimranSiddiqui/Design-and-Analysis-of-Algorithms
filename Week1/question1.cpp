#include<bits/stdc++.h>
using namespace std;

int main()
{
    void linear_search(int key,vector<int>& list,int size);
    
    int test, size, key;
    cin >> test;
    for(int i=0;i<test;i++)
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
    linear_search(key,list,size);

    }
    return 0;
}

 void linear_search(int key,vector<int>& list,int size)
{
    int count =0;
    for(int i=0;i<size;i++)
    {
        if(list[i]==key)
        {
             count++;
             cout << "Present " << count << endl;
             return ;
        }
        else
        {
            count++;
        }
    }
    cout << "Not present " << count << endl;
    return;
}