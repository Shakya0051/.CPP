#include<iostream>
using namespace std;

void quickSort(int arr[], int l, int h)
{
    int low = l;
    int high = h;
    int key = arr[(low+high)/2];

    while(low<=high)
    {
        if(arr[low]<key)
        low++;
        if(arr[high]>key)
        high--;
        
        if(low<=high)
        {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
        quickSort(arr,l,high);
        quickSort(arr,low,h);
    }
}

int main()
{
    int n;
    cout<<"Enter Number of Elements : ";
    cin >> n;

    int arr[n];

    cout<<"Enter value in Array : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    quickSort(arr, 0 , n-1);
    cout<<"Sorted value is : "<<endl;
    for(int i=0; i<n; i++ )
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}