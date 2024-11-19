#include <WiFi.h>
#include <ThingSpeak.h>
 
// Credenciais do WiFi
const char* ssid = "MRT";
const char* password = "T@borda01";
 
// Credenciais do ThingSpeak
unsigned long channelID = 2753591; // Substitua pelo ID do seu canal
const char* writeAPIKey = "VKBK9SIIDG9YQ5DT"; // Substitua pela sua Write API Key
 
WiFiClient client;
 
// Variáveis relacionadas ao consumo energético
float energiaAtual = 0;   // Gasto de energia em tempo real (kWh)
float energiaMensal = 0;  // Total acumulado no mês (kWh)
float potenciaAtual = 0;  // Potência atual consumida (W)
 
void setup() {
  Serial.begin(115200);
  // Conectar ao WiFi
  WiFi.begin(ssid, password);
  Serial.print("Conectando ao WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nConectado ao WiFi!");
 
  // Iniciar o ThingSpeak
  ThingSpeak.begin(client);
}
 
void loop() {
  // Simulação de dados para consumo energético
  energiaAtual = random(100, 500) / 100.0; // Energia consumida no ciclo (kWh)
  potenciaAtual = energiaAtual * 1000;     // Potência consumida no ciclo (W)
  energiaMensal += energiaAtual / 24;      // Energia acumulada no mês (simulação)
 
  // Mostrar os dados no monitor serial
  Serial.print("Energia Atual (kWh): ");
  Serial.println(energiaAtual);
  Serial.print("Potência Atual (W): ");
  Serial.println(potenciaAtual);
  Serial.print("Energia Mensal (kWh): ");
  Serial.println(energiaMensal);
 
  // Enviar dados para o ThingSpeak
  ThingSpeak.setField(1, energiaAtual);
  ThingSpeak.setField(2, potenciaAtual);
  ThingSpeak.setField(3, energiaMensal);
 
  // Escrever no canal
  int responseCode = ThingSpeak.writeFields(channelID, writeAPIKey);
  if (responseCode == 200) {
    Serial.println("Dados enviados com sucesso ao ThingSpeak!");
  } else {
    Serial.print("Erro ao enviar dados. Código de erro: ");
    Serial.println(responseCode);
  }
 
  // Aguardar 15 segundos antes do próximo envio (limite do ThingSpeak)
  delay(15000);
}