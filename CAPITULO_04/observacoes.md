# Observações dos exercícios

## GETCHAR() E BUFFER EM C

Quando o usuário digita algo e pressiona Enter, o caractere`'\n'`
(quebra de linha) também fica armazenado no buffer de entrada.

O problema ocorre porque `scanf("%c")` não ignora esse `'\n'` e pode
lê-lo como entrada inválida.

`getchar()` lê exatamente um caractere do buffer e é usado para
consumir (descartar) o `'\n'` deixado por `scanf()`.

Exemplo:

```c
    scanf("%d", &x);
    getchar();
    scanf("%c", &c);
```

Alternativa recomendada:

```c
    scanf(" %c", &c);
```

O espaço antes do `%c` faz o scanf ignorar automaticamente espaços
e quebras de linha, dispensando o uso de `getchar()`.

Use `getchar()` para:

- Limpar o buffer
- Ler espaços
- Pausar o programa

Na maioria dos casos, prefira:

```c
scanf(" %c", &c);
```
