
/// If we need all all the totient of all numbers between 1 and n,
/// then factorizing all n numbers is not efficient.
/// We can use the same idea as the Sieve of Eratosthenes.

/// Complexity O (nloglogn).
void phi_1_to_n(int n) {
    vector<int> phi(n + 1);
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}
