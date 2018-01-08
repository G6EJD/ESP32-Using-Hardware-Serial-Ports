# ESP32-Using-Hardware-Serial-Ports
How to use ESP32 hardware serial ports

There are three serial ports on the ESP32 known as U0UXD, U1UXD and U2UXD.

U0UXD is generally used to communicate with the ESP32 for programming and during reset/boot.

U1UXD is unused and can be used for your projects. Some boards use this port for SPI Flash access though!

U2UXD is unused and can be used for your projects.

Port usage is defined like this Serial2.begin(baud-rate, protocol, RX pin, TX pin);

