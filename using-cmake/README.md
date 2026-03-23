## o que eh o cmake?

Cmake eh uma ferramenta de geracao de build. Ao inves de voce escrever diretamente makefiles, voce descreve o seu projeto em um arquivo `CMakeLists.txt` usando uma linguagem simples. O CMake entao gera os arquivos nativos para a ferramenta que voce quer usar (por exemplo o make).

dentro do CMakeLists.txt (que precisa estar no dict raiz do projeto)

```
cmake_minimum_required(VERSION 3.31) -> versao minima do cmake instalado na sua maquina
project(nome do projeto)

add_executable(nome_do_executavel arquivos.c dict/arquivo.c)
target_include_directories(nome_do_executavel PRIVATE pasta_onde_ta_os_files_.h)


```

voce pode tambem criar uma pasta `build/` e rodar o cmake la dentro para que o executavel fique nela

usando esse comando apos criar a pasta build e entrar nela:
`~/project/build/ $ cmake ..`
o `..` serve para que o cmake procure o `CMakeLists.txt` saindo da pasta atual e mesmo assim fazendo o build dentro de `build/`
