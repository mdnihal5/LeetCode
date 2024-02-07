#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> find_permutation(int N, vector<int>& P) {
    if (N <= 2) {
        return {-1};
    }

    int p1 = -1, p3 = -1;
    for (int i = 0; i < N; ++i) {
        if (P[i] == 1) {
            p1 = i;
        } else if (P[i] == 3) {
            p3 = i;
        }
    }

    swap(P[p1], P[p3]);

    return P;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        vector<int> res = find_permutation(N, arr);

        if (res[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int num : res) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
