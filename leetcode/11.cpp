#include <bits/stdc++.h>

using namespace std;

// type definitions
using ib = int_fast8_t;
using is = int_fast16_t;
using ii = int_fast32_t;
using il = int_fast64_t;
using ub = uint_fast8_t;
using us = uint_fast16_t;
using ui = uint_fast32_t;
using ul = uint_fast64_t;
using vib = vector<ib>;
using vis = vector<is>;
using vii = vector<ii>;
using vil = vector<il>;
using vub = vector<ub>;
using vus = vector<us>;
using vui = vector<ui>;
using vul = vector<ul>;
using pib = pair<ib, ib>;
using pis = pair<is, is>;
using pii = pair<ii, ii>;
using pil = pair<il, il>;
using pub = pair<ub, ub>;
using pus = pair<us, us>;
using pui = pair<ui, ui>;
using pul = pair<ul, ul>;

// macros
#define MAKE_UNSIGNED(n) (static_cast<make_unsigned<decltype(n)>::type>(n))
#define POPCOUNT(n) (__builtin_popcountll(MAKE_UNSIGNED(n)))
#define HAS_ODD_PARITY(n) (__builtin_parityll(MAKE_UNSIGNED(n)))
#define HAS_EVEN_PARITY(n) (!HAS_ODD_PARITY(n))
#define CLZ(n) (__builtin_clzll(MAKE_UNSIGNED(n)))
#define CTZ(n) (__builtin_ctzll(MAKE_UNSIGNED(n)))
#define SORT_STD_INC(x) sort(x.begin(), x.end())
#define SORT_STD_DEC(x) sort(x.rbegin(), x.rend())
#define SORT_ARR_INC(x) sort(a, a + (sizeof a / sizeof a[0]))
#define SORT_ARR_DEC(x) sort(a, a + (sizeof a / sizeof a[0]), greater<>())
#define REVERSE_STD(x) reverse(x.begin(), x.end())
#define REVERSE_ARR(x) reverse(a, a + (sizeof a / sizeof a[0]))

class Solution {
public:
    int maxArea(vector<int>& height) {
        il n = height.size();
        vector<pil> h(n);
        for (il i = 0; i < n; i++) h[i] = {height[i], i};
        SORT_STD_DEC(h);
        
        il start = min(h[0].second, h[1].second);
        il end = max(h[0].second, h[1].second);
        il max_water = h[1].first * (end - start);
        for (auto [val, i] : h) {
            if (i >= start && i <= end) continue;
            if (i < start) start = i;
            else end = i;
            il water = val * (end - start);
            if (water > max_water) max_water = water;
        }
        
        return max_water;
    }
};
