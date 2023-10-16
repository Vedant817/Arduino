void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int x=0;
  x=digitalRead(10);
  if(x==1){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
}
