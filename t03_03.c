#include <stdio.h>

int main(void) {
	int n;
	if (scanf("%d", &n) != 1) {
		return 0;
	}

	if (n <= 0) {
		printf("0\n0.00\n0\n0\n");
		return 0;
	}

	int i;
	int values[n];
	long long sum = 0;

	for (i = 0; i < n; i++) {
		if (scanf("%d", &values[i]) != 1) {
			return 0;
		}
		sum += values[i];
	}

	double avg = (double) sum / (double) n;

	int count_at_least_avg = 0;
	int min = values[0];
	int max = values[0];

	for (i = 0; i < n; i++) {
		if (values[i] >= avg) {
			count_at_least_avg++;
		}
		if (values[i] < min) {
			min = values[i];
		}
		if (values[i] > max) {
			max = values[i];
		}
	}

	int range = max - min;

	printf("%lld\n", sum);
	printf("%.2f\n", avg);
	printf("%d\n", count_at_least_avg);
	printf("%d\n", range);

	return 0;
}

