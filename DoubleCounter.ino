// C++ code


int input[] = {2,3,4,5,6,7,8};
void setup()
{
  for(int i=0;i<=6;i++)
  {
    pinMode(input[i],OUTPUT);
  }
}

void loop()
{   
    for(int y=0;y<10;y++)
  	{    
      // digitalWrite(input[6],1);
      	digitalWrite(input[6],1);
      	digitalWrite(input[5],0);
        digitalWrite(input[0],y%2);
        digitalWrite(input[1],(y/2)%2);
        digitalWrite(input[2],(y/4)%2);
        digitalWrite(input[3],(y/8)%2);
        digitalWrite(input[5],1);	        
	  
      for(int z=0;z<=9;z++)
      {    
        digitalWrite(input[6],0);
        digitalWrite(input[0],z%2);
        digitalWrite(input[1],(z/2)%2);
        digitalWrite(input[2],(z/4)%2);
        digitalWrite(input[3],(z/8)%2);
        delay(100);
      }
    }
}