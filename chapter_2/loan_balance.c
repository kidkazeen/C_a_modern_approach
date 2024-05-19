#include <stdio.h>

int main(void)
{
    float loan = 0.0f;
    float i_rate = 0.0f;
    float m_payment = 0.0f;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &i_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &m_payment);

    float monthly_i_rate = (i_rate/100.0f) / 12.0;

    loan = loan + (loan * monthly_i_rate);
    loan = loan - m_payment;
    printf("Balance remaining after first payment: ");
    printf("%.2f\n", loan);

    loan = loan + (loan * monthly_i_rate);
    loan = loan - m_payment;
    printf("Balance remaining after second payment: ");
    printf("%.2f\n", loan);

    loan = loan + (loan * monthly_i_rate);
    loan = loan - m_payment;
    printf("Balance remaining after third payment: ");
    printf("%.2f\n", loan);
}