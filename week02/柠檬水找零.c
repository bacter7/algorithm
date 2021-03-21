bool lemonadeChange(int* bills, int billsSize){
    int s5 = 0, s10 = 0, s20 = 0;
    int flag =true;
    for (int i = 0; i < billsSize; i++) {
        switch(bills[i]) {
            case 20: 
                if (s10 > 0 && s5 > 0) {
                    s20++, s10--, s5--;
                    continue;
                } else if (s5 >= 3) {
                    s20++, s5 = s5 - 3;
                    continue;
                }
                flag = false; break;
            case 10:
                if (s5 > 0) {
                    s10++, s5--;
                    continue;
                }
                flag = false; break;
            case 5:
                s5++; break;
            default:
                flag = false; break;
        }
    }
    return flag;
}