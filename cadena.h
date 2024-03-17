//---------------------------------------------------------------------------

#ifndef cadenaH
#define cadenaH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>

// Clase 2 - Programacion 2
// -----------------------
// contar espacios
// contar vocales v1
// contar vocales v2
// contar vocales v3

byte contar_espacios(String x);
byte contar_vocales_v1(String x);
byte contar_vocales_v2(String x);
byte contar_vocales_v3(String x);
int contar_letras_ASCII(AnsiString x);
void invertir_cadena(String &x);
String filtrar_digitos(String x);
String filtrar_primer_numero(String x);
bool verificar_solo_espacios(String x);
void eliminar_vocales(String &x);
String palabra_mas_larga(String s);
void eliminar_primera_letra_de_cada_palabra(String &x);
void invertir_cada_palabra(String &x);
bool verificar_palindromo(String x);

//---------------------------------------------------------------------------
#endif
