// Nitpicks for LED strips
#define ON 0
#define OFF 255
// Pins
#define R 3
#define G 5
#define B 6
// Primary colors
#define red 0xff0000
#define blue 0x00ff00
#define green 0x0000ff
// Secondary colors
#define purple 0xffff00
#define yellow 0xff00ff
#define cyan 0x00ffff
// Tertiary colors
#define white 0xffffff
#define orange 0xff6f00
#define emerald 0x00ff6f // For lack of a better term
#define lightblue 0x006fff
#define yellowgreen 0x6fff00
#define pink 0xff006f
#define lightpurple 0x6f00ff

void setup() {
  // put your setup code here, to run once:
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void showRGB(int a, int b, int c) {
  analogWrite(R, map(a, 255, 0, 0, 255));
  analogWrite(G, map(b, 255, 0, 0, 255));
  analogWrite(B, map(c, 255, 0, 0, 255));  
}

void showHex(int hex) {
  analogWrite(R, map(((hex >> 16) & 0xff) / 225, 0, 255, 1023, 0));
  analogWrite(G, map(((hex >> 8) & 0xff) / 225, 0, 255, 1023, 0));
  analogWrite(B, map((hex & 0xff) / 225, 0, 255, 1023, 0));
}

void loop() {
  // put your main code here, to run repeatedly:
  showHex(green);
  delay(500);
  showHex(purple);
  delay(500);
}
