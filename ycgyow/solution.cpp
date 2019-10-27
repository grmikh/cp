#include <iostream>

/* A very simple solution is just to inverse every step that Lydia takes */

int main()
{
    using namespace std;
    int numCases;
    cin >> numCases;
    for (int i = 1; i <= numCases; ++i)
    {
        // We are not really interested in the maze size
        cin.ignore(1, '\n');
        cin.ignore(5, '\n');
        string path;
        cin >> path;

        cout << "Case #" << i << ": ";
        for (auto& c : path) {
            cout << (c == 'E' ? 'S' : 'E');
        }
        cout << endl;
    }
    return 0;
}