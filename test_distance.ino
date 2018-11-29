const int echoPin = 12;  // Echo    (réception)
 
// Variables utiles
long duree;   // durée de l'echo
int distance; // distance
 
 
void setup() {
pinMode(echoPin, INPUT);  // Configuration du port de l'Echo  comme une ENTREE
 
Serial.begin(9600); // Démarrage de la communication série
}
 
void loop() {
  duree = pulseIn(echoPin, HIGH);
 
  // Calcul de la distance
  distance = duree/147*3;
 
 // Affichage de la distance dans le Moniteur Série
 Serial.print("Distance : ");
 Serial.print(distance);
 Serial.println("cm");
}
