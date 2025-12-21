# Algumas observações

## Rodar um programa em C
Para rodar o programa em C:

```bash
    gcc ex00.c -o ex00 -lm
```

## Diferença: `scanf("%ld", &x)` vs `scanf("%le", &x)` vs `scanf("%lf", &x)` (x = double)

- **`%ld`**:
  - Para **long int**.
  - **Errado** para `double` → undefined behavior (valores garbage, crash possível).
  - Nunca use.

- **`%le`** (ou `%lE`):
  - Para **double** em notação científica (ex: `1.23e+04`).
  - Aceita também formato decimal comum (`123.45`).
  - Correto, mas menos comum.

- **`%lf`**:
  - Especificador **padrão e mais recomendado** para `double`.
  - Aceita formatos decimais e científicos normalmente.
  - Uso mais simples e universal.

**Outros especificadores válidos para `double`**:
- `%lg` (ou `%lG`): Escolhe automaticamente entre formato fixo (`f`) ou científico (`e`), removendo zeros desnecessários.
- `%la` (ou `%lA`): Lê em notação hexadecimal (ex: `0x1.fp+2`).

**Recomendado**: Use **`%lf`** para a maioria dos casos.

## Operações bit a bit

[Bitwise operations in C -Wikipedia](https://en.wikipedia.org/wiki/Bitwise_operations_in_C)

## Quando usar `unsigned char`?

1. [GeeksforGeeks](https://www.geeksforgeeks.org/c/unsigned-char-in-c-with-examples/)
2. [StackOverflow](https://pt.stackoverflow.com/questions/357931/em-quais-ocasiões-devo-utilizar-um-unsigned-char-ou-um-char-em-c)
3. [C data types - Wikipedia](https://en.wikipedia.org/wiki/C_data_types)