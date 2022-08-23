#define RED_PIN     3
#define GREEN_PIN   5
#define BLUE_PIN    6

void setup() {
	pinMode(RED_PIN, OUTPUT);
	pinMode(GREEN_PIN, OUTPUT);
	pinMode(BLUE_PIN, OUTPUT);

	digitalWrite(RED_PIN, LOW);
	digitalWrite(GREEN_PIN, LOW);
	digitalWrite(BLUE_PIN, LOW);
}

void loop() {
	int red_ledstate = 0;
	int green_ledstate = 0;
	int blue_ledstate = 0;

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			for (size_t k = 0; k < 2; k++)
			{
				blue_ledstate = !blue_ledstate;
				digitalWrite(BLUE_PIN, blue_ledstate);
				delay(1000);
			}
			green_ledstate = !green_ledstate;
			digitalWrite(GREEN_PIN, green_ledstate);
		}
		red_ledstate = !red_ledstate;
		digitalWrite(RED_PIN, red_ledstate);
	}
	

	
}