#include<stdio.h>
#include<math.h>


int main(){
     
    float nf, lab, lab_01, lab_02, lab_03, pj, pv;

    printf("Digite a nota do laboratório 1\n");
    scanf("%f", &lab_01);

    printf("Digite a nota do laboratório 2\n");
    scanf("%f", &lab_02);
    
    printf("Digite a nota do laboratório 3\n");
    scanf("%f", &lab_03);

    printf("Digite a nota do projeto\n");
    scanf("%f", &pj);

    printf("Digite a nota da prova final\n");
    scanf("%f", &pv);

    lab = (lab_01 + lab_02 + lab_03) / 3;

    nf = (0.2 * lab) + (0.8 * sqrt(pj * pv));

    printf("Essa é sua nota final: %.2f \n", nf);

    return 0;
}