#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string a, b;
    vector<int> veca, vecb; // vector to gather integers from string
    cin >> a >> b;

    // gathering numbers
    if (a.size() > b.size()) {
        for (int i = 0; i < a.size(); i++) {
            veca.push_back(a[i] - '0');
            if (i < b.size()) {
                vecb.push_back(b[i] - '0');
            }
        }
    } else if (a.size() <= b.size()) {
        for (int i = 0; i < b.size(); i++) {
            veca.push_back(b[i] - '0');
            if (i < a.size()) {
                vecb.push_back(a[i] - '0');
            }
        }
    }

    // multiplication
    reverse(veca.begin(), veca.end());
    reverse(vecb.begin(), vecb.end());
    vector<vector<int>> result; // 2D vector for multiplication results
    int carry = 0, maxsize = 0;

    for (int i = 0; i < vecb.size(); i++) {
        carry = 0;
        vector<int> ans1 = {};

        for (int j = 0; j < veca.size(); j++) {
            int multiplication = (veca[j] * vecb[i]) + carry;

            if (j == veca.size() - 1) {
                ans1.push_back(multiplication);
            } else {
                if (multiplication >= 10) {
                    carry = multiplication / 10;
                    int result = multiplication % 10;
                    ans1.push_back(result);
                } else {
                    int result = multiplication;
                    ans1.push_back(result);
                }
            }
        }
        if (ans1.size() >= maxsize) {
            maxsize = ans1.size();
        }
        result.push_back(ans1);
    }
    // till now multiplication is working fine

    //now doing the addition 
    vector<pair<int, int>> cresult;

    for (int i = 0; i < result.size(); i++) {
        int fresult = 0;
        for (int j = 0; j < result[i].size(); j++) {
            fresult += result[i][j] * pow(10, j);
    }
        cresult.push_back(make_pair(fresult, i));
}

    int addition = 0;


    for (int i = 0; i < cresult.size(); i++) {
        addition += cresult[i].first * pow(10, cresult[i].second);
    }

    cout << addition << endl;

    return 0;
}
