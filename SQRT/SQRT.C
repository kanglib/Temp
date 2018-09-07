#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *stream;
	double i, j;

	stream = fopen("SQRT.TXT", "w");

	if (!stream)
		return -1;

	fprintf(stream, "\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");

	for (i = 1.0; i <= 9.9; i += 0.1)
	{
		fprintf(stream, "%.1f", i);

		for (j = 0.00; j <= 0.09; j += 0.01)
			fprintf(stream, "\t%.3f", sqrt(i + j));

		fprintf(stream, "\n");
	}

	for (i = 10; i <= 99; i++)
	{
		fprintf(stream, "%.0f", i);

		for (j = 0.0; j <= 0.9; j += 0.1)
			fprintf(stream, "\t%.3f", sqrt(i + j));

		fprintf(stream, "\n");
	}

	fclose(stream);

	return 0;
}
