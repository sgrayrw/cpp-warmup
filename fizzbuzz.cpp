// Name:
// Date:

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    cout << "enter X, Y, N:" << endl;
    int X, Y, N;
    cin >> X;
    cin >> Y;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        string s;
        if (i % X == 0) s += "Fizz";
        if (i % Y == 0) s += "Buzz";
        if (s.empty())  s = to_string(i);
        cout << s << endl;
    }

    return 0;
}

