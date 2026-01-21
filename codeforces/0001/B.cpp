#include <bits/stdc++.h>

using namespace std;

// B. Spreadsheets
string convertToRXCY(string s) {
    size_t first_num = 0;
    size_t n = s.size();
    for(size_t i = 1; i < n; i++) {
        if(isdigit((unsigned char)(s[i]))){
            first_num = i;
            break;
        }
    }
    string rows = s.substr(first_num);
    string cols = s.substr(0, first_num);

    int cols_i = 0;
    for (char c : cols) {
        cols_i = cols_i * 26 + (c - 'A' + 1);
    }

    return "R"+rows+"C"+to_string(cols_i);
}

string numToStr(int num) {
    string s = "";

    while (num > 0) {
        num--;
        char c = 'A' + (num % 26);
        s = c + s;
        num /= 26;
    }

    return s;
}

string convertToOther(string s) {
    size_t c_pos = s.find_first_of("C", 1);

    string rows = s.substr(1, c_pos-1);
    int cols_i = stoi(s.substr(c_pos+1, s.size()-1));
    string cols;
    cols = numToStr(cols_i);

    return cols+rows;
}

bool isRXCY(string s) {
    if (s[0] != 'R') return false;
    if (!isdigit(s[1])) return false;
    if (s.find('C') == string::npos) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        if (isRXCY(s)) 
            cout << convertToOther(s) << "\n";
        else 
            cout << convertToRXCY(s) << "\n";
    }
}
