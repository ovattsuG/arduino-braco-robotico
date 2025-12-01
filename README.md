# 🤖 Braço Robótico Controlado com Joysticks (Arduino)

Este projeto implementa um braço robótico controlado por dois joysticks analógicos e quatro servomotores utilizando Arduino e a biblioteca VarSpeedServo.  
Cada joystick controla diferentes eixos do braço, permitindo movimentos suaves e intuitivos, incluindo base, dois segmentos e garra.

## 🧠 Visão Geral
A ideia é criar um sistema de controle manual semelhante ao de manipuladores robóticos utilizados em robótica educacional e prototipagem.  
Os joysticks transformam movimentos manuais em ângulos de servo, possibilitando controlar cada articulação de forma independente.

**O projeto é ideal para estudos de:**
- eletrônica aplicada  
- robótica  
- cinemática simples  
- controle de servos  
- programação em Arduino  

## 🧩 Componentes Utilizados
| Componente | Quantidade | Função |
|-----------|------------|--------|
| Arduino Uno (ou compatível) | 1 | Microcontrolador principal |
| Joystick analógico | 2 | Controle manual dos eixos |
| Servomotores | 4 | Movimentação da base, segmentos e garra |
| Jumpers | — | Conexões elétricas |
| Fonte externa (recomendado) | 1 | Alimentar servos com estabilidade |

## ⚙️ Conexões dos Pinos
| Pino Arduino | Componente | Função |
|--------------|------------|--------|
| A0 | Joystick 1 – Eixo X | Controla MB1 |
| A1 | Joystick 1 – Eixo Y | Controla a base |
| A2 | Joystick 2 – Eixo X | Controla MB2 |
| A3 | Joystick 2 – Eixo Y | Controla a garra |
| 5 | Servo da Base | Rotação da base |
| 9 | Servo MB1 | Primeiro segmento |
| 10 | Servo MB2 | Segundo segmento |
| 11 | Servo da Garra | Abertura / fechamento |
| 5V | Joysticks | Alimentação |
| GND | Todos os componentes | Terra comum |

## 🚀 Funcionamento
- O sistema inicializa todos os servos no ângulo **90°**.  
- Cada leitura dos joysticks é mapeada para um intervalo adequado de ângulos.  
- A base utiliza um sistema por incrementos para movimentos mais precisos.  
- MB1, MB2 e Garra respondem diretamente ao movimento dos joysticks.  
- O código atual aplica velocidades diferentes usando VarSpeedServo, garantindo movimentos suaves.  

## 🎮 Esquema de Controle
- **Joystick 1**
  - X → MB1  
  - Y → Base (movimento incremental)  

- **Joystick 2**
  - X → MB2  
  - Y → Garra  

## 💡 Melhorias Futuras
- Adicionar limites de segurança por software para evitar sobrecarga mecânica.  
- Implementar calibração automática dos ângulos.  
- Criar modo de gravação e reprodução de movimentos.  
- Controlar via Bluetooth ou Wi-Fi (ESP32).  
- Implementar interface visual para monitoramento.  

## 📸 Montagem do Circuito
<img width="993" height="673" alt="image" src="https://github.com/user-attachments/assets/32883f2d-0e95-42b8-b091-b3203b50b817" />


## 🎥 Demonstração
*([Braço Robotico Video](https://youtu.be/syg9Djs5Mxc))*

## 📚 Conceitos Envolvidos
- Leitura analógica com Arduino  
- Mapeamento de valores para ângulos de servo  
- Controle suave com VarSpeedServo  
- Cinemática simples aplicada à robótica  
- Modularização de funções em C++  

👨‍💻 Autor
Gustavo Correa

💻 Projeto desenvolvido para aprendizado em robótica, eletrônica e programação com Arduino.  
📚 “Robótica é transformar controle em movimento.”
