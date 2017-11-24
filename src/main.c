/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c, cAnterior;
  int contador=0, ncomeca=1, ehNumero=0, antesVirgula=0, depoisVirgula=0;
  
  c = ' ';

  while (c != '\n') {
    cAnterior=c;
    
    scanf("%c", &c);
    
    if(c=='0' || c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7'|| c=='8'|| c=='9'){
        antesVirgula=1;
    }
        
    if((c=='0'|| c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7'|| c=='8'|| c=='9') && (cAnterior=='.' || cAnterior==',')){
        depoisVirgula=1;
    }
    
    if(antesVirgula==1 && depoisVirgula==1){
        ehNumero=1;
    }
    
    if((c=='.' || c==',' || c=='!' || c=='-') && cAnterior == ' '){
        ncomeca=0;
    }
    
    if(c!='.' && c!=',' && c!='!' && c!= '-' && c!=' ' && c!='\n'){
        ncomeca=1;
    }
    
    if((((c == ' ' || c=='\n') && cAnterior != ' ') && ncomeca==1) || ((cAnterior=='.' || cAnterior==',' || cAnterior=='-' || cAnterior=='!') && (c!=' ' && c!='.' && c!=',' && c!='-' && c!='\n' && c!='!'))){
        contador++;
    }
    
        
    if(ehNumero==1){
        antesVirgula=0;
        depoisVirgula=0;
        ehNumero=0;
        contador--;
    }
    
  }
  

  printf("%i\n",contador);
  return 0;
}
