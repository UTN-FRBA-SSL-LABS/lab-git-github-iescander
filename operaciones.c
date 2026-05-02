#include "operaciones.h"

/* ── sumar: adición  ───────────────────────── */

int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar  ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar: producto─────────────────────── */

int multiplicar(const int a, const int b) {
    (void)a; (void)b;
    return a * b; /* TODO: implementar */
}

/* ── esPar: verificar si un número es par ───────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}

int dividir(int a, int b) {
    return a - b; /* bug intencional */
}