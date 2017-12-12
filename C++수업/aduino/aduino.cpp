#include "HX711.h" //HX711로드셀 엠프 관련함수 호출
#include <PS2Keyboard.h>
#define calibration_factor -7050.0 // 로드셀 스케일 값 선언
#define DOUT  3 //엠프 데이터 아웃 핀 넘버 선언
#define CLK  2  //엠프 클락 핀 넘버 
HX711 scale(DOUT, CLK); //엠프 핀 선언 

void weight_setup() {
  Serial.begin(9600);  // 시리얼 통신 개방
  Serial.println("HX711 scale TEST");  
  scale.set_scale(calibration_factor);  //스케일 지정 
  scale.tare();  //스케일 설정
  Serial.println("Readings:");
}

void weight_loop() {
  Serial.print("Reading: ");
  Serial.print(scale.get_units(), 1);  //무제 출력 
  Serial.print(" lbs"); //단위
  Serial.println(); 
}

const int DataPin = 8;
const int IRQpin =  5;

PS2Keyboard keyboard;

void barcode_setup() {
  delay(1000);
  keyboard.begin(DataPin, IRQpin);
  Serial.begin(9600);
  Serial.println("Keyboard Test:");
}

void barcode_loop() {
  if (keyboard.available()) {

    // read the next key
    char c = keyboard.read();
    Serial.print(c);
  }
}