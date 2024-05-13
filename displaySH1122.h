#pragma once

#include "displayDriver.h"
#include "displayBuffer.h"
#include "fonts.h"

// Config
#define DISPLAY_SH1122_BAUDRATE (10 * 1024 * 1024)
#define DISPLAY_SH1122_WIDTH 256
#define DISPLAY_SH1122_HEIGHT 64
#define DISPLAY_SH1122_BITS_PER_PIXEL 4

class displaySH1122 : displayDriver
{
public:
    displaySH1122();

    void drawChar(uint32_t colorRgb, FontDef font, uint16_t x, uint16_t y, char character);
    void drawString(uint32_t colorRgb, FontDef font, uint16_t x, uint16_t y, const char *message);

    void drawLine(uint32_t colorRgb, uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1);
	void drawRectangle(uint32_t colorRgb, uint16_t x, uint16_t y, uint16_t width, uint16_t height);
	void drawTriangle(uint32_t colorRgb, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3);
    void drawCircle(uint32_t colorRgb, int16_t x, int16_t y, int16_t radius);
	void drawFilledRectangle(uint32_t colorRgb, uint16_t x, uint16_t y, uint16_t width, uint16_t height);
	void drawFilledTriangle(uint32_t colorRgb, uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3);
    void drawFilledCircle(uint32_t colorRgb, int16_t x, int16_t y, int16_t radius);

    void drawPixel(uint32_t colorRgb, uint16_t x, uint16_t y);
    void fill(uint32_t colorRgb);
    void drawDisplay();

    void contrast(uint8_t value);
    void invert(bool value);
    void rotate(uint16_t degrees);
};