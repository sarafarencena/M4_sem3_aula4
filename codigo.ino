class Semafaro {
  
  private: // Variáveis para guardar o número dos pinos do Arduino
    int vermelho;
    int amarelo;
    int verde;
    
    // Tempo de cada LED aceso
    long tempo_verde = 4000;    // 4 segundos
    long tempo_amarelo = 2000;  // 2 segundos
    long tempo_vermelho = 6000; // 6 segundos

  public:
    
    // Construtor: recebe os pinos e "avisa" quando ligar cada LED
    Semafaro(int pinoV, int pinoA, int pinoG) {
      vermelho = pinoV;
      amarelo = pinoA;
      verde = pinoG;
      
      pinMode(vermelho, OUTPUT);
      pinMode(amarelo, OUTPUT);
      pinMode(verde, OUTPUT);
    }
    
    // Método para executar a sequência completa do semáforo
    void executarCiclo() {
      // 1. Acende o VERDE por 4 segundos
      acende_verde();
      delay(tempo_verde);
      
      // 2. Acende o AMARELO por 2 segundos
      acende_amarelo();
      delay(tempo_amarelo);
      
      // 3. Acende o VERMELHO por 6 segundos
      acende_vermelho();
      delay(tempo_vermelho);
    }

  private:
    
    // Acende o verde e apaga os outros
    void acende_verde() {
      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
    }
    
    // Acende o amarelo e apaga os outros
    void acende_amarelo() {
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, HIGH);
      digitalWrite(vermelho, LOW);
    }

    // Acende o vermelho e apaga os outros
    void acende_vermelho() {
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, HIGH);
    }
};

// Controle do semáforo (a começar com nulo)
Semafaro* ptrSemafaro = NULL;

void setup() { // Envia o comando para ligar o semáforo
  Serial.begin(9600);
  Serial.println("Iniciando semaforo com POO e Ponteiros...");
  ptrSemafaro = new Semafaro(5, 6, 7); // new fabrica um novo semáforo, ptrSemaforo aponta o semáforo guardado na memória

  Serial.println("Semaforo criado nos pinos 5, 6 e 7!");
}


void loop() {
  // O loop continua exatamente igual, usando o ponteiro para executar e o controle para repetir a sequência
  ptrSemafaro->executarCiclo();
}