# Calculadora de Gasto de Energia Residencial em C

Um programa simples desenvolvido em C para calcular o consumo mensal estimado de energia elétrica e o custo total da sua residência. Ideal para quem deseja ter uma estimativa dos seus gastos com energia, considerando diversos eletrodomésticos comuns.

🚀 Funcionalidades

* **Cálculo de Consumo:** Estima o consumo mensal de energia (em kWh) para lâmpadas LED, lâmpadas fluorescentes, televisores, ar-condicionados, chuveiros e máquinas de lavar.
* **Cálculo de Custo:** Calcula o custo mensal estimado em Reais (R$) com base no preço do kWh definido para a região de Minas Gerais.
* **Entrada de Dados Interativa:** Solicita ao usuário informações sobre a quantidade de cada eletrodoméstico e seus padrões de uso.
* **Validação de Entrada:** Garante que as horas de uso diário e outras entradas estejam dentro de limites razoáveis.
* **Apresentação em Tabela:** Exibe os resultados de consumo e custo para cada tipo de equipamento e o total geral em um formato de tabela organizado.

🎯 Como Usar

1.  **Clone o repositório:**
    ```bash
    git clone [https://github.com/guigz777/calculadora-gasto-energia.git](https://github.com/guigz777/calculadora-gasto-energia.git)
    ```
2.  **Compile o código:**
    Certifique-se de ter um compilador C instalado (como o GCC). Navegue até o diretório do projeto no terminal e execute:
    ```bash
    gcc main.c -o calculadora_energia
    ```
3.  **Execute o programa:**
    ```bash
    ./calculadora_energia
    ```
4.  **Responda às Perguntas:**
    O programa fará perguntas sobre a quantidade e o tempo de uso dos seus eletrodomésticos. Responda com os valores solicitados para obter a estimativa.

🛠️ Funcionalidades por Equipamento

💡 **Lâmpadas:**
* Número de lâmpadas LED e fluorescentes.
* Horas de uso diário para cada tipo.

📺 **Televisores:**
* Número de televisores.
* Horas de uso diário.

❄️ **Ar-Condicionado:**
* Número de aparelhos.
* Horas de uso por dia.
* Número de dias de uso no mês.

🚿 **Chuveiros:**
* Número de chuveiros.
* Tempo médio de cada banho (em minutos).
* Número de banhos por dia.

🧺 **Máquinas de Lavar:**
* Número de máquinas de lavar.
* Duração de cada lavagem (em horas).
* Número de vezes de uso por mês.

✅ Requisitos

* Compilador C (ex: GCC)
* Sistema operacional compatível com C (Windows, Linux ou macOS)

🛠️ Instalação e Execução

1.  **Clone o repositório:**
    ```bash
    git clone [https://github.com/guigz777/calculadora-gasto-energia.git](https://github.com/guigz777/calculadora-gasto-energia.git)
    ```
2.  **Acesse a pasta do projeto:**
    ```bash
    cd calculadora-gasto-energia
    ```
3.  **Compile o código:**
    ```bash
    gcc main.c -o calculadora_energia
    ```
4.  **Execute o programa:**
    ```bash
    ./calculadora_energia
    ```

🤝 Contribuição

Contribuições são bem-vindas! Se você tiver sugestões de melhorias, correções de bugs ou novas funcionalidades, siga os passos abaixo:

1.  Crie um fork do projeto.
2.  Crie um branch para suas modificações:
    ```bash
    git checkout -b minha-modificacao
    ```
3.  Faça um commit das suas alterações:
    ```bash
    git commit -m 'Adicione uma descrição clara da sua modificação'
    ```
4.  Envie para o branch principal:
    ```bash
    git push origin minha-modificacao
    ```
5.  Abra um Pull Request no repositório original.

📄 Observações

* O preço do kWh (R$ 0.618) está definido no código para a região de Minas Gerais. Para outras regiões, modifique a variável `kwh` no arquivo `main.c`.
* As potências padrão dos eletrodomésticos são estimativas e podem variar. Consulte as especificações dos seus aparelhos para uma maior precisão.

📄 Licença

Este projeto está licenciado sob a **BSD 3-Clause License**.

```
Copyright (c) 2024, guigz777
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
```

📫 Contato

Desenvolvido por guigz777. Sinta-se à vontade para entrar em contato para sugestões, dúvidas ou colaborações!
