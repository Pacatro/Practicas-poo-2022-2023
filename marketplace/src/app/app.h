#ifndef APP_H
#define APP_H

#include <iostream>
#include "../market/market.h"

void menu(std::string slogan);
void add_product_to_basket(std::string client_id, std::string product_id, Market market);
void delete_product_in_basket(std::string client_id, std::string product_id, Market market);
inline void show_data(Market market) {market.dump_market();}

#endif