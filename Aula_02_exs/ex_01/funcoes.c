int soma(int num1, int num2){
    return num1 + num2;
}

int mult(int num1, int num2){
    return num1 * num2;
}

int sub(int num1, int num2){
    return num1 - num2;
}

float div(float num1, float num2){
    if(num1 == 0 || num2 == 0){  
        return 0;
    }   else{
        return num1 / num2;
    }
    
}