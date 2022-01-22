#include <stdio.h>
#include <string.h>

int main()
{
	char input_str[] = "5-4-3-2-1";
	char *separator = strtok(input_str, "-");
	while (separator != NULL)
	{
		printf("%s\n", separator);
		separator = strtok(NULL, "-");
	}

	return 0;
}
