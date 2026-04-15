## Introducao aos sockets

Socket eh uma forma de fazer uma comunicacao entre processos, tendo o cliente e o servidor.

Tipos de sockets:

- SOCK_STREAM: fornece sequencial, seguro, e em ambos os sentidos (TCP).

- SOCK_DGRAM: datagramas (sem conexao, mensagens nao confiaveis, UDP).

- SOCK_SEQPACKET: sequenciado, confiavel, caminho de transmissao de dados baseado em conexao (bidirecional) para datagramas.

- SOCK_RAW: tipo especial de socket pode ser usado manualmente para construir algum tipo de protocolo. Um uso comum para esse tipo de socket eh desempenhar requisicoes ICMP (como ping, traceroute, etc).

- SOCK_RDM: fornece uma camada segura sem ordenacao.
