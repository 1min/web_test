#include "HX711.h" //HX711�ε弿 ���� �����Լ� ȣ��
#include <PS2Keyboard.h>
#define calibration_factor -7050.0 // �ε弿 ������ �� ����
#define DOUT  3 //���� ������ �ƿ� �� �ѹ� ����
#define CLK  2  //���� Ŭ�� �� �ѹ� 
HX711 scale(DOUT, CLK); //���� �� ���� 

void weight_setup() {
  Serial.begin(9600);  // �ø��� ��� ����
  Serial.println("HX711 scale TEST");  
  scale.set_scale(calibration_factor);  //������ ���� 
  scale.tare();  //������ ����
  Serial.println("Readings:");
}

void weight_loop() {
  Serial.print("Reading: ");
  Serial.print(scale.get_units(), 1);  //���� ��� 
  Serial.print(" lbs"); //����
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