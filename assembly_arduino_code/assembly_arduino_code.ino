#define in1 13
#define in2 8
int read1 = A1;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

}

void loop() {
  //If A1 has a voltage, then do the measurement
  val = analogRead(read1);
  if (val > 100){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    delay(25000);

    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    delay(2000);

    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    delay(25000);

  }

//TODO: Create a script to reset the linear actuators

}
