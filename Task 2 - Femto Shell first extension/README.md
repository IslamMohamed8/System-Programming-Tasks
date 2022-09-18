# Task 1 -- Femto Shell
This is a simple shell that displays whatever we write in it. <br>
It has only one command "exit" that terminate the shell

## Static Linking
### Compile
```
gcc -c *.c
```
![diagram](https://github.com/IslamMohamed8/System-Programming-Tasks/blob/main/Task%202%20-%20Femto%20Shell%20first%20extension/Screen%20Shots/Static/Compilation.png)

### Create Static Library
```
ar -rs Lib/libfemtoshell.a *.o
```
![diagram](https://github.com/IslamMohamed8/System-Programming-Tasks/blob/main/Task%202%20-%20Femto%20Shell%20first%20extension/Screen%20Shots/Static/Static%20Library%20Creation.png)


### Static Linking
```
gcc main.c -o output --static -lfemtoshell -L Lib/
```
![diagram](https://github.com/IslamMohamed8/System-Programming-Tasks/blob/main/Task%202%20-%20Femto%20Shell%20first%20extension/Screen%20Shots/Static/Static%20Linking.png)

## Dynamic Linking
### Compilation
```
gcc -c -fPIC *.c
```
![diagram](https://github.com/IslamMohamed8/System-Programming-Tasks/blob/main/Task%202%20-%20Femto%20Shell%20first%20extension/Screen%20Shots/Dynamic/Compilation.png)

### Create Dynamic Library
```
gcc -shared *.o -o Lib/libfemtoshell.so
```
![diagram](https://github.com/IslamMohamed8/System-Programming-Tasks/blob/main/Task%202%20-%20Femto%20Shell%20first%20extension/Screen%20Shots/Dynamic/Dynamic%20Library%20Creation.png)

### Dynamic Linking
```
gcc main.c -o output -lfemtoshell -L Lib
```
![diagram](https://github.com/IslamMohamed8/System-Programming-Tasks/blob/main/Task%202%20-%20Femto%20Shell%20first%20extension/Screen%20Shots/Dynamic/Dynamic%20Linking.png)

## Run
```
./output
```
![diagram](https://github.com/IslamMohamed8/System-Programming-Tasks/blob/main/Task%202%20-%20Femto%20Shell%20first%20extension/Screen%20Shots/Output/output.png)
