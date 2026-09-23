#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

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
		
		char * args[100]; 
		
		//split. strings. there's probably a better way to do this
		//tempvariable i guess
		//cmd2 = 1;
		//come back to this. later?
		
		//split strings
		int counter = 0;
		char * myPtr = strtok(cmd1, " ");
		while(myPtr != NULL) 
		{
			strcpy(args[count], myPtr);
			myPtr = strtok(NULL, " ");
			counter++;
		}
		
		if(strcmp(args[0], "exit") == 0)
		{
			//is there something weird with strings in C? idk.
			esc = true;
			//freedom!
			//assuming it works of course
			
		}
		else if(strcmp(args[0], "cd") == 0)
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
			//i think
		}
		
		
	}while(esc == false);
	
	return 0;
}

motd()
{
	fprintf("AAAAAAAAAAAAAAAH");
	//I'll find a good actual message later
}
