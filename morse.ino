int BTN=1;
int RESET=2;
int LED_RED=3;
int LED_GREEN=3;
int LED_YELLOW=3;
int BUZZ=15;

void setup() {
   pinMode(BTN,INPUT);
   pinMode(RESET,INPUT);
   pinMode(LED_RED,OUTPUT);
   pinMode(LED_YELLOW,OUTPUT);
   pinMode(LED_GREEN,OUTPUT);
   pinMode(BUZZ,OUTPUT);
   //
  Serial.begin(115200);
  Serial.println("hello");
}

void loop() {
  char text;
  if(Serial.available()){
    text=Serial.read();
    Serial.println(text);
  }
    char input=text;
    if (input == 'a' || input == 'A') {lA();}//if the input is a or A go to function lA
    if (input == 'b' || input == 'B') {lB();}//same but with b letter
    if (input == 'c' || input == 'C') {lC();}
    if (input == 'd' || input == 'D') {lD();}
    if (input == 'e' || input == 'E') {lE();}
    if (input == 'f' || input == 'F') {lF();}
    if (input == 'g' || input == 'G') {lG();}
    if (input == 'h' || input == 'H') {lH();}
    if (input == 'i' || input == 'I') {lI();}
    if (input == 'j' || input == 'J') {lJ();}
    if (input == 'k' || input == 'K') {lK();}
    if (input == 'l' || input == 'L') {lL();}
    if (input == 'm' || input == 'M') {lM();}
    if (input == 'n' || input == 'N') {lN();}
    if (input == 'o' || input == 'O') {lO();}
    if (input == 'p' || input == 'P') {lP();}
    if (input == 'q' || input == 'Q') {lQ();}
    if (input == 'r' || input == 'R') {lR();}
    if (input == 's' || input == 'S') {lS();}
    if (input == 't' || input == 'T') {lT();}
    if (input == 'u' || input == 'U') {lU();}
    if (input == 'v' || input == 'V') {lV();}
    if (input == 'w' || input == 'W') {lW();}
    if (input == 'x' || input == 'X') {lX();}
    if (input == 'y' || input == 'Y') {lY();}
    if (input == 'z' || input == 'Z') {lZ();}
  //輸入單字(字串)
  //按鈕輸入摩斯密碼密碼(LED顏色判斷對錯)
  //輸入成功顯示溫度
}
void lA () {dot();dash();shortspace();}//letter A in morse code!
void lB () {dash();dot();dot();dot();shortspace();}//same for B
void lC () {dash();dot();dash();dot();shortspace();}
void lD () {dash();dot();dot();shortspace();}
void lE () {dot();shortspace();}
void lF () {dot();dot();dash();dot();shortspace();}
void lG () {dash();dash();dot();shortspace();}
void lH () {dot();dot();dot();dot();shortspace();}
void lI () {dot();dot();shortspace();}
void lJ () {dot();dash();dash();dash();shortspace();}
void lK () {dash();dot();dash();shortspace();}
void lL () {dot();dash();dot();dot();shortspace();}
void lM () {dash();dash();shortspace();}
void lN () {dash();dot();shortspace();}
void lO () {dash();dash();dash();shortspace();}
void lP () {dot();dash();dash();dot();shortspace();}
void lQ () {dash();dash();dot();dash();shortspace();}
void lR () {dot();dash();dot();shortspace();}
void lS () {dot();dot();dot();shortspace();}
void lT () {dash();shortspace();}
void lU () {dot();dot();dash();shortspace();}
void lV () {dot();dot();dot();dash();shortspace();}
void lW () {dot();dash();dash();shortspace();}
void lX () {dash();dot();dot();dash();shortspace();}
void lY () {dash();dot();dash();dash();shortspace();}
void lZ () {dash();dash();dot();dot();shortspace();}
void dot () {digitalWrite(BUZZ,HIGH); delay (100); digitalWrite(BUZZ,LOW); delay (200);}//改
void dash () {digitalWrite(BUZZ,HIGH); delay (300); digitalWrite(BUZZ,LOW); delay (200);}//改
void shortspace () {delay(600);}