#include <emscripten.h>

//-------------------------------------------------------------------
//                  TEST FUNZIONALITA' 
//                     WebAssembly
//
// Autore: Pietro Grigolo
//-------------------------------------------------------------------

using namespace std;

EMSCRIPTEN_KEEPALIVE
int add_n(int n){
    /**
     * restituisce la somma di tutti i num naturali fino a n
     */
    return n * (n + 1) / 2;
}
