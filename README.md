**Integrantes:**

<h1>Integrantes:</h1>
Lucas dos Santos Lopes RM:550790<br>
Murilo Machado RM:550718<br> 
Victor Taborda Rodrigues RM:97900<br>
Gustavo Marques Catelan RM:551823<br> 
Gabriel Bacelar Valentim RM97901<br>

<br>

**Nosso Projeto**

Nosso projeto, Painel de Análise de Dados para Eficiência Energética de Pequenas Redes Residenciais, busca oferecer uma solução tecnológica que auxilie os moradores a monitorar e gerenciar, em tempo real, o consumo e a produção de energia. Essa abordagem é essencial no contexto atual, em que o uso de fontes renováveis, como os painéis solares, e dispositivos inteligentes está cada vez mais presente. O principal objetivo é fornecer aos usuários informações detalhadas e visuais para que possam otimizar o uso de energia, reduzir desperdícios e promover a sustentabilidade no setor residencial.

Como a Implementação Auxilia o Projeto

A aplicação prática que realizamos com o ThingSpeak demonstra exatamente como tecnologias de Internet das Coisas (IoT) podem ser utilizadas para monitoramento e análise de dados energéticos. Por meio do ESP32, configuramos um sistema de monitoramento que envia dados, como consumo atual de energia, potência utilizada e consumo acumulado, diretamente para um painel em tempo real. Essa implementação simula, na prática, como nosso projeto se propõe a funcionar.

Abaixo, explicamos como cada aspecto do que desenvolvemos agrega valor ao objetivo do projeto:

Coleta de Dados em Tempo Real:
O microcontrolador ESP32 foi programado para gerar e enviar dados simulados, como consumo de energia em kWh e potência em W. Essa simulação reflete como, no cenário real, sensores conectados a painéis solares ou medidores de energia coletariam informações diretamente do ambiente residencial.

Transmissão e Armazenamento na Nuvem:
Utilizamos a plataforma ThingSpeak para armazenar e exibir os dados em gráficos. Isso ilustra como soluções de IoT permitem que os dados de consumo sejam enviados para a nuvem de maneira confiável, possibilitando acesso remoto pelos moradores, via smartphones ou computadores.
Análise e Visualização de Dados:

Com o painel no ThingSpeak, criamos gráficos que mostram o consumo atual, potência utilizada e energia acumulada ao longo do tempo. Esses gráficos facilitam a interpretação dos dados pelos usuários, permitindo que eles identifiquem padrões de consumo, horários de maior gasto energético e possíveis desperdícios.
Filtragem e Personalização dos Dados:

Demonstramos como é possível filtrar os dados para visualizar períodos específicos, como o consumo a partir de determinado horário. Essa funcionalidade seria aplicada no projeto final para que os moradores possam focar em períodos de maior geração solar ou em horários com maior gasto energético.
Impacto do Trabalho no Projeto

Ao implementar essa solução com o ThingSpeak, conseguimos validar um modelo funcional do painel de análise de dados que será aplicado ao nosso projeto. Embora a simulação tenha utilizado dados fictícios, ela serve como base para integrar dispositivos reais, como medidores de energia conectados a uma rede elétrica residencial. A visualização de dados em tempo real e o uso de gráficos para análise são exatamente as funcionalidades que buscamos oferecer no painel final.

Além disso, o trabalho demonstra a viabilidade de tecnologias IoT acessíveis para residências, promovendo:
Eficiência Energética: Moradores podem entender como estão consumindo energia e ajustar seus hábitos para reduzir o desperdício.
Adoção de Fontes Renováveis: Com dados claros sobre geração e consumo, é possível maximizar o uso de energia solar ou outras fontes renováveis.
Sustentabilidade: Ao promover a conscientização sobre o consumo energético, o projeto incentiva decisões mais sustentáveis, alinhadas aos esforços globais de transição energética.
Por fim, o painel implementado no ThingSpeak representa um protótipo do que o projeto final será capaz de realizar. Ele valida a ideia de que o uso de IoT pode simplificar o monitoramento e a gestão energética em residências, contribuindo significativamente para a eficiência energética e a sustentabilidade.

**LINK YOUTUBE**:

https://youtu.be/gCH9LSxPOFQ


**Codigo:**

*O codigo precisa instalar as bibliotecas:*

"ThingSpeak"

"Wifi.h"

*instalar os Boards Managers:*

"arduino AVR Boards"

"Arduino ESP32 Boards"

**Na parte do codgo sera necessario mudar:**

// Credenciais do WiFi

const char* ssid = "nome_rede_wifi";

const char* password = "senha_wifi";
