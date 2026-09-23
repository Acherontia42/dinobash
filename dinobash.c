#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	/*
	pid_t pid;
	*/
	/*fork child process*/
	/*
	pid = fork();
	
	if(pid < 0)
	{
		/*error occured*/
		/*
		fprintf(stderr, "Fork Failed");
		return 1;
	}
	else if (pid == 0)
	{
		/*child process*/
		/*
		execlp("/bin/ls", "ls" NULL);
		
	}
	else
	{
		/*parent process. will wait for child to complete*/
		/*
		wait(NULL);
		printf("Child Complete");
	}
	*/
	bool esc = false;
	motd();
	do{
		
		fprintf("Enter command: ");
		scanf("%s", cmd1);
		//that's weird. i don't like it.
		
		//split. strings. there's probably a better way to do this
		cmd2 = 1;
		//come back to this. later?
		
		if(cmd1 == "exit")
		{
			//is there something weird with strings in C? idk.
			esc = true;
			//freedom!
			//assuming it works of course
			
		}
		else if(cmd2 == "cd")
		{
			// probably some sort of exec?
		}
		else
		{
			//definitely some sort of exec

			//if: run in background
			//continue on
			//if: not run in background
			//print message
		}
		
		
	}while(esc == false);
	
	return 0;
}

motd()
{
	fprintf("AAAAAAAAAAAAAAAH");
}
