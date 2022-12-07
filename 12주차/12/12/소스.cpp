#include<Servo.h>

int RedPin = 2;    // 변수 지정
int BluePin = 3;
int GreenPin = 4;
int YellowPin = 5;
int PushSWPin = 6;
int knob = A0;
int servo = 7;

Servo servo1;

void setup()
{
    pinMode(servo, INPUT);
    pinMode(RedPin, OUTPUT);
    pinMode(BluePin, OUTPUT);
    pinMode(GreenPin, OUTPUT);
    pinMode(YellowPin, OUTPUT);
    pinMode(PushSWPin, INPUT);

    servo1.attach(servo);
    Serial.begin(9600);
}

void loop()
{

    int Knobservo = analogRead(knob);
    int pwm = map(Knobservo, 0, 1023, 0, 75);  // 맵 함수

    Serial.print("ServoAnalog: ");
    Serial.print(Knobservo);
    Serial.print("ServoPWM: \n");
    Serial.println(pwm);

    servo1.write(pwm);

    if (pwm == 0)

        if (pwm == 0)
        {
            digitalWrite(RedPin, LOW);
            Serial.print("RedPin: OFF\n");
            digitalWrite(BluePin, LOW);
            Serial.print("BluePin: OFF\n");
            digitalWrite(GreenPin, LOW);
            Serial.print("GreenPin: OFF\n");
            digitalWrite(YellowPin, LOW);
            Serial.print("YellowPin: OFF\n");
            digitalWrite(PushSWPin, LOW);
            Serial.print("PushSWPin: OFF\n");
        }

        else if (pwm < 15)
        {
            digitalWrite(RedPin, HIGH);   // 서보 위치 15 이하
            Serial.print("RedPin: ON\n");
            digitalWrite(BluePin, LOW);
            Serial.print("BluePin: OFF\n");
            digitalWrite(GreenPin, LOW);
            Serial.print("GreenPin: OFF\n");
            digitalWrite(YellowPin, LOW);
            Serial.print("YellowPin: OFF\n");
            digitalWrite(PushSWPin, LOW);
            Serial.print("PushSWPin: OFF\n");;
        }

        else if (pwm > 15 && pwm < 30)
        {
            digitalWrite(RedPin, HIGH);   // 서보 위치 15~30
            Serial.print("RedPin: ON\n");
            digitalWrite(BluePin, HIGH);
            Serial.print("BluePin: ON\n");
            digitalWrite(GreenPin, LOW);
            Serial.print("GreenPin: OFF\n");
            digitalWrite(YellowPin, LOW);
            Serial.print("YellowPin: OFF\n");
            digitalWrite(PushSWPin, LOW);
            Serial.print("PushSWPin: OFF\n");;
        }

        else if (pwm > 30 && pwm < 45)
        {
            digitalWrite(RedPin, HIGH);   // 서보 위치 30~45
            Serial.print("RedPin: ON\n");
            digitalWrite(BluePin, HIGH);
            Serial.print("BluePin: ON\n");
            digitalWrite(GreenPin, HIGH);
            Serial.print("GreenPin: ON\n");
            digitalWrite(YellowPin, LOW);
            Serial.print("YellowPin: OFF\n");
            digitalWrite(PushSWPin, LOW);
            Serial.print("PushSWPin: OFF\n");
        }

        else if (pwm > 45 && pwm < 60)
        {
            digitalWrite(RedPin, HIGH);   // 서보 위치 45~60
            Serial.print("RedPin: ON\n");
            digitalWrite(BluePin, HIGH);
            Serial.print("BluePin: ON\n");
            digitalWrite(GreenPin, HIGH);
            Serial.print("GreenPin: ON\n");
            digitalWrite(YellowPin, HIGH);
            Serial.print("YellowPin: ON\n");
            digitalWrite(PushSWPin, LOW);
            Serial.print("PushSWPin: OFF\n");
        }


        else if (pwm > 60 && pwm < 75)
        {
            digitalWrite(RedPin, HIGH);   // 서보 위치 60~75
            Serial.print("RedPin: ON\n");
            digitalWrite(BluePin, HIGH);
            Serial.print("BluePin: ON\n");
            digitalWrite(GreenPin, HIGH);
            Serial.print("GreenPin: ON\n");
            digitalWrite(YellowPin, HIGH);
            Serial.print("YellowPin: ON\n");
            digitalWrite(PushSWPin, HIGH);
            Serial.print("PushSWPin: ON\n");;
        }

    delay(10);
}