# Concorrência em linguagens de programação

Com a relativa desaceleração na evolução do núcleo dos processadores, os desenhistas de CPU, a cada geração, implementam mais núcleos dentro de um mesmo processador. Isso criou uma nova conjuntura para os programadores, para criar códigos eficientes com alto desempenho e acompanhar o avanço do hardware é necessário pensar na implementação do código de forma paralelizável. Da mesma forma, as linguagens de programação não ficaram paradas no tempo e muitas suportam o multithreading. Veja como ocorre a implementação e note as diferenças em cada linguagem:

## **C++**
oferece suporte a todos os blocos primitivos de concorrência(Threads, Semáfaros, Monitores, Locks, dentre outros)

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

![image](https://user-images.githubusercontent.com/93085789/184673709-8ddb0148-159c-41e2-9f46-393a3c4f83cd.png)

**Como o acesso ao inteiro não é sincrozinado o resultado será imprevisível, os encadeamentos podem se intercalar um com o outro. **

Exemplo condição de corrida solucionado com Mutex:

![image](https://user-images.githubusercontent.com/93085789/184675563-b63f0b80-d719-46e4-8b9a-9eb267e26cdb.png)

**Mutual Exclusion(Mutex) impede a execução simultânea de uma seção crítica do código, funciona como um mecanismo de trava e destrava. Quando o mutex for bloqueado a thread em execução possuíra unicamente o recurso até ser desbloqueado, nenhuma outra thread é executada até o desbloqueio.**

## **C#**
Também oferece suporte a todos os blocos primitivos de concorrência(Locks, Threads, Semáfaros, Monitores, dentre outros)

Exemplo de concorrência com duas threads:

![image](https://user-images.githubusercontent.com/93085789/184735165-f9962f00-269b-4150-8d11-5f8858468a5c.png)

**A saída do programa pode ser diferente em cada execução, a execução das duas threads pode acontecer em qualquer sequência, pois as duas threads estão executando ao mesmo tempo até Join().**

Exemplo de uso do lock:

![image](https://user-images.githubusercontent.com/93085789/184737831-3355b3e2-5f01-4dbb-bfb8-2272722445df.png)

**O lock impede que outra thread acesse ao mesmo tempo determinada parte do código. O desbloqueio acontece após o término da execução.**

