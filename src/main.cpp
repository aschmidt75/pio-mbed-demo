#ifndef UNIT_TEST

#include "mbed.h"

Serial pc(SERIAL_TX, SERIAL_RX);

int main() {
  pc.baud(115200);

  printf("Hello World\n");
}

#endif
