// market.h: Paco Algar
// Defining Market class

#ifndef MARKET_H
#define MARKET_H

#include <string>
#include <list>
#include <iostream>
#include <fstream>
#include "../client/client.h"
#include "../seller/seller.h"

class Market{
    private:
        std::list<Client> client_list_;
        std::list<Seller> seller_list_;
        std::string slogan_;

        //Aditional
        bool product_on_sale_(std::string product_id);

    public:
        inline Market(std::string slogan):
                slogan_(slogan){}

        inline ~Market(){}

        //Observers
        inline std::string get_slogan() const {return slogan_;}

        //Transformers
        inline void set_slogan(std::string slogan){slogan_ = slogan;}

        //Operations
        bool add_client(Client client);
        bool add_seller(Seller seller);
        inline int n_clients() const {return client_list_.size();}
        inline int n_sellers() const {return seller_list_.size();}
        bool delete_client(Client client);
        bool delete_seller(Seller seller);
        bool add_product_client(Product p, std::string id_client);
        bool add_product_seller(Product p, std::string id_seller);
        bool delete_product_client(Product p, std::string id_client);
        bool delete_product_seller(Product p, std::string id_seller);
        float get_money_in_basket();
        void dump_market();        
};

#endif