# User Interface Command Options:

```
GMFlasher -p <programmer> -m <model> -b <baudrate> -c <com.port> -F <memory:operation:filename:format>
```

## Options Explanation

1- __(-p <programmer>):__ this option for programmer type, for now we just used (-p arduino).

2- __(-m <model>):__ this option for model type to use with the programmer, used (-m atmega328p).

3- __(-b <baudrate>):__ this option for the baudrate value, the default (-b 115200).

4- __(-c <com.port>):__ this option for the com port number like (tty.USB0).

5- __(-F <memory:operation:filename:format>):__ this option subdivided to:

   - __memroy: flash, eeprom.__
   - __operation: __r__ead, __w__rite, __v__erify.__
   - __filename: /path/to/filename.hex.__
   - __format: intel hex file.__
---

For version 1.0.0 of our app the above options will be supported, future development may add new options.
