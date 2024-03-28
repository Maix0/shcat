/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enum.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:44:05 by rparodi           #+#    #+#             */
/*   Updated: 2024/03/28 13:09:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUM_H
#define ENUM_H

#include "./rust_type.h"

enum e_separator_op
{
    Semi,
    Fork,
};

enum e_pipeline_kind
{
    Or,
    And,
};


#endif
