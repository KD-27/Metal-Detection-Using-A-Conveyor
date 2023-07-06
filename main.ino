#define convey1 4
#define convey2 6
#define convey3 10
#define sen1 2
#define sen2 3
#define sen3 18
#define sen4 19
#define sen5 16
#define sen6 17
#define sen7 20
#define rodless 5
#define TN1 7
#define suction 8
#define cylinder1 9
#define cylinder2 14
#define gripper 22
#define c1s1 21
#define c1s2 23
#define c2s1 25
#define c2s2 27
#define TN2 24
#define red 26
#define orange 30
#define green 28

bool s1 = true;
bool s2 = false;
bool s3 = false;
bool s4 = false;
bool s5 = false;
bool s6 = false;
bool s7 = false;
bool s8 = false;
bool s9 = false;
bool s10 = false;
bool s11 = false;
bool s12 = false;
bool s13 = false;
bool s14 = false;
bool s15 = false;
bool s16 = false;
bool s17 = false;
bool s18 = false;
bool s19 = false;
bool s20 = false;
bool s21 = false;
bool s22 = false;
bool s23 = false;
bool s24 = false;
bool s25 = false;
bool s26 = false;
bool s27 = false;
bool s28 = false;
bool s29 = false;
bool s30 = false;
bool s31 = false;
bool s32 = false;
bool s33 = false;
bool s34 = false;
bool s35 = false;
bool s36 = false;
bool s37 = false;
bool s38 = false;
bool s39 = false;
bool s40 = false;
bool s41 = false;

