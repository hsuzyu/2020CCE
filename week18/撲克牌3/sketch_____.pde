String []face={"Spade","Heart","Dimand","Club"};
String []Num={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int []Card=new int[52];
void setup(){
size(600,700);
for(int i=0; i<52; i++) Card[i] = i;
shuffleCard();
}
void shuffleCard(){
for(int i=0; i<20000; i++){//洗牌洗20000次
int a = int(random(52));
int b = int(random(52));
int temp = Card[a];
Card[a] = Card[b];
Card[b] = temp;
}
}
void drawCard(int i, int x, int y){
int f = i/13, num = i%13;
fill(255); rect(x,y, 100,150);
if( f==1 || f==2 ) fill(255,0,0);
else fill(0);
textAlign(CENTER,CENTER);
textSize(20); text( face[f], x+50,y+50);
textSize(40); text( Num[num], x+50, y+100);
}
void draw(){
for(int k=0; k<4; k++){
for(int i=0; i<5; i++){
drawCard( Card[i+k*5], i*110, k*160 );
}
}
}
void mousePressed(){
shuffleCard();
}
