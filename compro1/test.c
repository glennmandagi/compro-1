#include <stdio.h>
void setup();
void draw();
float circleX;

void setup() {
  size(640,360);
  circleX = 50;
}

void draw(){
  background(50);
  fill(255);
  ellipse(cicrcleX,180,24,24);
  circleX= circleX + 1;
}
