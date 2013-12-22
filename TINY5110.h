#ifndef __TINY_5110__
#define __TINY_5110__

#define PIN_LCD_SCE   7
#define PIN_LCD_RESET 6
#define PIN_LCD_DC    5
#define PIN_LCD_SDIN  4
#define PIN_LCD_SCLK  3

#define LCD_WIDTH    84
#define LCD_HEIGHT   48

class TINY5110 {
    public:
        TINY5110(uint8_t sce = PIN_LCD_SCE, uint8_t reset = PIN_LCD_RESET, uint8_t dc = PIN_LCD_DC, uint8_t sdin = PIN_LCD_SDIN, uint8_t sclk = PIN_LCD_SCLK);
        void begin(void);
        void gotoXY(int x, int y);
        void write(byte dc, byte data);
        void writeChar(char character);
        void writeString(char *characters);
        void setContrast(uint8_t val);
        void clear(void);

    private:
        uint8_t pin_sce;
        uint8_t pin_reset;
        uint8_t pin_dc;
        uint8_t pin_sdin;
        uint8_t pin_sclk;
};

#endif
