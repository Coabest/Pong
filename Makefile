CXX = g++ -std=c++11

SOURCES = main.cpp \
					ball.cpp \
					pad.cpp \
					Collision.cpp \

OBJECTS = main.o \
					ball.o \
					pad.o \
					Collision.o \

LIBLINK = -lsfml-graphics -lsfml-window -lsfml-system

TARGET = pong

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $^ -o $@ $(LIBLINK)

$(OBJECTS): $(SOURCES)
	$(CXX) -c $^

clean:
	$(RM) $(OBJECTS)
