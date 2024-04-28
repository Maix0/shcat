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
	v->a[35800] = anon_sym_STAR;
	v->a[35801] = anon_sym_BANG;
	v->a[35802] = anon_sym_QMARK;
	v->a[35803] = anon_sym_DOLLAR;
	v->a[35804] = anon_sym_POUND;
	v->a[35805] = anon_sym_AT2;
	v->a[35806] = anon_sym_0;
	v->a[35807] = anon_sym__;
	v->a[35808] = actions(1239);
	v->a[35809] = 32;
	v->a[35810] = anon_sym_LPAREN_LPAREN;
	v->a[35811] = anon_sym_PIPE_PIPE;
	v->a[35812] = anon_sym_AMP_AMP;
	v->a[35813] = anon_sym_PIPE;
	v->a[35814] = anon_sym_LT;
	v->a[35815] = anon_sym_GT;
	v->a[35816] = anon_sym_LT_LT;
	v->a[35817] = anon_sym_GT_GT;
	v->a[35818] = anon_sym_PIPE_AMP;
	v->a[35819] = anon_sym_RBRACK;
	small_parse_table_1791(v);
}

void	small_parse_table_1791(t_small_parse_table_array *v)
{
	v->a[35820] = anon_sym_AMP_GT;
	v->a[35821] = anon_sym_AMP_GT_GT;
	v->a[35822] = anon_sym_LT_AMP;
	v->a[35823] = anon_sym_GT_AMP;
	v->a[35824] = anon_sym_GT_PIPE;
	v->a[35825] = anon_sym_LT_AMP_DASH;
	v->a[35826] = anon_sym_GT_AMP_DASH;
	v->a[35827] = anon_sym_LT_LT_DASH;
	v->a[35828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35829] = anon_sym_DOLLAR_LBRACK;
	v->a[35830] = sym__special_character;
	v->a[35831] = sym_raw_string;
	v->a[35832] = sym_ansi_c_string;
	v->a[35833] = aux_sym_number_token1;
	v->a[35834] = aux_sym_number_token2;
	v->a[35835] = anon_sym_DOLLAR_LBRACE;
	v->a[35836] = anon_sym_DOLLAR_LPAREN;
	v->a[35837] = anon_sym_BQUOTE;
	v->a[35838] = anon_sym_DOLLAR_BQUOTE;
	v->a[35839] = anon_sym_LT_LPAREN;
	small_parse_table_1792(v);
}

void	small_parse_table_1792(t_small_parse_table_array *v)
{
	v->a[35840] = anon_sym_GT_LPAREN;
	v->a[35841] = sym_word;
	v->a[35842] = 6;
	v->a[35843] = actions(3);
	v->a[35844] = 1;
	v->a[35845] = sym_comment;
	v->a[35846] = actions(4699);
	v->a[35847] = 1;
	v->a[35848] = aux_sym_concatenation_token1;
	v->a[35849] = actions(4814);
	v->a[35850] = 1;
	v->a[35851] = sym__concat;
	v->a[35852] = state(965);
	v->a[35853] = 1;
	v->a[35854] = aux_sym_concatenation_repeat1;
	v->a[35855] = actions(1288);
	v->a[35856] = 5;
	v->a[35857] = sym_file_descriptor;
	v->a[35858] = sym_test_operator;
	v->a[35859] = sym__bare_dollar;
	small_parse_table_1793(v);
}

void	small_parse_table_1793(t_small_parse_table_array *v)
{
	v->a[35860] = sym__brace_start;
	v->a[35861] = aux_sym_heredoc_redirect_token1;
	v->a[35862] = actions(1286);
	v->a[35863] = 41;
	v->a[35864] = anon_sym_LPAREN_LPAREN;
	v->a[35865] = anon_sym_SEMI;
	v->a[35866] = anon_sym_PIPE_PIPE;
	v->a[35867] = anon_sym_AMP_AMP;
	v->a[35868] = anon_sym_PIPE;
	v->a[35869] = anon_sym_AMP;
	v->a[35870] = anon_sym_EQ_EQ;
	v->a[35871] = anon_sym_LT;
	v->a[35872] = anon_sym_GT;
	v->a[35873] = anon_sym_LT_LT;
	v->a[35874] = anon_sym_GT_GT;
	v->a[35875] = anon_sym_LPAREN;
	v->a[35876] = anon_sym_RPAREN;
	v->a[35877] = anon_sym_SEMI_SEMI;
	v->a[35878] = anon_sym_PIPE_AMP;
	v->a[35879] = anon_sym_EQ_TILDE;
	small_parse_table_1794(v);
}

void	small_parse_table_1794(t_small_parse_table_array *v)
{
	v->a[35880] = anon_sym_AMP_GT;
	v->a[35881] = anon_sym_AMP_GT_GT;
	v->a[35882] = anon_sym_LT_AMP;
	v->a[35883] = anon_sym_GT_AMP;
	v->a[35884] = anon_sym_GT_PIPE;
	v->a[35885] = anon_sym_LT_AMP_DASH;
	v->a[35886] = anon_sym_GT_AMP_DASH;
	v->a[35887] = anon_sym_LT_LT_DASH;
	v->a[35888] = anon_sym_LT_LT_LT;
	v->a[35889] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35890] = anon_sym_DOLLAR_LBRACK;
	v->a[35891] = anon_sym_DOLLAR;
	v->a[35892] = sym__special_character;
	v->a[35893] = anon_sym_DQUOTE;
	v->a[35894] = sym_raw_string;
	v->a[35895] = sym_ansi_c_string;
	v->a[35896] = aux_sym_number_token1;
	v->a[35897] = aux_sym_number_token2;
	v->a[35898] = anon_sym_DOLLAR_LBRACE;
	v->a[35899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1795(v);
}

/* EOF small_parse_table_358.c */
