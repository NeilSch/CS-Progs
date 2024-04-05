#include <iostream>
using namespace std;
int size=10;
int seqSearch(const int arr[],int search);
int main()
{
  const int arr[]={12, -7, 3, 17, 42, 6, 18, -15, 0, 1};
  int search;
  cout<<"Enter a number to search for :";
  cin>>search;
  int index=seqSearch(arr,search);
  if(index!=-1)
    cout<<search<<" was found in array slot "<<index<<"."<<endl;
  else
    cout<<search<<" was not found."<<endl;
  return 0;
}
int seqSearch(const int arr[],int search)
{
  for(int i=0;i<size;i++)
    {
      if(arr[i]==search)
	return i;
    }
  return -1;
}

