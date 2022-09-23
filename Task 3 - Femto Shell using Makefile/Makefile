# Macros
COMPILER = gcc
OBJECTS = fact.o fib.o rand.o
FLAG_COMPILE = -c
FLAG_OUTPUT = -o
OUTPUT_NAME = femtoshell
REMOVE = rm -rf
STATIC_LIBRARY_DIRECTORY = Lib/
STATIC_LIBRARY_NAME = libfemtoshell.a
DYNAMIC_LIBRARY_DIRECTORY = Lib/
DYNAMIC_LIBRARY_NAME = libfemtoshell.a


all: main.o $(OBJECTS)
	$(COMPILER) $? $(FLAG_OUTPUT) $(OUTPUT_NAME)

main.o: main.c
	$(COMPILER) $(FLAG_COMPILE) $? $(FLAG_OUTPUT) $@

fact.o: fact.c
	$(COMPILER) $(FLAG_COMPILE) $? $(FLAG_OUTPUT) $@

fib.o: fib.c
	$(COMPILER) $(FLAG_COMPILE) $? $(FLAG_OUTPUT) $@

rand.o: rand.c
	$(COMPILER) $(FLAG_COMPILE) $? $(FLAG_OUTPUT) $@


# Create Static Library
static: $(OBJECTS)
	if [ ! -d $(STATIC_LIBRARY_DIRECTORY) ]; then mkdir $(STATIC_LIBRARY_DIRECTORY) ; fi
	ar -rs $(STATIC_LIBRARY_DIRECTORY)$(STATIC_LIBRARY_NAME) $(OBJECTS)	
	$(COMPILER) main.c -o $(OUTPUT_NAME) --static -lfemtoshell -L $(STATIC_LIBRARY_DIRECTORY)



# Create Dynamic Library				


clean: 
	$(REMOVE) *.o	