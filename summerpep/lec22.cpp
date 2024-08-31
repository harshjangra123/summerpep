#include<bits/stdc++.h>
using namespace std;


void heapify(int arr[], int N, int i)
{

    int largest = i;

    int l = 2 * i + 1;

    int r = 2 * i + 2;

    if (l < N && arr[l] > arr[largest])
        largest = l;

    if (r < N && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, N, largest);
    }
}

int main(){
    int n;cin>>n;
    vector<int> heap(n);
    for(int i=0;i<n;i++)cin>>heap[i];
    int x;cin>>x;
    v.erase
}