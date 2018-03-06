/*  MULTIPLAYER PING PONG GAME FINAL CODE
 */



///////////////////////////// Player1 Paddle Characters //////////////////////////////////
byte P1paddle1[8] = {
  0b00001,
  0b00001,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte P1paddle2[8] = {
  0b00000,
  0b00001,
  0b00001,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte P1paddle3[8] = {
  0b00000,
  0b00000,
  0b00001,
  0b00001,
  0b00001,
  0b00000,
  0b00000,
  0b00000
};

byte P1paddle4[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00001,
  0b00001,
  0b00000,
  0b00000
};

byte P1paddle5[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00001,
  0b00001,
  0b00000
};

byte P1paddle6[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00001,
  0b00001
};

byte P1paddle7a[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00001
};

byte P1paddle7b[8] = {
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte P1paddle8a[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001
};

byte P1paddle8b[8] = {
  0b00001,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};


////////////////////////////// Player2 Paddle Characters //////////////////////////////////
byte P2paddle1[8] = {
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte P2paddle2[8] = {
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte P2paddle3[8] = {
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000
};

byte P2paddle4[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000
};

byte P2paddle5[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000
};

byte P2paddle6[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000
};

byte P2paddle7a[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000
};

byte P2paddle7b[8] = {
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte P2paddle8a[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000
};

byte P2paddle8b[8] = {
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

/////////////////////////// Game Ball Characters //////////////////////////////////

// Row 1, Each Column
byte ball00[8] = {
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball01[8] = {
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball02[8] = {
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball03[8] = {
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball04[8] = {
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

// Row 2, Each Column
byte ball10[8] = {
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball11[8] = {
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball12[8] = {
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball13[8] = {
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball14[8] = {
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

// Row 3, Each Column
byte ball20[8] = {
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball21[8] = {
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball22[8] = {
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball23[8] = {
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball24[8] = {
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

// Row 4, Each Column
byte ball30[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball31[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball32[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball33[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball34[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

// Row 5, Each Column
byte ball40[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball41[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball42[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000  
};

byte ball43[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000  
};

byte ball44[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000  
};

// Row 6, Each Column
byte ball50[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000  
};

byte ball51[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000  
};

byte ball52[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000  
};

byte ball53[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000  
};

byte ball54[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000  
};

// Row 7, Each Column
byte ball60[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000  
};

byte ball61[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000  
};

byte ball62[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000  
};

byte ball63[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000  
};

byte ball64[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000  
};

// Row 8, Each Column
byte ball70[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000  
};

byte ball71[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000  
};

byte ball72[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100  
};

byte ball73[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010  
};

byte ball74[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001  
};

////////////////////////////////////////Character at Last//////////////////////////////////

byte manUp[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b10101,
  0b00100,
  0b00100,
  0b01010
};

byte manDown[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b00100,
  0b10101,
  0b00100,
  0b01010
};
/**********************************************************************************************************************************************************/

// include the library code:
#include <LiquidCrystal.h>
#include<SoftwareSerial.h>


// LCD setup
LiquidCrystal lcd(12, 11, 5, 4, 7, 6);

//ESP Module
SoftwareSerial client(2,3); //RX, TX

const int button = 9;                 // Push button (pulled low)


// Globals
int upDownDir;                        // Up/Down State of the Ball
int leftRightDir;                     // Left/Right State of the Ball 
int angle;                            // Angle with respect to the horizontal (X) axis the ball is travelling
float azimuth;                        // Clockwise angle from the Vertical (Y) axis the ball is travelling
boolean gameStarted;                  // Game State
int P1paddlePos;                      // Position of the player 1's paddle (14 possible positions)
int P2paddlePos;                      // Position of the player 2's paddle (14 possible positions)
int ballPos[2];                       // X, Y coordinates of the bal
int P1points;                         // Keeps track of how many balls have passed the players boundary (game is to 3)  --PLAYER 1 POINTS
int P2points;                         // Keeps track of how many balls have passed the players boundary (game is to 3)  --PLAYER 2 POINTS
float distance;                       // Distance between successive positions of the ball
float totalDistance;                  // Total distance from the ball's last boundary deflection (control) point, this is used to properly calculate the ball's trajectory

// Game Control Variables (CHANGE TO SUIT YOUR DESIRE)

float speedIncreasePercent = 10;      // Speed increase percentage when the player successfully bounces the ball off their paddle
int gameAngleMin = 10;                // Min trajectory angle for the ball
int gameAngleMax = 50;                // Max trajectory angle for the ball
float initialDist = 2.0;              // Initial Distance value that is used at the start of a game (pick a bigger number for the ball to travel faster at the start)

//ESP FUNCTIONS

String webpage="";
int i=0,k=0;
String readString;
int x=0;

boolean No_IP=false;
String IP="";
char temp1='0';

     
void check4IP(int t1)
{
  int t2=millis();
  while(t2+t1>millis())
  {
    while(client.available()>0)
    {
      if(client.find("WIFI GOT IP"))
      {
        No_IP=true;
      }
    }
  }
}

void get_ip()
{
  IP="";
  char ch=0;
  while(1)
  {
    client.println("AT+CIFSR");
    while(client.available()>0)
    {
      if(client.find("STAIP,"))
      {
        delay(1000);
        Serial.print("IP Address:");
        while(client.available()>0)
        {
          ch=client.read();
          if(ch=='+')
          break;
          IP+=ch;
        }
      }
      if(ch=='+')
      break;
    }
    if(ch=='+')
    break;
    delay(1000);
  }
  
  Serial.print(IP);
  Serial.print("Port:");
  Serial.println(80);
}


void connect_wifi(String cmd, int t)
{
  int temp=0,i=0;
  while(1)
  {
    Serial.println(cmd);
    client.println(cmd); 
    while(client.available())
    {
      if(client.find("OK"))
      i=8;
    }
    delay(t);
    if(i>5)
    break;
    i++;
  }
  if(i==8)
  Serial.println("OK");
  else
  Serial.println("Error");
}


void wifi_init()
{
      connect_wifi("AT",100);
      connect_wifi("AT+CWMODE=3",100);
       
      connect_wifi("AT+RST",5000);
      connect_wifi("AT+CWQAP",100);
      check4IP(5000);
      if(!No_IP)
      {
        Serial.println("Connecting Wifi....");
        connect_wifi("AT+CWJAP=\"nikhil\",\"12345678\"",7000);         //provide your WiFi username and password here
     // connect_wifi("AT+CWJAP=\"vpn address\",\"wireless network\"",7000);
      }
      else
        {
        }
      Serial.println("Wifi Connected"); 
      get_ip();
      connect_wifi("AT+CIPMUX=1",100);
      connect_wifi("AT+CIPSERVER=1,80",100);
}

void sendwebdata(String webPage)
{
    int ii=0;
     while(1)
     {
      unsigned int l=webPage.length();
      Serial.print("AT+CIPSEND=0,");
      client.print("AT+CIPSEND=0,");
      Serial.println(l+2);
      client.println(l+2);
      delay(100);
      Serial.println(webPage);
      client.println(webPage);
      while(client.available())
      {
        //Serial.print(Serial.read());
        if(client.find("OK"))
        {
          ii=11;
          break;
        }
      }
      if(ii==11)
      break;
      delay(100);
     }
}




void setup1() 
{
   Serial.begin(9600);
   client.begin(9600);
   wifi_init();
   Serial.println("CREATED SERVER FOR WIFI MODULE");
}

int hop=0;

void loop1() 
{
  k=0;
  if(hop==0)
  Serial.println("Please Refresh your Page to view Scores");
  Send();
  
  hop=1;
  /*
  while(k<1000)
  {
    k++;
   while(client.available())
   {
    if(client.find("0,CONNECT"))
    {
      Serial.println("Started Printing Scores");
      Send();
      Serial.println("Done Printing Scores");
      delay(1000);
    }
  }
  delay(1);
 }
 */
}

String webpage1="";

void Send()
{
     webpage = "<br><br><body bgcolor=f2f344>";
     webpage.concat("<center><b><u><i> MULTIPLAYER PING PONG </i></u></b></center>");
     webpage.concat("<br><br>SCORE:-<br><br>");
     webpage.concat((String)P1points);
     webpage.concat("-");
     webpage.concat((String)P2points);
     sendwebdata(webpage);

     //webpage="<center><b><u><i> MULTIPLAYER PING PONG </i></u></b></center>";
    // webpage.concat("<br><br><center><b><u><i>PLAYER POINTS :-</i></u></b></center><br><br>");
     //webpage.concat("<br><br><center><b><u><i>PLAYER 1 POINTS<br><br></i></u></b></i></center>");
     //sendwebdata(webpage);
     /*
     webpage.concat("<br><br><center><b><u><i>");
     webpage.concat((String)P1points);
     webpage.concat("<br><br><center></b></u></i>");
     webpage.concat("<br><br><center><b><u><i>PLAYER 2 POINTS<br><br></center></b></u></i>");
     webpage.concat("<br><br><center><b><u><i>");
     webpage.concat((String)P2points);
     webpage.concat("<br><br><center></b></u></i>");
     sendwebdata(webpage);*/
    // webpage=(String)P1points;
     //webpage1=(String)P2points;
     //strcat("PLAYER 1 :",webpage);
     //strcat("\nPLAYER 2 :",webpage1);
     //webpage.concat(webpage1);
     //sendwebdata(webpage);
    
     //webpage="<h3><b> PLAYER 2 POINTS </b><br><br></h3>";
      //sendwebdata(webpage);
       //webpage=(String)P2points;
       //sendwebdata(webpage);
     // webpage="<h4 color='black'> (String)P2points<br><br> </h4>";
      //sendwebdata(webpage);
      if(P2points>P1points)
      {
      webpage="<h5><b><i> PLAYER 2 WINS </i></b><br><br> </h5>";
      sendwebdata(webpage);
      }
      if(P1points>P2points)
      {
      webpage="<h5><b><i> PLAYER 1 WINS </i></b><br><br> </h5>";
      sendwebdata(webpage);
      }
      delay(1000);
     //sendwebdata(webpage);
     client.println("AT+CIPCLOSE=0"); 
     Serial.println("AT+CIPCLOSE=0");
}

void setup() {
  setup1();
  gameStarted = false;
  // set up the lcd's number of columns and rows: 
  lcd.begin(20, 4);
  Serial.begin(9600);
  client.begin(9600);
  
  // set button pin as input
  pinMode(button, INPUT);

  // calculate an initial trajectory angle for the ball
  calcInitialDir();
  
  // set the ball's initial position to centre screen
  ballPos[0] = 39;
  ballPos[1] = 7;
  
  // initialize control variables to default values
  distance = initialDist;
  totalDistance = distance;
  P1points = 0;
  P2points = 0;
  // display message for player to press the button to start the game
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Multiplayer PingPong");
  lcd.setCursor(0,1);
  lcd.print("Press to start game!");
}

void loop() {
  
  // check the game state
  if (gameStarted == true)    // Game is started
  {
    ballUpdate();                // Update the ball's position
    
    // Check if game to 3 has ended
    if (gameStarted == true) {
      player1PaddleUpdate();        // Update the player's paddle position
      player2PaddleUpdate();
      
      // Check for button press to reset the game
      if (digitalRead(button) == HIGH) {
        delay(250);
        setup();
      }
    }
    delay(100);
  }
  else                        // Game has not started
  { 
    // Check for button press
    if (digitalRead(button) == HIGH)
    {
      // Start a game (toggle game state) and initialize the game board
      gameStarted = true;
      drawInitial();
    }
  }
}

// Function for drawing the initial state of the game board
void drawInitial() {
  lcd.clear();
  // Draw the ball in it's default starting position
  lcd.createChar(1, ball04);
  lcd.setCursor(7,1);
  lcd.write(1);
  delay(250);
}

// Function for determining the ball's trajectory angle
void calcInitialDir() {
 // randomly get a 1 or -1 for the up/down and left/right directions and the ball's angle of travel from the X axis  
  upDownDir = 0;
  leftRightDir = 0;
  while (upDownDir == 0) {
    upDownDir = random(-1,2);
  }
  while (leftRightDir == 0) {
    leftRightDir = random(-1,2);
  }
  // Randomly grab a game angle between Min and Max values
  randomSeed(analogRead(2));
  angle = random(gameAngleMin,gameAngleMax + 1);

}

// Function for updating the player's paddle position based on the potentiometer's value
void player1PaddleUpdate() {
    // read the pot on A1 for Player 1 paddle position
    int P1potReading = analogRead(A1);
    
    // map and constrain the pot's value to represent one of the 30 possible paddle positions
    P1paddlePos = constrain(map(P1potReading, 0, 950, 1, 30), 1, 30);
    
    //clear the paddle
    lcd.setCursor(0,0);
    lcd.print(" ");
    lcd.setCursor(0,1);
    lcd.print(" ");
    lcd.setCursor(0,2);
    lcd.print(" ");
    lcd.setCursor(0,3);
    lcd.print(" ");
    
    //draw new paddle position using the correct custom LCD character(s)
    if (P1paddlePos == 1)
    {
      lcd.createChar(2, P1paddle1);
      lcd.setCursor(0,0);
      lcd.write(2);
    }
    else if (P1paddlePos == 2)
    {
      lcd.createChar(3, P1paddle2);
      lcd.setCursor(0,0);
      lcd.write(3);
    }
    else if (P1paddlePos == 3)
    {
      lcd.createChar(2, P1paddle3);
      lcd.setCursor(0,0);
      lcd.write(2);
    }
    else if (P1paddlePos == 4)
    {
      lcd.createChar(3, P1paddle4);
      lcd.setCursor(0,0);
      lcd.write(3);
    }
    else if (P1paddlePos == 5)
    {
      lcd.createChar(2, P1paddle5);
      lcd.setCursor(0,0);
      lcd.write(2);
    }
    else if (P1paddlePos == 6)
    {
      lcd.createChar(3, P1paddle6);
      lcd.setCursor(0,0);
      lcd.write(3);
    }
    else if (P1paddlePos == 7)
    {
      lcd.createChar(2, P1paddle7a);
      lcd.setCursor(0,0);
      lcd.write(2);
      lcd.createChar(3, P1paddle7b);
      lcd.setCursor(0,1);
      lcd.write(3);
    }
    else if (P1paddlePos == 8)
    {
      lcd.createChar(2, P1paddle8a);
      lcd.setCursor(0,0);
      lcd.write(2);
      lcd.createChar(3, P1paddle8b);
      lcd.setCursor(0,1);
      lcd.write(3);
    }
    else if (P1paddlePos == 9)
    {
      lcd.createChar(2, P1paddle1);
      lcd.setCursor(0,1);
      lcd.write(2);
    }
    else if (P1paddlePos == 10)
    {
      lcd.createChar(3, P1paddle2);
      lcd.setCursor(0,1);
      lcd.write(3);
    }
    else if (P1paddlePos == 11)
    {
      lcd.createChar(2, P1paddle3);
      lcd.setCursor(0,1);
      lcd.write(2);
    }
    else if (P1paddlePos == 12)
    {
      lcd.createChar(3, P1paddle4);
      lcd.setCursor(0,1);
      lcd.write(3);
    }
    else if (P1paddlePos == 13)
    {
      lcd.createChar(2, P1paddle5);
      lcd.setCursor(0,1);
      lcd.write(2);
    }
    else if (P1paddlePos == 14)
    {
      lcd.createChar(3, P1paddle6);
      lcd.setCursor(0,1);
      lcd.write(3);
    }
    else if (P1paddlePos == 15)
    {
      lcd.createChar(2, P1paddle7a);
      lcd.setCursor(0,1);
      lcd.write(2);
      lcd.createChar(3, P1paddle7b);
      lcd.setCursor(0,2);
      lcd.write(3);
    }
    else if (P1paddlePos == 16)
    {
      lcd.createChar(2, P1paddle8a);
      lcd.setCursor(0,1);
      lcd.write(2);
      lcd.createChar(3, P1paddle8b);
      lcd.setCursor(0,2);
      lcd.write(3);
    }
    else if (P1paddlePos == 17)
    {
      lcd.createChar(2, P1paddle1);
      lcd.setCursor(0,2);
      lcd.write(2);
    }
    else if (P1paddlePos == 18)
    {
      lcd.createChar(3, P1paddle2);
      lcd.setCursor(0,2);
      lcd.write(3);
    }
    else if (P1paddlePos == 19)
    {
      lcd.createChar(2, P1paddle3);
      lcd.setCursor(0,2);
      lcd.write(2);
    }
    else if (P1paddlePos == 20)
    {
      lcd.createChar(3, P1paddle4);
      lcd.setCursor(0,2);
      lcd.write(3);
    }
    else if (P1paddlePos == 21)
    {
      lcd.createChar(2, P1paddle5);
      lcd.setCursor(0,2);
      lcd.write(2);
    }
    else if (P1paddlePos == 22)
    {
      lcd.createChar(3, P1paddle6);
      lcd.setCursor(0,2);
      lcd.write(3);
    }
    else if (P1paddlePos == 23)
    {
      lcd.createChar(2, P1paddle7a);
      lcd.setCursor(0,2);
      lcd.write(2);
      lcd.createChar(3, P1paddle7b);
      lcd.setCursor(0,3);
      lcd.write(3);
    }
    else if (P1paddlePos == 24)
    {
      lcd.createChar(2, P1paddle8a);
      lcd.setCursor(0,2);
      lcd.write(2);
      lcd.createChar(3, P1paddle8b);
      lcd.setCursor(0,3);
      lcd.write(3);
    }
 else if (P1paddlePos == 25)
    {
      lcd.createChar(2, P1paddle1);
      lcd.setCursor(0,3);
      lcd.write(2);
    }
    else if (P1paddlePos == 26)
    {
      lcd.createChar(3, P1paddle2);
      lcd.setCursor(0,3);
      lcd.write(3);
    }
    else if (P1paddlePos == 27)
    {
      lcd.createChar(2, P1paddle3);
      lcd.setCursor(0,3);
      lcd.write(2);
    }
    else if (P1paddlePos == 28)
    {
      lcd.createChar(3, P1paddle4);
      lcd.setCursor(0,3);
      lcd.write(3);
    }
    else if (P1paddlePos == 29)
    {
      lcd.createChar(2, P1paddle5);
      lcd.setCursor(0,3);
      lcd.write(2);
    }
    else if (P1paddlePos == 30)
    {
      lcd.createChar(3, P1paddle6);
      lcd.setCursor(0,3);
      lcd.write(3);
    }
}

void player2PaddleUpdate(){
  // read the pot on A0 for Player 2 paddle position
    int P2potReading = analogRead(A0);

  // map and constrain the pot's value to represent one of the 14 possible paddle positions
    P2paddlePos = constrain(map(P2potReading, 0, 950, 1, 30), 1, 30);
  
    lcd.setCursor(19,0);
    lcd.print(" ");
    lcd.setCursor(19,1);
    lcd.print(" "); 
    lcd.setCursor(19,2);
    lcd.print(" ");
    lcd.setCursor(19,3);
    lcd.print(" ");
    
    //draw new paddle position using the correct custom LCD character(s)
    if (P2paddlePos == 30)
    {
      lcd.createChar(6, P2paddle1);
      lcd.setCursor(19,0);
      lcd.write(6);
    }
    else if (P2paddlePos == 29)
    {
      lcd.createChar(7, P2paddle2);
      lcd.setCursor(19,0);
      lcd.write(7);
    }
    else if (P2paddlePos == 28)
    {
      lcd.createChar(6, P2paddle3);
      lcd.setCursor(19,0);
      lcd.write(6);
    }
    else if (P2paddlePos == 27)
    {
      lcd.createChar(7, P2paddle4);
      lcd.setCursor(19,0);
      lcd.write(7);
    }
    else if (P2paddlePos == 26)
    {
      lcd.createChar(6, P2paddle5);
      lcd.setCursor(19,0);
      lcd.write(6);
    }
    else if (P2paddlePos == 25)
    {
      lcd.createChar(7, P2paddle6);
      lcd.setCursor(19,0);
      lcd.write(7);
    }
    else if (P2paddlePos == 24)
    {
      lcd.createChar(6, P2paddle7a);
      lcd.setCursor(19,0);
      lcd.write(6);
      lcd.createChar(7, P2paddle7b);
      lcd.setCursor(19,1);
      lcd.write(7);
    }
    else if (P2paddlePos == 23)
    {
      lcd.createChar(6, P2paddle8a);
      lcd.setCursor(19,0);
      lcd.write(6);
      lcd.createChar(7, P2paddle8b);
      lcd.setCursor(19,1);
      lcd.write(7);
    }
    else if (P2paddlePos == 22)
    {
      lcd.createChar(6, P2paddle1);
      lcd.setCursor(19,1);
      lcd.write(6);
    }
    else if (P2paddlePos == 21)
    {
      lcd.createChar(7, P2paddle2);
      lcd.setCursor(19,1);
      lcd.write(7);
    }
    else if (P2paddlePos == 20)
    {
      lcd.createChar(6, P2paddle3);
      lcd.setCursor(19,1);
      lcd.write(6);
    }
    else if (P2paddlePos == 19)
    {
      lcd.createChar(7, P2paddle4);
      lcd.setCursor(19,1);
      lcd.write(7);
    }
    else if (P2paddlePos == 18)
    {
      lcd.createChar(6, P2paddle5);
      lcd.setCursor(19,1);
      lcd.write(6);
    }
    else if (P2paddlePos == 17)
    {
      lcd.createChar(7, P2paddle6);
      lcd.setCursor(19,1);
      lcd.write(7);
    }
    else if (P2paddlePos == 16)
    {
      lcd.createChar(6, P2paddle7a);
      lcd.setCursor(19,1);
      lcd.write(6);
      lcd.createChar(7, P2paddle7b);
      lcd.setCursor(19,2);
      lcd.write(7);
    }
    else if (P2paddlePos == 15)
    {
      lcd.createChar(6, P2paddle8a);
      lcd.setCursor(19,1);
      lcd.write(6);
      lcd.createChar(7, P2paddle8b);
      lcd.setCursor(19,2);
      lcd.write(7);
    }
     else if (P2paddlePos == 1)
    {
      lcd.createChar(6, P2paddle6);
      lcd.setCursor(19,3);
      lcd.write(6);
    }
    else if (P2paddlePos == 2)
    {
      lcd.createChar(7, P2paddle5);
      lcd.setCursor(19,3);
      lcd.write(7);
    }
    else if (P2paddlePos == 3)
    {
      lcd.createChar(6, P2paddle4);
      lcd.setCursor(19,3);
      lcd.write(6);
    }
    else if (P2paddlePos == 4)
    {
      lcd.createChar(7, P2paddle3);
      lcd.setCursor(19,3);
      lcd.write(7);
    }
    else if (P2paddlePos == 5)
    {
      lcd.createChar(6, P2paddle2);
      lcd.setCursor(19,3);
      lcd.write(6);
    }
    else if (P2paddlePos == 6)
    {
      lcd.createChar(7, P2paddle1);
      lcd.setCursor(19,3);
      lcd.write(7);
    }
    else if (P2paddlePos == 7)
    {
      lcd.createChar(6, P2paddle8a);
      lcd.setCursor(19,2);
      lcd.write(6);
      lcd.createChar(7, P2paddle8b);
      lcd.setCursor(19,3);
      lcd.write(7);
    }
    else if (P2paddlePos == 8)
    {
      lcd.createChar(6, P2paddle7a);
      lcd.setCursor(19,2);
      lcd.write(6);
      lcd.createChar(7, P2paddle7b);
      lcd.setCursor(19,3);
      lcd.write(7);
    }
    else if (P2paddlePos == 9)
    {
      lcd.createChar(6, P2paddle6);
      lcd.setCursor(19,2);
      lcd.write(6);
    }
    else if (P2paddlePos == 10)
    {
      lcd.createChar(7, P2paddle5);
      lcd.setCursor(19,2);
      lcd.write(7);
    }
    else if (P2paddlePos == 11)
    {
      lcd.createChar(6, P2paddle4);
      lcd.setCursor(19,2);
      lcd.write(6);
    }
    else if (P2paddlePos == 12)
    {
      lcd.createChar(7, P2paddle3);
      lcd.setCursor(19,2);
      lcd.write(7);
    }
    else if (P2paddlePos == 13)
    {
      lcd.createChar(6, P2paddle2);
      lcd.setCursor(19,2);
      lcd.write(6);
    }
    else if (P2paddlePos == 14)
    {
      lcd.createChar(7, P2paddle1);
      lcd.setCursor(19,2);
      lcd.write(7);
    }
}

// Function for updating the ball's position on the LCD screen using one of 40 possible custom characters
void ballUpdate() {

  // Calculate the azimuth of the ball's game angle (trajectory angle)
  if (upDownDir == 1 && leftRightDir == -1)
  {
    azimuth = 90 - angle;
  }
  else if (upDownDir == -1 && leftRightDir == -1)
  {
    azimuth = 90 + angle;
  }
  else if (upDownDir == -1 && leftRightDir == 1)
  {
    azimuth = 270 - angle;
  }
  else
  {
    azimuth = 270 + angle;
  }
  // Convert degrees to radians
  azimuth = azimuth * PI / 180.0;
  
  // Solve for the ball's new position (uses the ball's last deflection point along with total distance to better display the true game angle)
  int newX = sin(azimuth) * totalDistance + (float)ballPos[0];
  int newY = cos(azimuth) * totalDistance + (float)ballPos[1]; 

  // Constrain the ball's position to be on the game board
  newX = constrain(newX, 5, 94);
  newY = constrain(newY, 0, 31);
  
  // Update the total distance between the ball and it's last deflection (bounce) point within the game 
  totalDistance = totalDistance + distance;  
  
  // Check if the ball has hit a top/bottom boundary and if so update it's Up/Down state value 
  if (newY == 0)      // Hit the Bottom
  {
    upDownDir = 1;
    totalDistance = distance;
    ballPos[0] = newX;
    ballPos[1] = newY + 1;
  }
  else if (newY == 31)  // Hit the Top
  {
 
    upDownDir = -1;
    totalDistance = distance;
    ballPos[0] = newX;
    ballPos[1] = newY - 1;
  } 
  
  // Check if the ball has hit a left/right boundary and if so update it's Left/Right state value
  if (newX == 5)      // Hit Player 1
  {
    // Speed up the ball each time it hit's the player's paddle
    distance = (1.0 + speedIncreasePercent / 100.0) * distance;
    
    // Check to see if the player's paddle was in the correct paddle position to bounce the ball
    if (newY == 31 && (P1paddlePos == 1 || P1paddlePos == 2 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 30 && (P1paddlePos == 1 || P1paddlePos == 2 || P1paddlePos == 3 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 29 && (P1paddlePos == 1 || P1paddlePos == 2 || P1paddlePos == 3 || P1paddlePos == 4)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 28 && (P1paddlePos == 1 || P1paddlePos == 2 || P1paddlePos == 3 || P1paddlePos == 4 || P1paddlePos == 5 )) {
      hitP1PaddleUpdate(newX, newY);
    }   
    else if (newY == 27 && (P1paddlePos == 2 || P1paddlePos == 3 || P1paddlePos == 4 || P1paddlePos == 5 || P1paddlePos == 6 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 26 && (P1paddlePos == 3 || P1paddlePos == 4 || P1paddlePos == 5 || P1paddlePos == 6 || P1paddlePos == 7 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 25 && (P1paddlePos == 4 || P1paddlePos == 5 || P1paddlePos == 6 || P1paddlePos == 7 || P1paddlePos == 8 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 24 && (P1paddlePos == 5 || P1paddlePos == 6 || P1paddlePos == 7 || P1paddlePos == 8 || P1paddlePos == 9 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 23 && (P1paddlePos == 6 || P1paddlePos == 7 || P1paddlePos == 8 || P1paddlePos == 9 || P1paddlePos == 10 )) {
      hitP1PaddleUpdate(newX, newY);
    }    
    else if (newY == 22 && (P1paddlePos == 7 || P1paddlePos == 8 || P1paddlePos == 9 || P1paddlePos == 10 || P1paddlePos == 11 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 21 && (P1paddlePos == 8 || P1paddlePos == 9 || P1paddlePos == 10 || P1paddlePos == 11 || P1paddlePos == 12 )) {
      hitP1PaddleUpdate(newX, newY);
    }    
    else if (newY == 20 && (P1paddlePos == 9 || P1paddlePos == 10 || P1paddlePos == 11 || P1paddlePos == 12 || P1paddlePos == 13 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 19 && (P1paddlePos == 10 ||P1paddlePos == 11 || P1paddlePos == 12 || P1paddlePos == 13 || P1paddlePos == 14 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 18 && (P1paddlePos == 11 || P1paddlePos == 12 || P1paddlePos == 13 || P1paddlePos == 14 || P1paddlePos == 15 )) {
      hitP1PaddleUpdate(newX, newY);
    }    
    else if (newY == 17 && (P1paddlePos == 12 || P1paddlePos == 13 || P1paddlePos == 14 || P1paddlePos == 15 || P1paddlePos == 16 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 16 && (P1paddlePos == 13 || P1paddlePos == 14 || P1paddlePos == 15 || P1paddlePos == 16 || P1paddlePos == 17 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 15 && (P1paddlePos == 14 || P1paddlePos == 15 || P1paddlePos == 16 || P1paddlePos == 17 || P1paddlePos == 18 )) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 14 && (P1paddlePos == 15 || P1paddlePos == 16 || P1paddlePos == 17 || P1paddlePos == 18 || P1paddlePos == 19)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 13 && (P1paddlePos == 16 || P1paddlePos == 17 || P1paddlePos == 18 || P1paddlePos == 19 || P1paddlePos == 20)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 12 && (P1paddlePos == 17 || P1paddlePos == 18 || P1paddlePos == 19 || P1paddlePos == 20 || P1paddlePos == 21)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 11 && (P1paddlePos == 18 || P1paddlePos == 19 || P1paddlePos == 20 || P1paddlePos == 21 || P1paddlePos == 22)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 10 && (P1paddlePos == 19 || P1paddlePos == 20 || P1paddlePos == 21 || P1paddlePos == 22 || P1paddlePos == 23)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 9 && (P1paddlePos == 20 || P1paddlePos == 21 || P1paddlePos == 22 || P1paddlePos == 23 || P1paddlePos == 24)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 8 && (P1paddlePos == 21 || P1paddlePos == 22 || P1paddlePos == 23 || P1paddlePos == 24 || P1paddlePos == 25)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 7 && (P1paddlePos == 22 || P1paddlePos == 23 || P1paddlePos == 24 || P1paddlePos == 25 || P1paddlePos == 26)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 6 && (P1paddlePos == 23 || P1paddlePos == 24 || P1paddlePos == 25 || P1paddlePos == 26 || P1paddlePos == 28)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 5 && (P1paddlePos == 24 || P1paddlePos == 25 || P1paddlePos == 26 || P1paddlePos == 27 || P1paddlePos == 28)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 4 && (P1paddlePos == 25 || P1paddlePos == 26 || P1paddlePos == 27 || P1paddlePos == 28 || P1paddlePos == 29)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 3 && (P1paddlePos == 26 || P1paddlePos == 27 || P1paddlePos == 28 || P1paddlePos == 29 || P1paddlePos == 30)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 2 && (P1paddlePos == 27 || P1paddlePos == 28 || P1paddlePos == 29 || P1paddlePos == 30)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 1 && (P1paddlePos == 28 || P1paddlePos == 29 || P1paddlePos == 30)) {
      hitP1PaddleUpdate(newX, newY);
    }
    else if (newY == 0 && (P1paddlePos == 29 || P1paddlePos == 30)) {
      hitP1PaddleUpdate(newX, newY);
    }
    // The ball has crossed the player's boundary
    else {
      //Reset the ball's position and control variables for the next point
      ballPos[0] = 39;
      ballPos[1] = 7;
      totalDistance = distance;
      P2points++;
      if (P1points != 3 && P2points !=3)
      {
        lcd.clear();
        lcd.setCursor(8,1);
        lcd.print(P1points);
        lcd.print("-");
        lcd.print(P2points);
        delay(2000);
      }
      
      drawInitial();
      // Determine a new game angle for this point
      calcInitialDir();
   
        if (P2points == 5) {
        gameStarted = false;
        loop1();
        // Display Game Over Message
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("      Score:");
        lcd.print(P1points);
        lcd.print("-");
        lcd.print(P2points);
        lcd.setCursor(0,1);
        lcd.print("   Player 2 Wins");
        lcd.createChar(1,manUp);
        lcd.setCursor(17,1);
        lcd.write(1);
        delay(400);
        lcd.createChar(1,manDown);
        lcd.setCursor(17,1);
        lcd.write(1);
        delay(400);
        lcd.createChar(1,manUp);
        lcd.setCursor(17,1);
        lcd.write(1);
        delay(400);
        lcd.createChar(1,manDown);
        lcd.setCursor(17,1);
        lcd.write(1);
        delay(400);
        lcd.createChar(1,manUp);
        lcd.setCursor(17,1);
        lcd.write(1);
        delay(2000);
        // Call setup to start the game over
        //setup();
        }
      }
    }
  else if (newX == 94)  // Hit the player 2
  {
    // Speed up the ball each time it hit's the player's paddle
    distance = (1.0 + speedIncreasePercent / 100.0) * distance;
    
    // Check to see if the player's paddle was in the correct paddle position to bounce the ball
    if (newY == 0 && (P2paddlePos == 1 || P2paddlePos == 2 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 1 && (P2paddlePos == 1 || P2paddlePos == 2 || P2paddlePos == 3 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 2 && (P2paddlePos == 1 || P2paddlePos == 2 || P2paddlePos == 3 || P2paddlePos == 4)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 3 && (P2paddlePos == 1 || P2paddlePos == 2 || P2paddlePos == 3 || P2paddlePos == 4 || P2paddlePos == 5 )) {
      hitP2PaddleUpdate(newX, newY);
    }   
    else if (newY == 4 && (P2paddlePos == 2 || P2paddlePos == 3 || P2paddlePos == 4 || P2paddlePos == 5 || P2paddlePos == 6 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 5 && (P2paddlePos == 3 || P2paddlePos == 4 || P2paddlePos == 5 || P2paddlePos == 6 || P2paddlePos == 7 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 6 && (P2paddlePos == 4 || P2paddlePos == 5 || P2paddlePos == 6 || P2paddlePos == 7 || P2paddlePos == 8 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 7 && (P2paddlePos == 5 || P2paddlePos == 6 || P2paddlePos == 7 || P2paddlePos == 8 || P2paddlePos == 9 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 8 && (P2paddlePos == 6 || P2paddlePos == 7 || P2paddlePos == 8 || P2paddlePos == 9 || P2paddlePos == 10 )) {
      hitP2PaddleUpdate(newX, newY);
    }    
    else if (newY == 9 && (P2paddlePos == 7 || P2paddlePos == 8 || P2paddlePos == 9 || P2paddlePos == 10 || P2paddlePos == 11 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 10 && (P2paddlePos == 8 || P2paddlePos == 9 || P2paddlePos == 10 || P2paddlePos == 11 || P2paddlePos == 12 )) {
      hitP2PaddleUpdate(newX, newY);
    }    
    else if (newY == 11 && (P2paddlePos == 9 || P2paddlePos == 10 || P2paddlePos == 11 || P2paddlePos == 12 || P2paddlePos == 13 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 12 && (P2paddlePos == 10 ||P2paddlePos == 11 || P2paddlePos == 12 || P2paddlePos == 13 || P2paddlePos == 14 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 13 && (P2paddlePos == 11 || P2paddlePos == 12 || P2paddlePos == 13 || P2paddlePos == 14 || P2paddlePos == 15 )) {
      hitP2PaddleUpdate(newX, newY);
    }    
    else if (newY == 14 && (P2paddlePos == 12 || P2paddlePos == 13 || P2paddlePos == 14 || P2paddlePos == 15 || P2paddlePos == 16 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 15 && (P2paddlePos == 13 || P2paddlePos == 14 || P2paddlePos == 15 || P2paddlePos == 16 || P2paddlePos == 17 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 16 && (P2paddlePos == 14 || P2paddlePos == 15 || P2paddlePos == 16 || P2paddlePos == 17 || P2paddlePos == 18 )) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 17 && (P2paddlePos == 15 || P2paddlePos == 16 || P2paddlePos == 17 || P2paddlePos == 18 || P2paddlePos == 19)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 18 && (P2paddlePos == 16 || P2paddlePos == 17 || P2paddlePos == 18 || P2paddlePos == 19 || P2paddlePos == 20)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 19 && (P2paddlePos == 17 || P2paddlePos == 18 || P2paddlePos == 19 || P2paddlePos == 20 || P2paddlePos == 21)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 20 && (P2paddlePos == 18 || P2paddlePos == 19 || P2paddlePos == 20 || P2paddlePos == 21 || P2paddlePos == 22)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 21 && (P2paddlePos == 19 || P2paddlePos == 20 || P2paddlePos == 21 || P2paddlePos == 22 || P2paddlePos == 23)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 22 && (P2paddlePos == 20 || P2paddlePos == 21 || P2paddlePos == 22 || P2paddlePos == 23 || P2paddlePos == 24)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 23 && (P2paddlePos == 21 || P2paddlePos == 22 || P2paddlePos == 23 || P2paddlePos == 24 || P2paddlePos == 25)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 24 && (P2paddlePos == 22 || P2paddlePos == 23 || P2paddlePos == 24 || P2paddlePos == 25 || P2paddlePos == 26)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 25 && (P2paddlePos == 23 || P2paddlePos == 24 || P2paddlePos == 25 || P2paddlePos == 26 || P2paddlePos == 28)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 26 && (P2paddlePos == 24 || P2paddlePos == 25 || P2paddlePos == 26 || P2paddlePos == 27 || P2paddlePos == 28)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 27 && (P2paddlePos == 25 || P2paddlePos == 26 || P2paddlePos == 27 || P2paddlePos == 28 || P2paddlePos == 29)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 28 && (P2paddlePos == 26 || P2paddlePos == 27 || P2paddlePos == 28 || P2paddlePos == 29 || P2paddlePos == 30)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 29 && (P2paddlePos == 27 || P2paddlePos == 28 || P2paddlePos == 29 || P2paddlePos == 30)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 30 && (P2paddlePos == 28 || P2paddlePos == 29 || P2paddlePos == 30)) {
      hitP2PaddleUpdate(newX, newY);
    }
    else if (newY == 31 && (P2paddlePos == 29 || P2paddlePos == 30)) {
      hitP2PaddleUpdate(newX, newY);
    }
    // The ball has crossed the player2's boundary
    else {
      //Reset the ball's position and control variables for the next point
      ballPos[0] = 39;
      ballPos[1] = 7;
      totalDistance = distance;
      P1points++;
      if (P1points != 3 && P2points !=3)
      {
        lcd.clear();
        lcd.setCursor(8,1);
        lcd.print(P1points);
        lcd.print("-");
        lcd.print(P2points);
        delay(2000);
      }
      
      drawInitial();
      // Determine a new game angle for this point
      calcInitialDir();
      
        if (P1points == 5) {
        gameStarted = false;
        loop1();
        // Display Game Over Message
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("      Score:");
        lcd.print(P1points);
        lcd.print("-");
        lcd.print(P2points);
        lcd.setCursor(0,1);
        lcd.print("   Player 1 Wins");
        lcd.createChar(1,manUp);
        lcd.setCursor(17,1);
        lcd.write(1);
        delay(400);
        lcd.createChar(1,manDown);
        lcd.setCursor(17,1);
        lcd.write(1);
        delay(400);
        lcd.createChar(1,manUp);
        lcd.setCursor(17,1);
        lcd.write(1);
        delay(400); 
        lcd.createChar(1,manDown);
        lcd.setCursor(17,1);
        lcd.write(1);
        delay(400);
        lcd.createChar(1,manUp);
        lcd.setCursor(17,1);
        lcd.write(1);
        delay(2000);
        
        // Call setup to start the game over
        //setup();
        }
      }
    }
  
  // Check to make sure the Game is NOT over and then update the ball's LCD character
  if (gameStarted == true) {
  drawChars(newX, newY);
  }
}

// Function to perform necessary updates/events when the ball hits the player's paddle
void hitP1PaddleUpdate(int X, int Y) {
  leftRightDir = -1;
  totalDistance = distance;
  ballPos[0] = X + 1;
  ballPos[1] = Y;
}

void hitP2PaddleUpdate(int X, int Y) {
  leftRightDir = 1;
  totalDistance = distance;
  ballPos[0] = X - 1;
  ballPos[1] = Y;
}

// Function to determine which one of the 40 possible custom LCD characters should be drawn (and where) on the LCD
void drawChars(int X, int Y) {
  int LCDrow;
  int LCDcol;
  
  // Determine which row of the LCD the ball's character is on
  if ( Y <= 7)
  {
    LCDrow = 3;
  }
  else if (Y <= 15) {
    LCDrow = 2;
  }  
  else if (Y <= 23) {
    LCDrow = 1;
  }
  else {
    LCDrow = 0;
  }
  
  //Determine which column of the LCD the ball's character is on
  if (X <= 9) {
    LCDcol = 1;
  }
  else if (X <= 14) {
    LCDcol = 2;
  }
  else if (X <= 19) {
    LCDcol = 3;
  }
  else if (X <= 24) {
    LCDcol = 4;
  }
  else if (X <= 29) {
    LCDcol = 5;
  }
  else if (X <= 34) {
    LCDcol = 6;
  }
  else if (X <= 39) {
    LCDcol = 7;
  }
  else if (X <= 44) {
    LCDcol = 8;
  }
  else if (X <= 49) {
    LCDcol = 9;
  }
  else if (X <= 54) {
    LCDcol = 10;
  }
  else if (X <= 59) {
    LCDcol = 11;
  }
  else if (X <= 64) {
    LCDcol = 12;
  }
  else if (X <= 69) {
    LCDcol = 13;
  }
  else if (X <= 74) {
    LCDcol = 14;
  }
  else if (X <= 79) {
    LCDcol = 15;
  }
  else if (X <= 84) {
    LCDcol = 16;
  }
  else if (X <= 89) {
    LCDcol = 17;
  }
  else {
    LCDcol = 18;
  }
  
  // Clear the LCD of the previous ball (but not the player's paddle)
  // 14 empty characters printed inbetween the player's paddle
  lcd.setCursor(1,0);
  lcd.print("                  ");
  lcd.setCursor(1,1);
  lcd.print("                  ");
  lcd.setCursor(1,2);
  lcd.print("                  ");
  lcd.setCursor(1,3);
  lcd.print("                  ");
  
  // Determine the ball's position (single pixel) within a single LCD character (i.e. within the 8x5 pixels that make up a single LCD character)
  int dx = X - 5 * LCDcol;    // Column position within the LCD character
  int dy;
  
  // Row position within the LCD character
  if (Y == 0 || Y == 8 || Y == 16 || Y == 24) {
    dy = 0;
  }
  else if (Y == 1 || Y == 9 || Y == 17 || Y == 25) {
    dy = 1;
  }
  else if (Y == 2 || Y == 10 || Y == 18 || Y == 26) {
    dy = 2;
  }
  else if (Y == 3 || Y == 11 || Y == 19 || Y == 27) {
    dy = 3;
  }
  else if (Y == 4 || Y == 12 || Y == 20 || Y == 28) {
    dy = 4;
  }
  else if (Y == 5 || Y == 13 || Y == 21 || Y == 29) {
    dy = 5;
  }
  else if (Y == 6 || Y == 14 || Y == 22 || Y == 30) {
    dy = 6;
  }
  else if (Y == 7 || Y == 15 || Y == 23 || Y == 31) {
    dy = 7;
  }
  // Select the correct custom character, of the 40 possible, and display it (in it's correct LCD column, row position)
  // Alternate assigning the custom characters to LCD custom character bytes 1,2,3,4,5
  if (dx == 0 && dy == 0) {
   lcd.createChar(4, ball70);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 1 && dy == 0) {
   lcd.createChar(4, ball71);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 2 && dy == 0) {
   lcd.createChar(4, ball72);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 3 && dy == 0) {
   lcd.createChar(4, ball73);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 4 && dy == 0) {
   lcd.createChar(4, ball74);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 0 && dy == 1) {
   lcd.createChar(5, ball60);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 1 && dy == 1) {
   lcd.createChar(5, ball61);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 2 && dy == 1) {
   lcd.createChar(5, ball62);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 3 && dy == 1) {
   lcd.createChar(5, ball63);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 4 && dy == 1) {
   lcd.createChar(5, ball64);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  
  else if (dx == 0 && dy == 2) {
   lcd.createChar(4, ball50);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 1 && dy == 2) {
   lcd.createChar(4, ball51);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 2 && dy == 2) {
   lcd.createChar(4, ball52);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 3 && dy == 2) {
   lcd.createChar(4, ball53);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 4 && dy == 2) {
   lcd.createChar(4, ball54);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 0 && dy == 3) {
   lcd.createChar(5, ball40);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 1 && dy == 3) {
   lcd.createChar(5, ball41);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 2 && dy == 3) {
   lcd.createChar(5, ball42);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 3 && dy == 3) {
   lcd.createChar(5, ball43);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 4 && dy == 3) {
   lcd.createChar(5, ball44);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  
  else if (dx == 0 && dy == 4) {
   lcd.createChar(4, ball30);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 1 && dy == 4) {
   lcd.createChar(4, ball31);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 2 && dy == 4) {
   lcd.createChar(4, ball32);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 3 && dy == 4) {
   lcd.createChar(4, ball33);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 4 && dy == 4) {
   lcd.createChar(4, ball34);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  
  else if (dx == 0 && dy == 5) {
   lcd.createChar(5, ball20);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 1 && dy == 5) {
   lcd.createChar(5, ball21);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 2 && dy == 5) {
   lcd.createChar(5, ball22);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 3 && dy == 5) {
   lcd.createChar(5, ball23);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 4 && dy == 5) {
   lcd.createChar(5, ball24);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  
  else if (dx == 0 && dy == 6) {
   lcd.createChar(4, ball10);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 1 && dy == 6) {
   lcd.createChar(4, ball11);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 2 && dy == 6) {
   lcd.createChar(4, ball12);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 3 && dy == 6) {
   lcd.createChar(4, ball13);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 4 && dy == 6) {
   lcd.createChar(4, ball14);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  
  else if (dx == 0 && dy == 7) {
   lcd.createChar(5, ball00);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 1 && dy == 7) {
   lcd.createChar(5, ball01);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 2 && dy == 7) {
   lcd.createChar(5, ball02);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 3 && dy == 7) {
   lcd.createChar(5, ball03);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 4 && dy == 7) {
   lcd.createChar(5, ball04);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
}
