#include <iostream>
using namespace std;

int main() {
    int arr[5]={10,0,-5};
    int size=5;
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum=sum+arr[k];
                
            }
            cout<<sum<<endl;
            
        }
        
    }
    
}


/*
#include <iostream>
using namespace std;

int main() {
    int arr[5]={10,0,-5,16,20};
    int size=5;
    int mx=INT_MIN;
    for ( int i = 0; i < size; i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<"  ";
    }
    


}
*/