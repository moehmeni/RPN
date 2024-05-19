/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:18:40 by mmomeni           #+#    #+#             */
/*   Updated: 2024/05/18 16:45:25 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
private:
    RPN(const RPN &src);
    RPN &operator=(const RPN &rhs);
    std::stack<int> _stack;

public:
    RPN();
    ~RPN();
    int eval(const std::string &expr);
};
