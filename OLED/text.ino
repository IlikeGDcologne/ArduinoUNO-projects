#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


void setup() {
  // 0x3C is default i2c adress in some cases MAY be different
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(10, 10);
  display.println("Add your text");
  display.display();
}

void loop() {
}


//You can add: display.drawBitmap(0, 0, oled_image, SCREEN_WIDTH, SCREEN_HEIGHT, WHITE) to add images
//Wiring: GND - GND, VCC - VCC, SDA - A4, SCK - A5
//In loop you may add display.scrollRight(0, 7) to scroll right for 7 seconds
