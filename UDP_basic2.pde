import hypermedia.net.*;

int PORT_RX=29998;
String HOST_IP ="127.0.0.1.";
UDP udp;
byte a=50,b=50,c=50,d=50,e=50,f=50;

void setup(){
  udp= new UDP(this, PORT_RX, HOST_IP);
  udp.log(true);
  udp.listen(true);
  //noLoop();
  System.out.println("hej");
  println("no hej");
}

void draw(){
 
} 

void receive(byte[] data, String HOST_IP, int PORT_RX){
 
  String value=new String(data);
  print(value+"  ");
  println(data);
char choice=(char)data[0];
byte dane=data[1];
switch(choice)
{
  case 'A':
  a=dane;
  println("a: "+a);
  break;
  case 'B':
  b=dane;
  println("b: "+b);
  break;
  case 'C':
  c=dane;
  println("c: "+c);
  break;
  case 'D':
  d=dane;
  println("d: "+d);
  break;
  case 'E':
  e=dane;
  println("e: "+e);
  break;
  case 'F':
  f=dane;
  println("f: "+f);
  break;
  
}

println("a:"+a+" b:"+b+" c:"+c+" d:"+d+" e:"+e+" f:"+f);
    
}