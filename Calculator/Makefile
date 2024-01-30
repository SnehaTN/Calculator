CXX = g++
CPPUTEST_HOME = /usr/include/CppUTest
CPPFLAGS += -I$(CPPUTEST_HOME)
CXXFLAGS += -include $(CPPUTEST_HOME)/MemoryLeakDetectorNewMacros.h
CFLAGS += -include $(CPPUTEST_HOME)/MemoryLeakDetectorMallocMacros.h
LD_LIBRARIES = -lCppUTest -lCppUTestExt
TARGET = TEST
SRCS = main.cpp AllTests.cpp test.cpp
OBJS = main.cpp.o AllTests.o test.o

all: $(TARGET)

$(TARGET): $(OBJS)
		echo $(OBJS)
		$(CXX) -o $@ $^ $(CXXFLAGS) $(LD_LIBRARIES)
		
clean:
		rm -rf *.o
