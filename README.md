# Git Assignment

Name: Shreya Bakshi
Student id : 24203440
University College Dublin

This repository contains ICHEC practical solutions.

## Project Structure 
Each folder is named as practicalxx - indicating the practical index
Each practitcalxx folder contains C programming solution to respective week's problem statement.
Each practitcalxx folder contains `README.md` description of week's problem statement.

## Useful commands to run code :

### Connect to sciprog:
1. Connect to sciprog - $ssh id@sciprog.training.ichec.ie

2. Copy file to sciprog from Local
  Go to your local directory where files are present
  $scp filename.c id@sciprog.training.ichec.ie:~/.

3. login to sciprog

### File Manipulation:
1. Move copied file from system to a different location in Sciprog - mv filename.c location/
2. Open file in nano  - $nano file_name.c
3. Edit file in Nano -	$nano file_name
4. Exit from Nano - $CTRL+X
5. Save Nano Changes -	$ CTRL+S
6. Create a file -	$touch filename.txt
7. Remove a file -	$rm filename.txt
8. Context of file -	$ cat filename.txt
9. Print on screen -	$ echo "Hello World!"
10. Hidden files - $ls -a
11. Exit sciprog - $exit
12. Clear terminal - $CTRL+L
13. List Stuff - $ls or $ls *.txt
14. Print Working Directory - $pwd
15. Make Directory - $mkdir folder_name
16. Change Directory - $cd folder_name or $ cd ..
17. Change Directory to Home - $cd
18. Change directory up a folder - $cd ..
19. Manual List - $man ls
20. History - $history
21. Quit - $q

### Compilation -
1. -o Name the output executable as file_name as the file you want to compile file_name.c 
    $gcc -o file_name file_name.c
    $gcc -o file_name file_name.c -lm

### Execution -
1. Execute output executable file - $ ./executable_file_name

### Extra comments -
1. ** Restart shell if made changes in bash files
2. ** Otherwise changes will not get seen