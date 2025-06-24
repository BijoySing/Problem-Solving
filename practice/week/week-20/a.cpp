#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<string> strings(M);
        
        for (int i = 0; i < M; ++i) {
            cin >> strings[i];
        }

        // Create an optimized string by maximizing differences
        string optimal(N, '0');
        for (int i = 0; i < N; ++i) {
            int zero_count = 0, one_count = 0, question_count = 0;
            for (int j = 0; j < M; ++j) {
                if (strings[j][i] == '0') zero_count++;
                else if (strings[j][i] == '1') one_count++;
                else question_count++;
            }

            // Choose '0' or '1' based on maximizing the Hamming distance
            if (zero_count > one_count) {
                optimal[i] = '1';
            } else {
                optimal[i] = '0';
            }
        }

        // Calculate the total Hamming distance
        int max_hamming = 0;
        for (int i = 0; i < M; ++i) {
            for (int j = i + 1; j < M; ++j) {
                int hamming = 0;
                for (int k = 0; k < N; ++k) {
                    if (strings[i][k] == '?' || strings[j][k] == '?') {
                        if (optimal[k] != strings[i][k] && optimal[k] != strings[j][k]) {
                            hamming++;
                        }
                    } else if (strings[i][k] != strings[j][k]) {
                        hamming++;
                    }
                }
                max_hamming += hamming;
            }
        }

        cout << max_hamming << endl;
    }
    return 0;
}
