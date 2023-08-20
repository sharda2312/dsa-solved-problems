#include <iostream>
using namespace std;
bool search(int arr[],int n)
    {
        int i=0;
        for(;i<n;i++)
            {
                int j=i+1;
                for (; j < n; j++)
                {
                    if (arr[i]==arr[j])
                    {
                        break;
                    }
                    else
                    {
                        cout <<arr[j]<<endl;
                        return 0;
                    }
                    
                    
                }
                
            }
            return 1;
    }
int main() {
    int arr[5]={1,1,2,1,1};
    int brr[6]={1,1,1,4,1,1};
    search(arr,5);
    search(brr,6);
    
}

