
#include<SPI.h>
#include<nRF24L01.h>
#include<RF24.h>

const int x_out = A0;
const int y_out = A1;
RF24 radio(10, 9);
const byte address[6] = "00001";
struct data{
  int xAxis;
  int yAxis;

};
data send_data;



void setup() {
  // put your setup code here, to run once:
  radio.begin();
  Serial.begin(9600);
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.setDataRate(RF24_250KBPS);
  radio.stopListening();
}

void loop() {
  
  // put your main code here, to run repeatedly:
  send_data.xAxis = analogRead(x_out);
  send_data.yAxis = analogRead(y_out);
  radio.write(&send_data, sizeof(data));
  Serial.print("X= ");
  Serial.println(send_data.xAxis);
  Serial.print("Y= ");
  Serial.println(send_data.yAxis);


}
