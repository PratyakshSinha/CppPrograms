#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

unordered_map<int, unordered_map<int, int>> x_dict, y_dict;

bool form_square(vector<pair<int, int>> &points, vector<pair<int, int>> &square)
{
    for (auto &point : points)
    {
        x_dict[point.first][point.second]++;
        y_dict[point.second][point.first]++;
    }
    for (auto &itx : x_dict)
    {
        if (itx.second.size() >= 2)
        {
            for (auto &ity : itx.second)
            {
                int y1 = ity.first, x2 = y2 - y1;
                if (x_dict.count(x2) && x_dict[x2].count(y1))
                {
                    square = {{itx.first, y1}, {x2, y1}, {x2, y2}, {itx.first, y2}};
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> points(n), square;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        points[i] = {x, y};
    }
    if (form_square(points, square))
    {
        for (auto &point : square)
        {
            cout << point.first << " " << point.second << endl;
        }
    }
    else
    {
        cout << "Not Possible" << endl;
    }
    return 0;
}
