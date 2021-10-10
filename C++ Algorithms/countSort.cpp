#include<iostream>
using namespace std;
int k=0;
 //way to sort array//
void Count_Sort(int X[],int Y[],int n)    
{
	int Z[k];
	for(int i=0;i<k+1;i++)
	{
        // initialize Z with 0 //
		Z[i]=0;
	}
	for(int j=1;j<=n;j++)
	{
        // count circumstance of every element and increase by one// 
		Z[X[j]]++;			    
	}
	for(int i=1;i<=k;i++)
	{
        // store last circumtance of element i //
		Z[i]+=Z[i-1];            
	}
	for(int j=n;j>=1;j--)
	{
        //  place the elements at their respective index //
		Y[Z[X[j]]]=X[j];   
        // help if an element occurs more than one time //       
		Z[X[j]]=Z[X[j]]-1;		  
	}
}
int main()
{
	int n;
	cout<<"Enter the size of the array :";
	cin>>n;
     // X stores the elements input by user /
	//Y stores the sorted sequence of elements //
    int X[n],Y[n]; 
	
	for(int i=1;i<=n;i++)        
	{
		cin>>X[i];
		if(X[i]>k)
		{
            //modify k if an element occurs whose value is greater than k /
			k=X[i];              
		}
	}
	Count_Sort(X,Y,n); 
    //  print the sorted sequence on the console //       
	for(int i=1;i<=n;i++)       
	{
		cout<<Y[i]<<" ";
	}
	cout<<endl;
	return 0;
}