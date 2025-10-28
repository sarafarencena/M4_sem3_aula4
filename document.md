# Ponderada 4 - Semáforo Offiline

## Montagem Semáforo Offiline
Acesse [aqui](https://drive.google.com/file/d/1lRsbf93Zy31xfesoC51gKo0bKcVbzDcH/view?usp=sharing) a imagem da montagem física do semáforo.

### Explicação de Montagem
Neste circuito, o **Arduino Uno** atua enviando os comandos de "ligar" e "desligar" para os LEDs através dos pinos digitais **5 (Vermelho)**, **6 (Amarelo)** e **7 (Verde)**. Como os LEDs estão em uma placa para representar o semáforo, usei **jumpers Macho-Fêmea** como "extensores". O lado "Fêmea" de um jumper se conecta ao pino positivo de cada LED e o lado "Macho" vai para a protoboard, recebendo o sinal do Arduino.

Para proteger os LEDs e evitar que queimem com os 5V do Arduino, usei **resistores de 330Ω**. O lado negativo de cada LED também é conectado a um jumper Macho-Fêmea. Este jumper, por sua vez, se conecta a um resistor na protoboard. Por fim, todos os resistores são ligados à linha de **GND (Terra)** da protoboard, que é conectada de volta ao pino GND do Arduino. Isso fecha o circuito, permitindo que a eletricidade flua e acenda os LEDs com segurança quando o Arduino manda o comando.

## Tabela de Componentes

| Componente | Especificação / Quantidade | Observação (Baseado na Imagem) |
| :--- | :--- | :--- |
| **Placa Microcontroladora** | 1 Arduino Uno | Conectado ao laptop via USB. |
| **LEDs** | 3 (1 Vermelho, 1 Amarelo, 1 Verde) | Montados externamente ("na caixinha"). |
| **Resistores** | 3 (330Ω cada) | Protegendo cada LED. Conectados entre os jumpers M-F e o barramento GND. |
| **Jumpers Macho-Macho** | 4 | 3 para os pinos de sinal (5, 6, 7) e 1 para o pino GND. |
| **Jumpers Macho-Fêmea** | 6 | 3 para os ânodos (pernas longas) e 3 para os cátodos (pernas curtas) dos LEDs. |
| **Protoboard** | 1 | Placa de ensaio padrão para organizar o circuito. |
| **Cabo USB** | 1 | Para alimentar o Arduino e carregar o código. |


## Vídeo Demonstração
Acesse [aqui](https://drive.google.com/file/d/1eDAKZyEeVeQqglGdRMmLu73SWlogGTrO/view?usp=sharing) o vídeo de demonstração do funcionamento do semáforo.
