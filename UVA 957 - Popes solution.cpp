//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 957 - Popes
	int p, y, x, c, i, j, max, f, s;
	vector<int> v;
	while (cin >> y) {
		cin >> p;
		v.clear();
		while (p--) {
			cin >> x;
			v.push_back(x);
		}
		sort(all(v));
		max = 0;
		for (i = 0; i < v.size(); i++) {
			c = 0;
			for (j = i; j < v.size() && v[j] < v[i] + y; j++)
				c++;
			if (c > max) {
				max = c;
				f = v[i];
				s = v[j - 1];
			}
		}
		cout << max << " " << f << " " << s << endl;
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
