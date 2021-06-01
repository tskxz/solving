int pesquisa_binaria_rec(double v[], int inicio, int fim, double valor) { ?

              if (inicio>fim) return –1;?

              int meio = (fim + inicio)/2;?

              if(v[meio]==valor) return meio;?

              if(valor>v[meio])?

                      return pesquisa_binaria_rec(v, meio+1, fim, valor);?

             else ?

                     return pesquisa_binaria_rec(v, inicio, meio-1, valor)?

}?

int pesquisa_binaria(double v[], int N, double valor) {?

                  return  pesquisa_binaria_rec(v, 0, N-1, valor);?

}