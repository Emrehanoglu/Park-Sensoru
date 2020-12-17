#define echo 6
#define trig 7 
#define kled 9
#define yled 10
#define mled 11
#define alarm1 12
#define alarm2 13

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(kled,OUTPUT);
  pinMode(yled,OUTPUT);
  pinMode(mled,OUTPUT);
  pinMode(alarm1,OUTPUT);
  pinMode(alarm2,OUTPUT);

  Serial.begin(9600);  

}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(2);
  digitalWrite(trig,LOW);

  float zaman = pulseIn(echo,HIGH);
  float kalanmesafe = zaman/58.2;
  Serial.println(kalanmesafe);
  delay(200);
  
  if(kalanmesafe <= 15 and kalanmesafe >12){
    analogWrite(kled,0);
    analogWrite(yled,255);
    analogWrite(mled,0);
    digitalWrite(alarm1,HIGH);
    digitalWrite(alarm2,HIGH);
    delay(100);
    analogWrite(kled,0);
    analogWrite(yled,0);
    analogWrite(mled,0);
    digitalWrite(alarm1,LOW);
    digitalWrite(alarm2,LOW);
    delay(100);
  }
    else if(kalanmesafe <= 12 and kalanmesafe >9){
    analogWrite(kled,125);
    analogWrite(yled,255);
    analogWrite(mled,0);
    digitalWrite(alarm1,HIGH);
    digitalWrite(alarm2,HIGH);
    delay(80);
    analogWrite(kled,0);
    analogWrite(yled,0);
    analogWrite(mled,0);
    digitalWrite(alarm1,LOW);
    digitalWrite(alarm2,LOW);
    delay(80);
    }
    else if(kalanmesafe <= 9 and kalanmesafe >6){
    analogWrite(kled,255);
    analogWrite(yled,255);
    analogWrite(mled,0);
    digitalWrite(alarm1,HIGH);
    digitalWrite(alarm2,HIGH);
    delay(50);
    analogWrite(kled,0);
    analogWrite(yled,0);
    analogWrite(mled,0);
    digitalWrite(alarm1,LOW);
    digitalWrite(alarm2,LOW);
    delay(50);
    }
    else if(kalanmesafe <= 6 and kalanmesafe >3){
    analogWrite(kled,255);
    analogWrite(yled,125);
    analogWrite(mled,0);
    digitalWrite(alarm1,HIGH);
    digitalWrite(alarm2,HIGH);
    delay(25);
    analogWrite(kled,0);
    analogWrite(yled,0);
    analogWrite(mled,0);
    digitalWrite(alarm1,LOW);
    digitalWrite(alarm2,LOW);
    delay(25);
    }
    else if(kalanmesafe <= 3 and kalanmesafe >0){
    analogWrite(kled,255);
    analogWrite(yled,0);
    analogWrite(mled,0);
    digitalWrite(alarm1,HIGH);
    digitalWrite(alarm2,HIGH);
    }
    else{
      analogWrite(kled,0);
      analogWrite(yled,0);
      analogWrite(mled,0);
      digitalWrite(alarm1,LOW);
      digitalWrite(alarm2,LOW);
      }
      }
