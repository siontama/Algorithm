#include<iostream>

using namespace std;

int main()
{
	int t;
	int a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%d,%d", &a, &b);
		printf("%d\n", a + b);
	}
}