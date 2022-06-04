/**
 * Author:
 * Description: A better random function.
 * Source: https://codeforces.com/blog/entry/61587, https://codeforces.com/blog/entry/61675
 */

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// uniform_int_distribution<int>(a, b)(rng) generates a random integer between a and b inclusive