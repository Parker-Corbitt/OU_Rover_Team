#include "Arduino_I2C.h"
#include <iostream>

using namespace std;

int main() {
	Arduino_I2C Arduino("/dev/i2c-1", 0x08);
	int channel;
	int speed;
	while(true) {
		cout << "Input Desired Speed (0-255)... ";
		cin >> speed;
		Arduino.write(ALL, speed);
	}
}
