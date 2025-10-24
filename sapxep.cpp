#include <bits/stdc++.h>
#define int long long
using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}
void SelectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minn = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minn]) {
                minn = j;
            }
        }
        swap(a[i], a[minn]);
    }
}
void InsertionSort(int a[], int n) {
	for (int i = 1; i < n; i) {
		int x = a[i], p = i - 1;
		while (p >= 0 && x < a[p]) {
			a[p + 1] = a[p];
			--p;
		}
		a[p + 1] = x;
	}
}
void BubbleSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j] < a[j -1 ]) {
				swap(a[j], a[j - 1]);
			}
		}
	}
}

signed main() {
    int n, a[1000006];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    BubbleSort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}