void setup() {
  pinMode(convey1, OUTPUT);
  pinMode(convey2, OUTPUT);
  pinMode(convey3, OUTPUT);
  pinMode(sen1, INPUT_PULLUP);
  pinMode(sen2, INPUT_PULLUP);
  pinMode(sen3, INPUT_PULLUP);
  pinMode(sen4, INPUT_PULLUP);
  pinMode(sen5, INPUT_PULLUP);
  pinMode(sen6, INPUT_PULLUP);
  pinMode(sen7, INPUT_PULLUP);
  pinMode(rodless, OUTPUT);
  pinMode(TN1, OUTPUT);
  pinMode(TN2, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(suction, OUTPUT);
  pinMode(cylinder1, OUTPUT);
  pinMode(cylinder2, OUTPUT);
  pinMode(gripper, OUTPUT);
  pinMode(c1s1, INPUT_PULLUP);
  pinMode(c1s2, INPUT_PULLUP);
  pinMode(c2s1, INPUT_PULLUP);
  pinMode(c2s2, INPUT_PULLUP);

}

void loop() {
  if (s1 == true) {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(orange, HIGH);
    digitalWrite(rodless, HIGH);
    digitalWrite(TN1, HIGH);
    digitalWrite(cylinder1, HIGH);
    digitalWrite(cylinder2, HIGH);
    digitalWrite(gripper, HIGH);
    digitalWrite(TN2, HIGH);
    digitalWrite(convey1, HIGH);
    digitalWrite(convey2, HIGH);
    digitalWrite(convey3, HIGH);
    digitalWrite(suction, HIGH);
    s1 = false;
    s2 = true;
  }
  if (s2 == true) {
    if (digitalRead(sen1) == LOW) {
      delay(2000);
      s2 = false;
      s3 = true;
    }
  } if (s3 == true) {
    delay(2000);
    analogWrite(convey1,127);
    s3 = false;
    s4 = true;
  } if (s4 == true) {
    if (digitalRead(sen2) == HIGH) {
      s4 = false;
      s5 = true;
    }
  } if (s5 == true) {
    digitalWrite(convey1, LOW);
    digitalWrite(orange, LOW);
    digitalWrite(green, HIGH);
    delay(5000);
    digitalWrite(orange, HIGH);
    digitalWrite(green, LOW);
    analogWrite(convey1, 127);
    s5 = false;
    s6 = true;
  } if (s6 == true) {
    if (digitalRead(sen3) == LOW) {
      s6 = false;
      s7 = true;
    }
  } if (s7 == true) {
    digitalWrite(convey1, 0);
    delay(2000);
    digitalWrite(rodless, LOW);
    delay(3000);
    digitalWrite(TN1, LOW);
    delay(2000);
    digitalWrite(suction, LOW);
    delay(2000);
    digitalWrite(TN1, HIGH);
    delay(2000);
    digitalWrite(rodless, HIGH);
    delay(2000);
    digitalWrite(TN1, LOW);
    delay(2000);
    digitalWrite(suction, HIGH);
    delay(2000);
    digitalWrite(TN1, HIGH);
    delay(2000);
    s7 = false;
    s8 = true;
  } if (s8 == true) {
    if (digitalRead(sen4) == LOW) {
      s10 = true;
      s8 = false;
    }
  } if (s10 == true) {
    delay(2000);
    analogWrite(convey2, 127);
    s10 = false;
    s11 = true;
  } if (s11 == true) {
    if (digitalRead(sen5) == LOW) {
      s11 = false;
      s12 = true;
    }
  } if (s12 == true) {
    delay(300);
    digitalWrite(convey2, 0);
    delay(2000);
    s12 = false;
    s14 = true;
  }
  if (s14 == true) {
    if (digitalRead(c1s1) == LOW && digitalRead(c2s1) == LOW) {
      s14 = false;
      s15 = true;
    }
  } if (s15 == true) {
    digitalWrite(gripper, HIGH);
    delay(2000);
    digitalWrite(cylinder2, LOW);
    s15 = false;
    s16 = true;
  } if (s16 == true) {
    if (digitalRead(c2s2) == LOW) {
      s16 = false;
      s17 = true;
    }
  } if (s17 == true) {
    delay(2000);
    digitalWrite(gripper, LOW);
    delay(2000);
    digitalWrite(cylinder2, HIGH);
    s17 = false;
    s18 = true;
  } if (s18 == true) {
    if (digitalRead(c2s1) == LOW) {
      s18 = false;
      s19 = true;
    }
  } if (s19 == true) {
    delay(2000);
    digitalWrite(cylinder1, LOW);
    s19 = false;
    s20 = true;
  } if (s20 == true) {
    if (digitalRead(c1s2) == LOW) {
      s20 = false;
      s21 = true;
    }
  } if (s21 == true) {
    delay(2000);
    digitalWrite(cylinder2, LOW);
    s21 = false;
    s22 = true;
  } if (s22 == true) {
    if (digitalRead(c2s2) == LOW) {
      s22 = false;
      s23 = true;
    }
  } if (s23 == true) {
    delay(2000);
    digitalWrite(gripper, 1);
    delay(2000);
    digitalWrite(cylinder2, HIGH);
    s23 = false;
    s24 = true;
  } if (s24 == true) {
    if (digitalRead(c2s1) == LOW) {
      s24 = false;
      s25 = true;
    }
  } if (s25 == true) {
    digitalWrite(green, HIGH);
    digitalWrite(orange, LOW);
    delay(5000);
    digitalWrite(orange, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(cylinder2, LOW);
    s25 = false;
    s26 = true;
  } if (s26 == true) {
    if (digitalRead(c2s2) == LOW) {
      s26 = false;
      s27 = true;
    }
  } if (s27 == true) {
    delay(2000);
    digitalWrite(gripper, 0);
    delay(2000);
    digitalWrite(cylinder2, HIGH);
    s27 = false;
    s28 = true;
  } if (s28 == true) {
    if (digitalRead(c2s1) == LOW) {
      s28 = false;
      s29 = true;
    }
  } if (s29 == true) {
    delay(2000);
    digitalWrite(cylinder1, HIGH);
    s29 = false;
    s30 = true;
  } if (s30 == true) {
    if (digitalRead(c1s1) == LOW) {
      s30 = false;
      s31 = true;
    }
  } if (s31 == true) {
    delay(2000);
    digitalWrite(cylinder2, LOW);
    s31 = false;
    s32 = true;
  } if (s32 == true) {
    if (digitalRead(c2s2) == LOW) {
      s33 = true;
      s32 = false;
    }
  } if (s33 == true) {
    delay(2000);
    digitalWrite(gripper, 1);
    delay(2000);
    digitalWrite(cylinder2, HIGH);
    s34 = true;
    s33 = false;
  } if (s34 == true) {
    if (digitalRead(c2s1) == LOW){
    s34 = false;
    s35 = true;
  }
} if (s35 == true) {
    delay(2000);
    digitalWrite(gripper, 1);
    delay(2000);
    s35 = false;
    s36 = true;
  }
  if (s36 == true) {
    if (digitalRead(sen5) == LOW) {
      s36 = false;
      s37 = true;
    }
  } if (s37 == true) {
    delay(2000);
    analogWrite(convey2, 127);
    s37 = false;
    s38 = true;
  } if (s38 == true) {
    if (digitalRead(sen6) == LOW) {
      s38 = false;
      s39 = true;
    }
  } if (s39 == HIGH) {
    delay(100);
    digitalWrite(convey2, 0);
    delay(2000);
    analogWrite(convey3, 127);
    digitalWrite(TN2, LOW);
    delay(2000);
    digitalWrite(TN2, HIGH);
    s39 = false;
    s40 = true;
  }
  if (s40 == true) {
    if (digitalRead(sen7) == HIGH) {
      s40 = false;
      s41 = true;
    }
  } if (s41 == true) {
    digitalWrite(convey3, 0);
  }
}
