OBJECT = main.o
SRC = Main.cpp

CC = g++
CFLAGS = -c

TARGET = main


$(TARGET): $(OBJECT) LinkedList.h Stack.h
	     $(CC) -o $(TARGET) $(OBJECT)

clean:
	rm $(OBJECT) $(TARGET)

