void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(125,110,180);
  text("Q:"+Q,100,100);
  text("A:"+line,100,150);
}
void mousePressed(){
  line=line+"a";
}
