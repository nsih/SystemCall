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
	
	if(nice == -1)
	{
		printf(2,"invalid pid!\n");
		exit();
	}
	ps(pid);
	exit();
}
