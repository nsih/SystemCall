#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char const *argv[])
{
	int pid;
	int nice_value;
	
	pid = 0;
	nice_value = 0;
	
	if(argc < 2)
	{
		printf(2,"Usage: error");
		exit();
	}
	
	pid = atoi(argv[1]);
	nice_value = atoi(argv[2]);
	
	setnice(pid,nice_value);
	exit();
}
