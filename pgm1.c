#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include <stdio.h>
#include <unistd.h>
int main()
{
	long res;
	if((res=sysconf(_SC_CLK_TCK))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;42mCLK_TCK=%d\n\033[0;0m",res);
	if((res=sysconf(_SC_CHILD_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;32mCHILD_MAX=%d\n\033[0;0m",res);
	if((res=sysconf(_SC_OPEN_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("\033[38;5;150mOPEN_MAX=%d\n\033[0;0m",res);
	if((res=pathconf("./",_PC_PATH_MAX))==-1)
		printf("error in pathconf\n");
	else
		printf("\033[38;5;62mPATH_MAX=%d\n\033[0;0m",res);
	if((res=pathconf("./pgm1.c",_PC_NAME_MAX))==-1)
		printf("error in pathconf\n");
	else
		printf("\033[38;5;222mNAME_MAX=%d\n\033[0;0m",res);
	return 0;
}
