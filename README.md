# Semáforo Offline



## Montagem Física

<div align="center">
<sub>Figura 1 - Montagem Física</sub>
<img src="./foto_semaforo.jpg" width="100%">
<sup>Fonte: Material produzido pelos autores (2024)</sup>
</div>

&nbsp;&nbsp;&nbsp;&nbsp;A montagem foi realizada em uma *protoboard* e com um suporte em MDF, simulando um semáforo. Cada LED foi conectado a uma porta do Arduino, além de estar em série com resistores que limitam a corrente, os quais estão conectados ao GND do Arduino. Portanto, O Arduino é responsável por alternar o acendimento e o apagamento dos LEDs na sequência estipulada. 
   
#### Tabela de Componentes Utilizados

| Componente | Quantidade | Especificações |
|------------|------------|------------|
| Arduino Uno  | 1          | 
| LED Vermelho | 1          |
| LED Amarelo  | 1          |
| LED Verde    | 1          |
| Resistor     | 3          |
| Protoboard   | 1          |
| Jumpers      | Diversos   |

### Código
[Link para o Código.](./semaforo.ino)

## Evidências

- **Foto da Montagem Física**: [Protoboard com LEDs montados](./foto_semaforo.jpg)
- **Vídeo Demonstrativo**: [Vídeo do funcionamento do semáforo](./video_semaforo.mp4)

## Avaliação em pares

### Avaliador: Felipe Zillo

| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | 3              |                             |                        |                           |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | 3              |                       |                        |                           |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | 3              |                          |                         |                           |
| Extra: Implmeentou um componente de liga/desliga no semáforo e/ou usou ponteiros no código | 1              |                          |                        |  Semáforo em pé                         |
|  |                                                             |  | |**Pontuação Total**: 10|

### Avaliador: Daniel Gonçalves

| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | 3              |                            |                         |                           |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | 3              |                          |                        |                           |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | 3              |                          |                        |                           |
| Extra: Implmeentou um componente de liga/desliga no semáforo e/ou usou ponteiros no código | 1              |                          |                        |                           |
|  |                                                             |  | |**Pontuação Total**: 10|
