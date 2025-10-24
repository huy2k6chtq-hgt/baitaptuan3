#include <bits/stdc++.h>
#define int long long
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void SelectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
}
void InsertionSort(int a[], int n) {
	for (int i = 1; i < n; i) {
		int x = a[i], pos = i - 1;
		while (pos >= 0 && x < a[pos]) {
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = x;
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