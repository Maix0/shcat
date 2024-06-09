/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_358.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1790(t_small_parse_table_array *v)
{
	v->a[35800] = actions(750);
	v->a[35801] = 1;
	v->a[35802] = sym_file_descriptor;
	v->a[35803] = actions(905);
	v->a[35804] = 1;
	v->a[35805] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35806] = actions(907);
	v->a[35807] = 1;
	v->a[35808] = anon_sym_DOLLAR;
	v->a[35809] = actions(909);
	v->a[35810] = 1;
	v->a[35811] = anon_sym_DQUOTE;
	v->a[35812] = actions(911);
	v->a[35813] = 1;
	v->a[35814] = aux_sym_number_token1;
	v->a[35815] = actions(913);
	v->a[35816] = 1;
	v->a[35817] = aux_sym_number_token2;
	v->a[35818] = actions(915);
	v->a[35819] = 1;
	small_parse_table_1791(v);
}

void	small_parse_table_1791(t_small_parse_table_array *v)
{
	v->a[35820] = anon_sym_DOLLAR_LBRACE;
	v->a[35821] = actions(917);
	v->a[35822] = 1;
	v->a[35823] = anon_sym_DOLLAR_LPAREN;
	v->a[35824] = actions(919);
	v->a[35825] = 1;
	v->a[35826] = anon_sym_BQUOTE;
	v->a[35827] = state(1105);
	v->a[35828] = 1;
	v->a[35829] = sym_concatenation;
	v->a[35830] = actions(1473);
	v->a[35831] = 2;
	v->a[35832] = sym_raw_string;
	v->a[35833] = sym_word;
	v->a[35834] = state(1296);
	v->a[35835] = 6;
	v->a[35836] = sym_arithmetic_expansion;
	v->a[35837] = sym_string;
	v->a[35838] = sym_number;
	v->a[35839] = sym_simple_expansion;
	small_parse_table_1792(v);
}

void	small_parse_table_1792(t_small_parse_table_array *v)
{
	v->a[35840] = sym_expansion;
	v->a[35841] = sym_command_substitution;
	v->a[35842] = actions(748);
	v->a[35843] = 16;
	v->a[35844] = anon_sym_PIPE;
	v->a[35845] = anon_sym_AMP_AMP;
	v->a[35846] = anon_sym_PIPE_PIPE;
	v->a[35847] = anon_sym_LT;
	v->a[35848] = anon_sym_GT;
	v->a[35849] = anon_sym_GT_GT;
	v->a[35850] = anon_sym_AMP_GT;
	v->a[35851] = anon_sym_AMP_GT_GT;
	v->a[35852] = anon_sym_LT_AMP;
	v->a[35853] = anon_sym_GT_AMP;
	v->a[35854] = anon_sym_GT_PIPE;
	v->a[35855] = anon_sym_LT_AMP_DASH;
	v->a[35856] = anon_sym_GT_AMP_DASH;
	v->a[35857] = anon_sym_LT_LT;
	v->a[35858] = anon_sym_LT_LT_DASH;
	v->a[35859] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1793(v);
}

void	small_parse_table_1793(t_small_parse_table_array *v)
{
	v->a[35860] = 3;
	v->a[35861] = actions(1404);
	v->a[35862] = 1;
	v->a[35863] = sym_comment;
	v->a[35864] = actions(1257);
	v->a[35865] = 13;
	v->a[35866] = anon_sym_PIPE;
	v->a[35867] = anon_sym_EQ;
	v->a[35868] = anon_sym_LT;
	v->a[35869] = anon_sym_GT;
	v->a[35870] = anon_sym_GT_GT;
	v->a[35871] = anon_sym_LT_LT;
	v->a[35872] = anon_sym_CARET;
	v->a[35873] = anon_sym_AMP;
	v->a[35874] = anon_sym_PLUS;
	v->a[35875] = anon_sym_DASH;
	v->a[35876] = anon_sym_STAR;
	v->a[35877] = anon_sym_SLASH;
	v->a[35878] = anon_sym_PERCENT;
	v->a[35879] = actions(1255);
	small_parse_table_1794(v);
}

void	small_parse_table_1794(t_small_parse_table_array *v)
{
	v->a[35880] = 21;
	v->a[35881] = anon_sym_AMP_AMP;
	v->a[35882] = anon_sym_PIPE_PIPE;
	v->a[35883] = anon_sym_RPAREN_RPAREN;
	v->a[35884] = anon_sym_PLUS_EQ;
	v->a[35885] = anon_sym_DASH_EQ;
	v->a[35886] = anon_sym_STAR_EQ;
	v->a[35887] = anon_sym_SLASH_EQ;
	v->a[35888] = anon_sym_PERCENT_EQ;
	v->a[35889] = anon_sym_LT_LT_EQ;
	v->a[35890] = anon_sym_GT_GT_EQ;
	v->a[35891] = anon_sym_AMP_EQ;
	v->a[35892] = anon_sym_CARET_EQ;
	v->a[35893] = anon_sym_PIPE_EQ;
	v->a[35894] = anon_sym_EQ_EQ;
	v->a[35895] = anon_sym_BANG_EQ;
	v->a[35896] = anon_sym_LT_EQ;
	v->a[35897] = anon_sym_GT_EQ;
	v->a[35898] = anon_sym_QMARK;
	v->a[35899] = anon_sym_COLON;
	small_parse_table_1795(v);
}

/* EOF small_parse_table_358.c */
