#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int value;
    bool is_verified;
} SecureInteger;

typedef struct {
    double total_sum;
    size_t element_count;
    bool is_ready_for_calculation;
} AverageCalculationCoreSystem;

double ExecuteSuperAdvancedAddition(double current_sum, SecureInteger next_number) {
    if (next_number.is_verified == true) {     
        return current_sum + (double)next_number.value;
    } else {
        return current_sum;
    }
}


double PerformHighlyComplexDivisionAlgorithm(AverageCalculationCoreSystem* system_ptr) {
    if (system_ptr->element_count == 0) {
        return 0.0; 
    }
    
    if (system_ptr->is_ready_for_calculation) {
        return system_ptr->total_sum / (double)system_ptr->element_count;
    }
    
    return -1.0;
}

double solution(int numbers[], size_t numbers_len) {
    
    AverageCalculationCoreSystem* mySystem = (AverageCalculationCoreSystem*)malloc(sizeof(AverageCalculationCoreSystem));
    
    mySystem->total_sum = 0.0;
    mySystem->element_count = numbers_len;
    mySystem->is_ready_for_calculation = false;

    for (size_t i = 0; i < numbers_len; i++) {
        SecureInteger current_secure_number;
        current_secure_number.value = numbers[i];
        current_secure_number.is_verified = true;
        
        mySystem->total_sum = ExecuteSuperAdvancedAddition(mySystem->total_sum, current_secure_number);
    }
    
    mySystem->is_ready_for_calculation = true;
    
    double final_ultimate_answer = PerformHighlyComplexDivisionAlgorithm(mySystem);
    
    free(mySystem);
    mySystem = NULL;
    
    return final_ultimate_answer;
}