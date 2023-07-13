#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cmath>
#include <array>
#include <vector>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

typedef long long ll;
typedef long double ld;

void swap(int arr[] , int pos1, int pos2){
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}

int partition(int arr[], int low, int high, int pivot){
	int i = low;
	int j = low;
	while( i <= high){
		if(arr[i] > pivot){
			i++;
		}
		else{
			swap(arr,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}

void quicksort(int arr[], int low, int high){
	if(low < high){
	int pivot = arr[high];
	int pos = partition(arr, low, high, pivot);
	
	quicksort(arr, low, pos-1);
	quicksort(arr, pos+1, high);
	}
}

int solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	quicksort(a, 0, n-1);
	int b[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}
	quicksort(b, 0, n-1);
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		int t = abs(b[i] - a[i]);
		if (t>max)
		{
			max = t;
		}
	}
	cout << max;
	return 0;
}


int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
}