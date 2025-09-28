int Limit = 60; // Hauteur limite de votre poubelle en cm
const int trigPin = 3; // Pin de déclenchement du capteur ultrason
const int echoPin = 2; // Pin d'écho du capteur ultrason
long duration, percentage, range;

void setup() {
  Serial.begin(9600); // Initialiser la communication série à 9600 bits par seconde
  pinMode(trigPin, OUTPUT); // Définir le pin de déclenchement comme sortie
  pinMode(echoPin, INPUT); // Définir le pin d'écho comme entrée
}

void loop() {
  // Envoi d'une impulsion de déclenchement pour démarrer la mesure
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Lecture de la durée de l'impulsion d'écho
  duration = pulseIn(echoPin, HIGH);

  // Calcul du pourcentage de remplissage basé sur la durée de l'impulsion
  percentage = (duration / 2) / 29.1 / Limit * 100;
  range = 100 - percentage; // Calcul de la plage de remplissage

  // Vérification si la plage de remplissage est dans les limites valides (0 à 100)
  if ((range >= 0) && (range <= 100)) {
    // Si la poubelle est remplie à plus de 70%, afficher "F" (Full - Plein)
    if (range > 70) {
      Serial.print("F ");
    }
    // Si la poubelle est remplie entre 30% et 70%, afficher "M" (Medium - Moyen)
    if ((range >= 30) && (range <= 70)) {
      Serial.print("M ");
    }
    // Si la poubelle est remplie à moins de 30%, afficher "E" (Empty - Vide)
    if (range <= 30) {
      Serial.print("E ");
    }

    // Afficher le pourcentage de remplissage
    Serial.print(range);
    Serial.println();
    delay(500); // Attendre 500 millisecondes avant la prochaine lecture
  } else {
    // Si la plage de remplissage est hors des limites, afficher "F 100"
    Serial.print("F 100");
    Serial.println();
    delay(500); // Attendre 500 millisecondes avant la prochaine lecture
  }
}

