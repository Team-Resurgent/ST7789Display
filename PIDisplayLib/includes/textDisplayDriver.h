#pragma once

#include "displayBase.h"
#include "pico/stdlib.h"
#include "hardware/spi.h"
#include "hardware/i2c.h"
#include "hardware/structs/spi.h"

class textDisplayDriver : displayBase
{

public:

    void initSpi(spi_inst_t* spi, uint32_t baudRate);
    void initI2c(i2c_inst_t* i2c, uint32_t address,  uint32_t baudRate);
    int32_t scanI2c();

    // void writeCommand(uint8_t *buff, uint32_t buff_size);
    // void writeCommandByte(uint8_t cmd);
    // void writeData(uint8_t *buff, uint32_t buff_size);
    // void writeDataByte(uint8_t data);

public:

};
