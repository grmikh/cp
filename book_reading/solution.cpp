#include <cstdio>
#include <vector>

void fastScan(int &x);
int getCaseOutput(int m, int n, int q, const int ps[], const int rs[]);

int main() {
    int numCases = 1;
    fastScan(numCases);
    for (int i = 1; i <= numCases; ++i) {
        int m, n, q;
        fastScan(m);
        fastScan(n);
        fastScan(q);
        int ps[n];
        for (int j = 0; j < n; ++j) {
            fastScan(ps[j]);
        }
        int rs[q];
        for (int k = 0; k < q; ++k) {
            fastScan(rs[k]);
        }
        const int pagesRead = getCaseOutput(m, n, q, ps, rs);
        printf("Case #%d: %d\n", i, pagesRead);
    }
    return 0;
}

int getCaseOutput(int m, int n, int q, const int ps[], const int rs[])
{
    int pagesRead = 0;
    //One of the rare cases when vector works faster than array due to bit compression
    std::vector<bool> torn;
    torn.reserve(m);
    for (int i = 0, j = 0; i < n; ++i) {
        while (ps[i] - 1 != j)
        {
            torn[j] = false;
            ++j;
        }
        torn[j] = true;
        ++j;
        if (i == n - 1)
        {
            while (++j < m)
            {
                torn[j] = false;
            }
        }
    }
    for (int reader = 0; reader < q; ++reader) {
        int mult = rs[reader];
        for (int i = 1; i * mult <= m; ++i) {
            if (!torn[i * mult - 1])
            {
                pagesRead++;
            }
        }
    }
    return pagesRead;
}

// A faster way of reading integers
void fastScan(int &x)
{
    register int c;
    x = 0;
    c = getchar();
    for (; (c > 47 && c < 58); c = getchar())
    {
        x = (x << 1) + (x << 3) + c - 48;
    }
}