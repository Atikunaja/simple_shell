README 0x16. C - Simple Shell This is a custom implementation of a simple shell in C. It provides basic functionality such as executing shell commands, handling signals, and managing environment variables.

Features Support for executing commands from the PATH environment variable Built-in commands: exit, env, cd Signal handling: Ctrl + C (SIGINT), Ctrl + \ (SIGQUIT), Ctrl + D (EOF) Handling quoting and escaping characters in commands Manage environment variables Getting Started Prerequisites This program was developed and tested on Ubuntu 20.04 LTS using gcc 9.3.0. It should work on other Linux distributions as well.

Installation Clone the repository: git clone https://github.com/your_username/simple_shell.git Compile the program: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh Run the shell: ./hsh Usage The shell prompt is displayed as follows:

$

Commands entered at the prompt are executed by the shell. Built-in commands are executed directly by the shell, while non-built-in commands are executed by forking a child process.

To exit the shell, enter the command:

$ exit

Other built-in commands include:

env: prints the environment variable names and values cd: changes the current working directory Examples To list the files in the current directory:

$ ls file1 file2 file3 $ To print the value of the PATH environment variable:

$ env PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin $ To change the current working directory to /home/user/my_directory:

$ cd /home/user/my_directory $
