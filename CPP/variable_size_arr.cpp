#include <iostream>
using namespace std;

int main(void)
{
    int n, q;
    std::cin >> n >> q;

    int **nodes = (int**)calloc(n, sizeof(int*));
    int **queries = (int**)calloc(q, sizeof(int*));
    for (int i = 0; i < q; i++)
        queries[i] = (int*)calloc(2, sizeof(int));

    int s;
    for (int i = 0; i < n; i++)
    {
        std::cin >> s;
        nodes[i] = (int*)calloc(s, sizeof(int));
        for (int j = 0; j < s; j++)
        {
            std::cin >> nodes[i][j];
        }
    }

    for (int i = 0; i < q; i++)
        std::cin >> queries[i][0] >> queries[i][1];

    int row;
    int col;
    for (int i = 0; i < q; i++)
    {
        row = queries[i][0];
        col = queries[i][1];

        std::cout << nodes[row][col] << "\n";
    }

    for (int i = 0; i < n; i++)
        free(nodes[i]);
    free(nodes);
    for (int i = 0; i < q; i++)
        free(queries[i]);
    free(queries);

    return EXIT_SUCCESS;
}
