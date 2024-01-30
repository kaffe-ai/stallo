#define S_TIME 200
#define T_TIME 500

void sosblink();
void blink();

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sosblink();
  delay(1000);
}

void blink_and_wait(int wait_time) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(wait_time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(wait_time);
}

void sosblink() {
  for (int i = 0; i < 3; i++) {
    blink_and_wait(S_TIME);
  }
  for (int i = 0; i < 3; i++) {
    blink_and_wait(T_TIME);
  }
  for (int i = 0; i < 3; i++) {
    blink_and_wait(S_TIME);
  }
}