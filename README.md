This repository contains ICHEC practical solutions.

Each folder is named as practicalxx - indicating the practical index
Each practitcalxx folder contains C programming solution to respective week's problem statement.

Useful commands to run code :
1. Connect to sciprog - $ssh id@sciprog.training.ichec.ie

2. Copy file to sciprog from Local
  Go to your local directory where files are present
  $scp filename.c id@sciprog.training.ichec.ie:~/.

4. login to sciprog
5. Move copied file from system to a different location in Sciprog - mv filename.c location/
6. Open file in nano  - $nano file_name.c
7. Compilation -
    -o Name the output executable as file_name as the file you want to compile file_name.c 
    $gcc -o file_name file_name.c
    $gcc -o file_name file_name.c -lm
8. Execute output executable file - $ ./executable_file_name
9. Exit sciprog - $exit
10. Clear terminal - $CTRL+L
11. List Stuff - $ls or $ls *.txt
12. Print Working Directory - $pwd
13. Make Directory - $mkdir folder_name
14. Change Directory - $cd folder_name or $ cd ..
15. Change Directory to Home - $cd
16. Change directory up a folder - $cd ..
17. Manual List - $man ls
18. History - $history
19. Quit - $q

20. ** Restart shell if made changes in bash files
21. ** Otherwise changes will not get seen
22. Hidden files - $ls -a
23. Edit file in Nano -	$nano file_name
24. Exit from Nano - $CTRL+X
25. Save Nano Changes -	$ CTRL+S
26. Create a file -	$touch filename.txt
27. Remove a file -	$rm filename.txt
28. Context of file -	$ cat filename.txt
29. Print on screen -	$ echo "Hello World!"

