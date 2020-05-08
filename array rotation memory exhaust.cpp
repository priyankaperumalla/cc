#include <bits/stdc++.h>
using namespace std;

void rotate(int a[],int d,int n)
{ int b[n];
   int c=0;
    for(int i=0;i<n;i++)
    {
        if(i<d)
        {
            b[6-(d-i)]=a[i];
        }
        else
        {
            b[c]=a[i];
            c++;
        }}
        
   for(int i=0;i<n;i++)
    a[i]=b[i];
    
    
}
int main() {
	int n;
	   cin>>n;
	int d;
	   cin>>d;
	int a[n];
	  for(int i=0;i<n;i++)
	  cin>>a[i];
	  
	rotate(a,d,n);
	
	for(int i=0;i<n;i++)
	 cout<<a[i];
	  return 0;
	
}