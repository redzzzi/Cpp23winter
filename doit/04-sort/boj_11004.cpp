#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &copy, int left, int right) {
    int mid = left + (right - left) / 2;
    int lsize = mid - left + 1;
    int rsize = right - mid;
    vector<int> lcopy(lsize);
    vector<int> rcopy(rsize);
    
    for (int i=0; i<lsize; i++) {
        lcopy[i] = copy[left+i];
    }
    for (int i=0; i<rsize; i++) {
        rcopy[i] = copy[mid+i+1];
    }
    
    int i=0, j=0, k=left;
    while (i<lsize && j<rsize) {
        if (lcopy[i] <= rcopy[j]) {
            copy[k] = lcopy[i];
            i++;
        } else {
            copy[k] = rcopy[j];
            j++;
        }
        k++;
    }
    
    while (i < lsize) {
        copy[k] = lcopy[i];
        k++;
        i++;
    }
    
    while (j < rsize) {
        copy[k] = rcopy[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int> &copy, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(copy, left, mid);
        merge_sort(copy, mid+1, right);
        merge(copy, left, right);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    
    merge_sort(A, 0, N-1);
    
    cout << A[K-1] << '\n';
    return 0;
}
