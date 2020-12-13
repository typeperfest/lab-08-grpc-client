# Лабораторная работа №8

## Иллюстрация 

[![](https://mermaid.ink/img/eyJjb2RlIjoic2VxdWVuY2VEaWFncmFtXG4gICAgQ2xpZW50LT4-U2VydmVyOiBjYWxsIEhlbGxvKEhlbGxvUmVxdWVzdHsnd29ybGQnfSlcbiAgICBTZXJ2ZXItPj5DbGllbnQ6IEhlbGxvUmVzcG9uc2V7J0hlbGxvIHdvcmxkJ31cbiAgICAgICAgICAgICIsIm1lcm1haWQiOnsidGhlbWUiOiJkZWZhdWx0In0sInVwZGF0ZUVkaXRvciI6ZmFsc2V9)](https://mermaid-js.github.io/mermaid-live-editor/#/edit/eyJjb2RlIjoic2VxdWVuY2VEaWFncmFtXG4gICAgQ2xpZW50LT4-U2VydmVyOiBjYWxsIEhlbGxvKEhlbGxvUmVxdWVzdHsnd29ybGQnfSlcbiAgICBTZXJ2ZXItPj5DbGllbnQ6IEhlbGxvUmVzcG9uc2V7J0hlbGxvIHdvcmxkJ31cbiAgICAgICAgICAgICIsIm1lcm1haWQiOnsidGhlbWUiOiJkZWZhdWx0In0sInVwZGF0ZUVkaXRvciI6ZmFsc2V9)

## Задание

К **suggest** сервису, который обрабатывает **gRPC** запросы из лабораторной работы №7, реализовать клиент.
Клиент отправляет **gRPC** запрос следующего формата:
```json
{
  "input": "hel"
}
```
В поле `input` находится текст, который предназначен для обработки сервисом. В случае, если сервису нечего предложить клиенту, то он вернет пустой массив.
Все соединения инициируются клиентом, где клиент запрашивает ответ от сервиса. Ответ от сервиса необходимо вывести с использованием стандартных потоков.
