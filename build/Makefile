CC = g++

CFLAGS = -Wall -c -fPIC

INCLUDES = -I${HOME}/ComingSoon/api/include

LFLAGS = -L${HOME}/ComingSoon/lib

LIB_DIR = ${HOME}/ComingSoon/lib
MAIN_SOURCE = $(wildcard ${HOME}/ComingSoon/main/source/*.cpp)
MAIN_INCLUDE = -I${HOME}/ComingSoon/main/include
MAIN_OUT = ${HOME}/ComingSoon/bin

LIBS = -lapi
API_SRCDIR = ${HOME}/ComingSoon/api/source
API_SOURCE = $(wildcard ${HOME}/ComingSoon/api/source/*.cpp)
#API_SOURCE    = $(shell find $(API_SRCDIR) -name '*.cpp')
API_OBJ_SOURCE = $(wildcard ${HOME}/ComingSoon/api/obj/*.o)
#g++ add.o -shared -o libapi.so
#g++ main.cpp -I/home/soumya/ComingSoon/api/include -L/home/soumya/ComingSoon/lib -lapi -o main

OBJS_DIR_API = ${HOME}/ComingSoon/api/obj/

OBJS = $(patsubst $(API_SRCDIR)/%.cpp,$(OBJS_DIR_API)%.o,$(API_SOURCE))

executable: api
	$(CC) $(INCLUDES) $(MAIN_INCLUDE) $(MAIN_SOURCE) $(LFLAGS) $(LIBS) -o $(MAIN_OUT)/main

api: $(OBJS)
	$(CC) $(API_OBJ_SOURCE) -shared -o $(LIB_DIR)/libapi.so

$(OBJS): $(OBJS_DIR_API)%.o: $(API_SRCDIR)/%.cpp
	$(CC) $(CFLAGS) $(INCLUDES) $< -o  $@
	
clean_api:
	rm -rf ${HOME}/ComingSoon/lib/*.so
	rm -rf ${HOME}/ComingSoon/api/obj/*.o
	
