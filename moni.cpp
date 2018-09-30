#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
 void SelectionSort(int arr[],int size)
{
    int i,j,temp;
 for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}  return;
}

void closestMinPair(vector<int> &arr) {
    int diff[arr.size()];
    int diff2[arr.size()];
    sort(arr.begin(), arr.end());
    int c=0;
    for(int i=0; i < arr.size()-1; i++) {
        diff[c++] = arr[i+1]- arr[i];
    }
    for(int i=0; i < arr.size()-1; i++) {
        diff2[i] = diff[i];
    }
  /*  for(int i=0;i<c;i++)
    {
        cout<<diff[i]<<" ";
    }*/
        int n = sizeof(diff)/sizeof(diff[0]); 
    
    int min=diff[0];
    int min_index=0;
    for(int i=0;i<c;i++)
    {
        if(diff[i]<min)
        {
            min=diff[i];
            min_index=i;
        }
    }
    cout<<endl<<min<<" "<<"{"<<arr[min_index]<<","<<arr[min_index+1]<<"}"<<endl;
    SelectionSort(diff,n);
   /* for(int i=0;i<c;i++)
    {
        cout<<diff[i]<<" ";
    }*/
    
    int second_min=0;
    for(int i=0;i<c;i++)
    {
        if(diff[i]!=diff[0])
        {
            second_min=diff[i];
            break;
        }
    }
   // cout<<endl<<second_min;
   /* for(int i=0;i<c;i++)
    {
        cout<<diff2[i]<<" ";
    }*/
    int second_min_index=0;
    for(int i=0;i<c;i++)
    {
        if(diff2[i]==second_min)
        {
            second_min_index=i;
            break;
        }
    }
    cout<<endl<<second_min<<" "<<"{"<<arr[second_min_index]<<","<<arr[second_min_index+1]<<"}"<<endl;
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++) {
        cin >> arr[i];
    }
    closestMinPair(arr);
    return 0;
}
