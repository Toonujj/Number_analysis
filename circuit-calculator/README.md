# DC Circuit Calculator

A C++ terminal calculator for a single resistor in a DC circuit. It uses Ohm's law (`V = I × R`) to find voltage, current, or resistance from the other two values, then calculates power (`P = V × I`).

## Build and run

With a C++11 or newer compiler, run these commands in the project directory.

```sh
g++ -std=c++11 -Wall -Wextra -pedantic main.cpp -o circuit-calculator
./circuit-calculator
```

On Windows with PowerShell, build with `-o circuit-calculator.exe` and run `.\circuit-calculator.exe`.

## Example

Choose option `2` and enter `12 6` for a 12 V supply and a 6 ohm resistor. The calculator gives a current of **2 A** and a power of **24 W**. Enter input values in volts, amps, and ohms.
