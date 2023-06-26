#include <iostream>
using namespace std;
int pushZero(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while (count < n)
    {
        arr[count] = 0;
        count++;
    }
    
}
int main()
{ // declare function
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    // calling function
    int ans= pushZero(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }

}
