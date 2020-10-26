#include <stdio.h>

int
main(int argc, char* argv[])
{
	printf("%s started\n", __FUNCTION__);
	for (int i = 0; i < argc; i++) {
		printf("->%s<-\n", argv[i]);
	}
	printf("%s terminated\n", __FUNCTION__);
	return 0;
}

#error "coucou"
