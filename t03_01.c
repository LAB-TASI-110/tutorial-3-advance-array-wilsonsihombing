#include <stdio.h>

int main(void) {
	int n;
	if (scanf("%d", &n) != 1) {
		return 0;
	}

	int i;
	int value;
	long long sum = 0;

	for (i = 0; i < n; i++) {
		if (scanf("%d", &value) != 1) {
			return 0;
		}
		sum += value;
	}

	double avg = 0.0;
	if (n > 0) {
		avg = (double) sum / (double) n;
	}

	printf("%lld\n", sum);
	printf("%.2f\n", avg);

	return 0;
}

