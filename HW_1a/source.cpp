#include <iostream>
#include <string>

float getSalesAmount();
float calcCommission(float);
float calcPay(float);
void displayPay(float, float, float);

int main() {
    std::string loop;
    do {
        loop = "";
        float salesAmount = getSalesAmount();
        float commission = calcCommission(salesAmount);
        float totalPay = calcPay(commission);
        displayPay(salesAmount, commission, totalPay);
        std::cout << "loop? (y/*)" << '\n';
        std::cin >> loop;
    } while (loop[0] == 'y');
    return 0;
}

float getSalesAmount() {
    float salesAmount = 0;
    std::cout << "Enter sales amount " << '\n';
    std::cin >> salesAmount;
    return salesAmount;
}

float calcCommission(float salesAmount) {
    float commissionRate = 0;
    if (salesAmount > 50000) {
        commissionRate = 0.2;
    } else if (salesAmount > 25000) {
        commissionRate = 0.15;
    } else {
        commissionRate = 0;
    }
    return salesAmount * commissionRate;
}

float calcPay(float commission) {
    const int PAY = 2500;
    return PAY + commission;
}

void displayPay(float salesAmount, float commission, float totalPay) {
    std::cout << "Monthly Sales: " << salesAmount << '\n';
    std::cout << "Commission: " << commission << '\n';
    std::cout << "Base Pay: " << totalPay - commission << '\n';
    std::cout << "Total Pay: " << totalPay << '\n';
}
