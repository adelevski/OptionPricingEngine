#pragma once

#include <vector>

#include "payoff.hpp"


class asian_option
{
public:
    asian_option(payoff* po);
    virtual ~asian_option() {};
    virtual double payoff_price(const std::vector<double>& S_vec) const = 0;

protected:
    payoff* po_;
};


class arithmetic_asian : asian_option
{
public:
    arithmetic_asian(payoff* po);
    virtual ~arithmetic_asian() {};
    virtual double payoff_price(const std::vector<double>& S_vec) const;
};


class geometric_asian : asian_option 
{
public:
    geometric_asian(payoff* po);
    virtual ~geometric_asian() {};
    virtual double payoff_price(const std::vector<double>& S_vec) const;
};

