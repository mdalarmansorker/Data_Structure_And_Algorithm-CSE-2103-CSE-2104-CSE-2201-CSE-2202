from math import inf

def number_of_coin(s, coins, current_value):
    if(current_value < 1):
        return 0
    if(s[current_value] != 9999999999):
        return s[current_value]

    for coin_value in coins:
        if(coin_value <= current_value):
            possible_option = number_of_coin(s,coins, current_value-coin_value) + 1
            if(possible_option < s[current_value]):
                s[current_value] = possible_option
    return s[current_value]
S = 11
coins = [1, 3, 5]
s = [9999999999] * (S+1)
number_of_coin(s, coins, S)
print(s[S])