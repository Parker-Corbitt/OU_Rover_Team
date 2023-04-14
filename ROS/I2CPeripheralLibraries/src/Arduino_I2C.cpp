#include "Arduino_I2C.h"
#include "I2CPeripheral.h"
#include <unistd.h>

Arduino_I2C::Arduino_I2C(const std::string &device, int address) {
	i2c_dev = std::make_unique<I2CPeripheral>(device, address);
}

Arduino_I2C::~Arduino_I2C() = default;

void Arduino_I2C::write(int channel, int speed) {
	i2c_dev->WriteRegisterByte(channel, speed);
}
