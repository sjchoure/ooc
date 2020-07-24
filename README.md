# ooc
Object-Oriented C
## Resources
[Learn More on DEV Article](https://dev.to/saviourcode/how-to-create-objects-and-write-it-s-garbage-collector-in-c-4p8e)
## To Compile   
First, convert source file to object files     
`gcc -c -I./lib/ ./lib/strobj.c ./lib/garcol.c ./string_gc.c`   
Second, convert object files to executable/binary file     
`gcc -Wall -Werror -g -fsanitize=address -o string strobj.o garcol.o string_gc.o`

