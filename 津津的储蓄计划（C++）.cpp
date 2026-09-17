#include <iostream>
using namespace std;

int main() {
    int balance = 0; // 津津手里的钱
    int saved = 0;   // 存在妈妈那里的钱
    int budget;      // 每月预算

    for (int month = 1; month <= 12; ++month) {
        balance += 300; // 月初拿到妈妈给的300元
        
        cin >> budget;  // 读入当月预算
        
        // 如果钱不够这个月的预算
        if (balance < budget) {
            cout << "-" << month << endl;
            return 0; // 直接结束程序
        }
        
        // 扣除预算
        balance -= budget;
        
        // 将整百的钱存到妈妈那里
        int save_amount = (balance / 100) * 100;
        saved += save_amount;
        balance -= save_amount;
    }
    
    // 年底妈妈加上20%的利息还回来
    // 因为存进去的都是整百的数，所以 saved / 5 一定能整除
    int total = balance + saved + saved / 5;
    
    cout << total << endl;
    
    return 0;
}
