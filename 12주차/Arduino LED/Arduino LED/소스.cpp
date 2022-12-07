#include<Servo.h>

int RedPin = 2;    // ���� ����
int BluePin = 3;
int PushSWPin = 6;
int knob = A0;
int servo = 7;

Servo servo1;

void setup()
{
    pinMode(servo, INPUT);
    pinMode(RedPin, OUTPUT);
    pinMode(BluePin, OUTPUT);
    pinMode(PushSWPin, INPUT);

    servo1.attach(servo);
    Serial.begin(9600);
}

void loop()
{

    int Knobservo = analogRead(knob);
    int pwm = map(Knobservo, 0, 1023, 0, 75);    // �� �Լ�

    Serial.print("ServoAnalog: ");
    Serial.print(Knobservo);
    Serial.print("ServoPWM: \n");
    Serial.println(pwm);

    servo1.write(pwm);

    if (pwm == 0)
    {
        digitalWrite(RedPin, LOW);
        Serial.print("RedPin: OFF\n");
        digitalWrite(BluePin, LOW);
        Serial.print("BluePin: OFF\n");
        digitalWrite(PushSWPin, LOW);
        Serial.print("PushSWPin: OFF\n");
    }

    else if (pwm < 45)
    {
        digitalWrite(RedPin, HIGH);   // ���� ���� 15 ����
        Serial.print("RedPin: ON\n");
        digitalWrite(BluePin, LOW);
        Serial.print("BluePin: OFF\n");
        digitalWrite(PushSWPin, LOW);
        Serial.print("PushSWPin: OFF\n");;
    }


    else if (pwm > 45)
    {
        digitalWrite(RedPin, HIGH);   // ���� ���� 60 ����
        Serial.print("RedPin: ON\n");
        digitalWrite(BluePin, HIGH);
        Serial.print("BluePin: ON\n");
        digitalWrite(PushSWPin, HIGH);
        Serial.print("PushSWPin: ON\n");;
    }

    delay(50);
}