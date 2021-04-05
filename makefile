CC = gcc
CFLAGS = -Wall -g
INCLUDES = -I/include/Board/*.hpp -I/include/lib/*.hpp -I/include/Socket/*.hpp -I/include/Switch/*.hpp
SRCS = /src/Board/*.cpp /src/Lib/*.cpp /src/Socket/*.cpp /src/Switch/*.cpp /src/main.cpp
OBJS = $(SRCS:.c=.o)
MAIN = home
.PHONY: depend clean
all:    $(MAIN)
        @echo  Simple compiler named home has been compiled
        
$(MAIN): $(OBJS) $(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)
.c.o: $(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@
clean: $(RM) *.o *~ $(MAIN)
depend: $(SRCS) makedepend $(INCLUDES) $^
