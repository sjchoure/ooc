# ooc
Object-Oriented in C   
## To Compile   
First, convert source file to object files     
`gcc -c -I./lib/ ./lib/strobj.c ./lib/garcol.c ./string_gc.c`   
Second, convert object files to executable/binary file     
`gcc -Wall -Werror -g -fsanitize=address -o string strobj.o garcol.o string_gc.o`
