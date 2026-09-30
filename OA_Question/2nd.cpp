#include <iostream>
#include <vector>
using namespace std;

long long minTime(int n, int m, const vector<int>& tasks) {
    long long total_time = 0;
    int current = 1;

    for (int target : tasks) {
        if (target >= current) {
            total_time += (target - current);
        } else {
            total_time += (n - current + target);
        }
        current = target;
    }

    return total_time;
}

int main() {
    int n, m;
    cout << "Enter number of houses (N) and number of tasks (M): ";
    if (!(cin >> n >> m)) return 0;

    vector<int> tasks(m);
    cout << "Enter " << m << " house numbers to visit in order: ";
    for (int i = 0; i < m; ++i) {
        cin >> tasks[i];
    }

    long long result = minTime(n, m, tasks);
    cout << "Minimum time taken: " << result << " units\n";

    return 0;
}