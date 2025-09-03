#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct Segment {
    int left, right;
    Segment(int l, int r) : left(l), right(r) {}
    int length() const { return right - left + 1; }
    bool operator<(const Segment& other) const {
        if (length() == other.length()) {
            return left > other.left;
        }
        return length() < other.length();
    }
};

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        priority_queue<Segment> pq;
        pq.push(Segment(0, n - 1));
        
        int num = 1;
        while (!pq.empty()) {
            Segment current = pq.top();
            pq.pop();
            int mid = (current.left + current.right) / 2;
            arr[mid] = num++;
            
            if (current.left <= mid - 1) {
                pq.push(Segment(current.left, mid - 1));
            }
            if (mid + 1 <= current.right) {
                pq.push(Segment(mid + 1, current.right));
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
