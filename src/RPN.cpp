/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:40:14 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/18 16:48:50 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}

int RPN::eval(const std::string &expr)
{
    std::istringstream iss(expr);
    std::string token;
    while (iss >> token)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (_stack.size() < 2)
                throw std::runtime_error("Not enough operands");
            int a = _stack.top();
            _stack.pop();
            int b = _stack.top();
            _stack.pop();
            if (token == "+")
                _stack.push(b + a);
            else if (token == "-")
                _stack.push(b - a);
            else if (token == "*")
                _stack.push(b * a);
            else if (token == "/")
            {
                if (a == 0)
                    throw std::runtime_error("Division by zero");
                _stack.push(b / a);
            }
        }
        else
        {
            _stack.push(std::stoi(token));
        }
    }
    if (_stack.size() != 1)
        throw std::runtime_error("Too many operands");
    return _stack.top();
}
