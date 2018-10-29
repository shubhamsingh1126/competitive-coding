#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool compare(pair<int,int>&p1,pair<int,int>&p2)
{
    /*basis of comparison is if the element has same frequency than print the smaller element
    first else print that element which has higher frequency
    */
    if(p1.second==p2.second)
    return p1.first<p2.first;
    return p1.second>p2.second;
}
int main()
 {
int test;
cin>>test;
while(test--)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //job of the map is to count frequency of each element of the array elements
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    //total size of the map can be obtained as below
    int s=m.size();
    /* we create an array of pair in which first entry stores the element
    and second stores its frequency
    remember pair has 2 properties first and second
    */
    pair<int,int>p[s];
   int i=0;
   /*here we have filled the pair array
   first stores element and second stores its frequency
   */
    for(auto it=m.begin();it!=m.end();it++)
    {
        p[i++]=make_pair(it->first,it->second);
    }
//we have sort this array of pair by a userdefined compare function
    sort(p,p+s,compare);
    for(int i=0;i<s;i++)
    {
        //freq stores second property of pair i.e frequency to print that many times that element
        int freq=p[i].second;
        while(freq--)
        {
            cout<<p[i].first<<" ";
        }
    }
    cout<<endl;
}
	return 0;
}
