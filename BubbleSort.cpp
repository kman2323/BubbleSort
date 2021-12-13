#include<iostream>
#include<vector>

// space complexity O(1)
// time complexity O(n^2)
using namespace std;
void swap(int &a, int &b)
 { 
     int t;
     t = a; 
     a = b;
     b = t;
  }

void bubbleSort(vector<int> &arr)
{
    int size = arr.size();
    while(size>1)
    {
    
        for(int i = 0; i < size-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
            }
        }
    size--;
    }

}

int main()
{
    vector<int> v = {10,9,8,7,6,5,4,3,2,1};
    bubbleSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    

    return 0;
}
