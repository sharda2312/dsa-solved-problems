#include <iostream>
using namespace std;

int linearS(int arr[],int n,int key)
{
    for(int i=0; i < n; i++){
        if (key==arr[i])
        {
            cout <<i;
            return i;
        }
        
    }
    cout << -1;
    return -1;
}
int main()
{
    
    int arr[12]={25,36,14,69,58,47,63,52,41,96,85,74};
    int key;
    cout <<"enter key you want to search in the array"<<endl;
    cin >> key;
    linearS( arr , 12 , key);
}