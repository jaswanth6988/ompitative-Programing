#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> res;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        res.push_back(ele);
    }
    for (int ele : res) {
        cout << ele << " ";
    }
    cout << endl;

    int newele;
    cin >> newele;
    res.push_back(newele);
    for (int ele : res) {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}
