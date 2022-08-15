# Concorrência em linguagens de programação

Com a relativa desaceleração na evolução do núcleo dos processadores, os desenhistas de CPU, a cada geração, implementam mais núcleos dentro de um mesmo processador. Isso criou uma nova conjuntura para os programadores, para criar códigos eficientes com alto desempenho e acompanhar o avanço do hardware é necessário pensar na implementação do código de forma paralelizável. Da mesma forma, as linguagens de programação não ficaram paradas no tempo e muitas suportam o multithreading. Veja como ocorre a implementação e note as diferenças em cada linguagem:

C++ oferece suporte a todos os blocos primitivos de concorrência(Threads, Semáfaros, Monitores, Locks, dentre outros)

Começando com um exemplo simples: 

![image](https://user-images.githubusercontent.com/93085789/184661345-f6c454ee-1899-4ea3-8b1d-d51fb6eaea40.png)

**std::thread coloca a thread t1 para executar a função e join() garante que t1 termine, para que depois o resto do código seja executado.**

Outro exemplo:

![image](https://user-images.githubusercontent.com/93085789/184663394-eec5c6f1-e937-4bb3-8f63-81e7b9077234.png)

**A saída do programa pode ser diferente em cada execução, a execução da thread da main pode acontecer em qualquer sequência, pois as duas threads estão executando ao mesmo tempo até join().**

Exemplo com lambda:

![image](https://user-images.githubusercontent.com/93085789/184668346-faad6026-5588-4b65-b4f7-46265b3099bb.png)

Exemplo identificando threads:

![image](https://user-images.githubusercontent.com/93085789/184668952-7a7f62ab-3b6b-472c-8abb-6ad1a9bd6522.png)

**Cada thread, incluindo a principal, tem um id único.**

Exemplo passando argumentos para a thread:

![image](https://user-images.githubusercontent.com/93085789/184670430-a687692a-a896-4704-810e-d5e7a72eb9df.png)

Exemplo condição de corrida:

