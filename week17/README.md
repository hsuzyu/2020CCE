# 第十七周

## 1.
```JAVA
void setup(){
  size(400,200);
  textSize(40);
}
String line="world";
void draw(){
  background(125,110,180);
  text("hello",100,100);
  text(line,100,150);
}
```
## 2.
```JAVA
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
```
## 3.
```JAVA
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
void keyPressed(){
  line=line+key;
}
```
## Last.
```JAVA
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String []Q={"hello" ,"world" ,"other"};
int Qi=0;
void draw(){
  background(125,110,180);
  text("Score:"+score,100,50);
  text("Q:"+Q[Qi],100,100);
  text("A:"+line,100,150);
}
int score=0;
void keyPressed(){
  int len=line.length();
  if(key>='A' && key<='Z') line=line+key;
  if(key>='a' && key<='z') line=line+key;
  if(key==BACKSPACE && len>0) line=line.substring(0,len-1);
  if(key==ENTER){
    if(line.equals(Q[Qi])==true){
      score++;
      Qi++;
      line="";
    }else score--;
  }
}
```
