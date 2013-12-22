# Arduino Library for Nokia 5110

![Screen Shots](http://files.gracecode.com/2013_12_22/1387719744.png)

## Example

```
#include <Arduino.h>
#include <TINY5110.h>

#define PIN_LCD_SCE   7
#define PIN_LCD_RESET 6
#define PIN_LCD_DC    5
#define PIN_LCD_SDIN  4
#define PIN_LCD_SCLK  3

TINY5110 lcd(PIN_LCD_SCE, PIN_LCD_RESET, PIN_LCD_DC, PIN_LCD_SDIN, PIN_LCD_SCLK);

void setup() {
    lcd.begin();
    lcd.setContrast(40);
    lcd.gotoXY(0, 0);
    lcd.writeString("Hello, World");
}

void loop() { }
```


## Contact

* http://www.gracecode.com/
* lucky[at]gracecode.com

## Other Links

* https://www.sparkfun.com/products/10168
* https://github.com/kuldeepdhaka/nokia-1100-lcd-with-arduino

