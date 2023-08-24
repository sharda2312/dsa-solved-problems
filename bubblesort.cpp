#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the number of elements in array";
    cin>>size;

    int arr[size];
    cout<<"enter the of elements of the array";
    for (int i = 0; i < size; i++)
    {
        
        cin>>arr[i];
    }

    int counter=size;
    while (counter>0)
    {
        int e1=0;
        int e2=1;
        while (e2<counter)
        {
            if (arr[e2]<arr[e1])
            {
                int temp=arr[e1];
                arr[e1]=arr[e2];
                arr[e2]=temp;
            }
        e1++;
        e2++;
        }
    counter--;
    } 
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
      
}


/* sorting the elements of array using selction sort.
#include <iostream>
using namespace std;
int main(){
    int arr[12]={99,78,87,15,16,72,19,18,23,10,45,23};
    for (int i = 0; i < 12; i++)
    {
        for (int j = i+1; j < 12; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

// printing the sorted array.
    for ( int a = 0; a < 12; a++)
    {
        cout << arr[a]<<" ";
    }
return 0;
} */