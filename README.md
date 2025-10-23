# Assignment-1
------------------------------------------------------------------------------------Short Description--------------------------------------------------------------------------------------------
      
      
      The following program can be used to check if a number is : Adams Number, Prime Palindrome, Armstrong Number.
      It can be also used to do some basic and certain 1D Array Operations.
      It contains two header files : mylib.h and arraylib.h, two custom libraries : mylib.c and arraylib.c , and the main c program  : main.c.

      

-----------------------------------------------------------------------------Limitations------------------------------------------------------------------------------------------------------------
      
      The following program handles errors to only some extent
      The followimg program doesn't handle all errors 
      The Integer limit is Signed 4 bytes. That May depend on the system too.
      The program may or may not  give error or may give unexpected values  in case of :
              1. if the Sum of the elements of the Array is greater than the range of signed integer type. Overflow may occur 
              2. If a string containing a character, starting with a number is passed . It may lead to unexpected results
              3. if the reverse of the passed number is greater than the range of the signed integer type in c for checking prime palindrome.
              4. If the square of the number or the square of the reverse of the number or its reverse exceeds the range of signed integer data type.
              5. If a character/string is passed as a number or as an element of an Array . Unexpected results may appear.
              



----------------------------------------------------------------------------------Compile and Run --------------------------------------------------------------------------------------------------
     
     
     Prerequisites : 
                1. Either any IDE for C with compiler is installed or gcc.exe and g++.exe are installed.
                2. gcc.exe and g++.exe must be added in the system environment variables path. 
                3. Move all the assignment files in the same folder


                
      1. Open cmd in the folder where your assignment files are in
      2. Run the following command 
                 gcc main.c mylib.c arraylib.c -o prog.exe
      And Press Enter
      Now your Prog.exe is created
      3. Now to open prog.exe . Run the following  commmand in cmd
                  prog.exe
        And Press Enter...








