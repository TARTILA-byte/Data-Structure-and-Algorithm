#include <bits/stdc++.h>
using namespace std;

int comparisons = 0;

int partition(vector<int> &A, int low, int high) {
    int pivot = A[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        comparisons++;
        if (A[j] < pivot) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[high]);
    return i + 1;
}

void quickSort(vector<int> &A, int low, int high) {
    if (low < high) {
        int pi = partition(A, low, high);
        quickSort(A, low, pi - 1);
        quickSort(A, pi + 1, high);
    }
}

int main() {
     int n,x;
    cout<< "Enter size: ";
    cin >> n;

    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        cin >>x;
        A.push_back(x);
    }

    quickSort(A, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
    int x = A[i];
    cout << x << " ";
}
    cout << "\nTotal comparisons: " << comparisons << endl;

    return 0;
}
