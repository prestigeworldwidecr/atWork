#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
 
void main()
{
	int i = 0;
	int j = 0;
	int system(const char *command);
	char *str1 = "xdotool ";
	char *str2 = "mousemove ";
	char *str3 = "800 ";
	char *str4 = "400\n";
	char buf[256];
	time_t t;

	t = time(NULL);

	printf("Have a nice day at work!\n");

	for (i = 0; i < 480; i++)
	{
		

		switch(j)
		{
			case 0:
				str3 = "800 ";
				str4 = "400\n";
			break;
			case 1:
				str3 = "801 ";
				str4 = "400\n";
			break;
			case 2:
				str3 = "801 ";
				str4 = "401\n";
			break;
			case 3:
				str3 = "800 ";
				str4 = "401\n";
			break;
		}

		if (j == 4)
		{
			j = 0;
		}

		else 
		{
			j = j + 1;
		}

		snprintf(buf, sizeof buf, "%s%s%s%s", str1, str2, str3, str4);
		system(buf);
		system ("xdotool click 1");
		t = time(NULL);
		printf(ctime(&t));
		sleep(300);
	}

}
