int deg = 0;
int total = 20000;
int predeg = 0;

int rotate(int deg){
  float trans = 180/18;
  return trans*deg + 600;
}

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, OUTPUT);

}

void loop() {
  if (Serial.available()>0){
   predeg = Serial.parseInt();
    if (predeg != 0){
  deg = predeg;
    }
  Serial.println(deg);
  }
  
  // put your main code here, to run repeatedly:
digitalWrite(2,HIGH);
delayMicroseconds(rotate(deg));
digitalWrite(2,LOW);
delayMicroseconds(total-rotate(deg));
}
