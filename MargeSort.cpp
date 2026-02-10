#include <bits/stdc++.h>
using namespace std;

int comparisonCount = 0;

void merge(vector<int>& A, int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = 0;

    vector<int> temp(A.size());
    while (i <= mid && j <= high) {
        comparisonCount++;

        if (A[i] <= A[j]) {
            temp[k] = A[i];
            i++;
        } else {
            temp[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = A[i];
        i++;
        k++;
    }

    while (j <= high) {
        temp[k] = A[j];
        j++;
        k++;
    }


    for (int x = 0; x < k; x++) {
        A[low + x] = temp[x];
    }
}

void mergeSort(vector<int>& A, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

int main() {
    vector<int> A;
    int n, x;

   cin >> n;

   for (int i = 0; i < n; i++) {
        cin >> x;
        A.push_back(x);
    }

    mergeSort(A, 0, n - 1);


    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout<<endl;
    cout  << comparisonCount << endl;

    return 0;
}
