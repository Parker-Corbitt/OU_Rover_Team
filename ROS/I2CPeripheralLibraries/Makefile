CC = g++
CFLAGS = -li2c -I
_MOTOR_CONTROL_OBJECTS = Arduino_I2C.o I2CPeripheral.o
MOTOR_CONTROL_OBJECTS = $(patsubst %, bin/%, $(_MOTOR_CONTROL_OBJECTS))
LIBDIR = include

all: motor_control

bin/%.o: src/%.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(LIBDIR)

motor_control: src/motor_control.cpp $(MOTOR_CONTROL_OBJECTS)
	$(CC) -o build/$@ $^ $(CFLAGS) $(LIBDIR)

clean:
	rm bin/*.o
	rm build/*
