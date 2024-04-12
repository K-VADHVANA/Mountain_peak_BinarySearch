//binary search
#include <iostream>
using namespace std;
int search(int arr[] , int n )
{
    int s=0 ;
    int e = n-1;

    int mid = s+(e-s)/2;
    while (s<e)
    {
        
        if(arr[mid]<arr[mid+1])
        {
           s=mid+1;
        }
        else
        {
            e=mid;
        }

       mid = s +(e-s)/2;
    }
    return s;
    
}
int main()
{
    int a[5],n;
      cout << "Enter the number of array " << endl;
      cin>> n;
      cout << " Enter the values of Array " << endl;
      for (int i=0; i<n; i++)
      {
        cin >> a[i];
      }
      
 cout << " The index of peak  value  is " <<search(a,n)<< endl;
      
   

    return 0;

}





