#ifndef ARDUINO_I2C
#define ARDUINO_I2C

#include <memory>
#include <string>

#define FRONT_RIGHT 	0
#define MIDDLE_RIGHT 	1
#define BACK_RIGHT	2
#define FRONT_LEFT	3
#define MIDDLE_LEFT	4
#define BACK_LEFT	5
#define ALL		6
#define RIGHT		7
#define LEFT		8

class I2CPeripheral;

class Arduino_I2C {
public:
	explicit Arduino_I2C(const std::string &device = "/dev/i2c-1", int address = 0x08);
	~Arduino_I2C();
	
	void write(int channel, int speed);
private:
	std::unique_ptr<I2CPeripheral> i2c_dev;
};

#endif
