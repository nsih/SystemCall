#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char const *argv[])
{
	int pid;
	int nice;
	pid = 0;
	nice = 0;
	
	if(argc < 1)
	{
		printf(2,"Usage: pid=n");
		exit();
	}
	pid = atoi(argv[1]);
	
	nice = getnice(pid);
	
	if(nice == -1)
	{
		printf(2,"invalid pid!\n");
		exit();
	}
	
	printf(1,"pid : %d\t nice : %d\n",pid,nice);
	exit();
}
