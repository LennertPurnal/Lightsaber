#define BUTTON_PIN	7
#define BUTTON_LED	4
#define RED_PIN     3
#define GREEN_PIN   5
#define BLUE_PIN    6

int colorState = 0;
int buttonState = 1;
int previousButtonState = 1;


void setup() {
	pinMode(RED_PIN, OUTPUT);
	pinMode(GREEN_PIN, OUTPUT);
	pinMode(BLUE_PIN, OUTPUT);
	pinMode(BUTTON_LED, OUTPUT);
	pinMode(BUTTON_PIN, INPUT);

	digitalWrite(RED_PIN, 0);
	digitalWrite(GREEN_PIN, 0);
	digitalWrite(BLUE_PIN, 0);
	digitalWrite(BUTTON_LED, 0);
}

void loop() {

	buttonState = digitalRead(BUTTON_PIN);
	digitalWrite(BUTTON_LED, !buttonState);
	if ((buttonState == 0) && (buttonState != previousButtonState))
	{
		colorState++;
		if (colorState > 7)
		{
			colorState = 0;
		}
		
	}
	previousButtonState = buttonState;
	

	switch (colorState)
	{
	case 0:
		setColorRGB(0,0,0);
		break;
	case 1:
		setColorRGB(0,0,1);
		break;
	case 2:
		setColorRGB(0,1,0);
		break;
	case 3:
		setColorRGB(0,1,1);
		break;
	case 4:
		setColorRGB(1,0,0);
		break;
	case 5:
		setColorRGB(1,0,1);
		break;
	case 6:
		setColorRGB(1,1,0);
		break;
	case 7:
		setColorRGB(1,1,1);
		break;
	default:
		setColorRGB(0,0,0);
		break;
	}	
}


void setColorRGB(int red, int green, int blue){
	digitalWrite(RED_PIN, red);
	digitalWrite(GREEN_PIN, green);
	digitalWrite(BLUE_PIN, blue);
}
