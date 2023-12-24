void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<9;i++){
    pinMode(i,OUTPUT);
  }
  pinMode(13,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int x,y,z,a,b,c,d;
  unsigned int t=12345;
  y=t/10000;
  y=(t/1000)%10;
  z=(t/100)%10;
  a=x%2;
  b=(x/2)%2;
  c=(x/4)%2;
  d=(x/8)%2;

  digitalWrite(2,a);
  digitalWrite(3,b);
  digitalWrite(4,c);
  digitalWrite(5,d);

  digitalWrite(8,HIGH);
  digitalWrite(8,LOW);

  a=y%2;
  b=(y/2)%2;
  c=(y/4)%2;
  d=(y/8)%2;

  digitalWrite(2,a);
  digitalWrite(3,b);
  digitalWrite(4,c);
  digitalWrite(5,d);

  digitalWrite(7,HIGH);
  digitalWrite(7,LOW);

  a=z%2;
  b=(z/2)%2;
  c=(z/4)%2;
  d=(z/8)%2;

  digitalWrite(2,a);
  digitalWrite(3,b);
  digitalWrite(4,c);
  digitalWrite(5,d);

  digitalWrite(6,HIGH);
  digitalWrite(6,LOW);
}
