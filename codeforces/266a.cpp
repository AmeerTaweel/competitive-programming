#include <bits/stdc++.h>

using namespace std;

// type definitions
typedef int_fast8_t ib;
typedef int_fast16_t is;
typedef int_fast32_t ii;
typedef int_fast64_t il;
typedef uint_fast8_t ub;
typedef uint_fast16_t us;
typedef uint_fast32_t ui;
typedef uint_fast64_t ul;
typedef vector<ib> vib;
typedef vector<is> vis;
typedef vector<ii> vii;
typedef vector<il> vil;
typedef vector<ub> vub;
typedef vector<us> vus;
typedef vector<ui> vui;
typedef vector<ul> vul;
typedef pair<ib, ib> pib;
typedef pair<is, is> pis;
typedef pair<ii, ii> pii;
typedef pair<il, il> pil;
typedef pair<ub, ub> pub;
typedef pair<us, us> pus;
typedef pair<ui, ui> pui;
typedef pair<ul, ul> pul;

int main(){
	// fast io
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ii n;
	cin >> n;
	string s;
	cin >> s;

	char last = -1;
	ii removals = 0;

	for (char c : s) {
		if (c == last) removals++;
		last = c;
	}

	cout << removals << "\n";

	return 0;
}
