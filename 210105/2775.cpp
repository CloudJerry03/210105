#include <iostream>
using namespace std;

int main()
{
	int T, K, N;
	int apart[15][15];

	cin >> T;

	// �׽�Ʈ �� ����
	for (int i = 0; i < T; i++)
	{
		cin >> K >> N;

		// ����Ʈ ���鼭 �� �渶�� ��� ����� �迭�� �Է�
		for (int k = 0; k <= K; k++)
		{
			for (int n = 0; n < N; n++)
			{
				if (k == 0 or n == 0)
					apart[k][n] = n + 1;
				else
					apart[k][n] = apart[k][n - 1] + apart[k - 1][n];
			}
		}
		cout << apart[K][N - 1] << endl;
	}
}