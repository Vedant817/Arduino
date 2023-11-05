int b,c,d,e,f,g,h;
int a=5;
void setup() {
  for(int i=2;i<=8;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  b=a%2;
  c=a/2;
  d=c%2;
  e=c/2;
  f=e%2;
  g=e/2;
  h=g%2;

  digitalWrite(2,b);
  digitalWrite(3,d);
  digitalWrite(4,f);
  digitalWrite(5,h);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}
