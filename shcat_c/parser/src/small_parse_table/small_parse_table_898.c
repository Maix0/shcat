/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_898.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4490(t_small_parse_table_array *v)
{
	v->a[89800] = state(1814);
	v->a[89801] = 1;
	v->a[89802] = aux_sym__literal_repeat1;
	v->a[89803] = actions(5478);
	v->a[89804] = 4;
	v->a[89805] = sym_file_descriptor;
	v->a[89806] = sym_test_operator;
	v->a[89807] = sym__brace_start;
	v->a[89808] = aux_sym_heredoc_redirect_token1;
	v->a[89809] = actions(5476);
	v->a[89810] = 38;
	v->a[89811] = anon_sym_LPAREN_LPAREN;
	v->a[89812] = anon_sym_SEMI;
	v->a[89813] = anon_sym_PIPE_PIPE;
	v->a[89814] = anon_sym_AMP_AMP;
	v->a[89815] = anon_sym_PIPE;
	v->a[89816] = anon_sym_AMP;
	v->a[89817] = anon_sym_LT;
	v->a[89818] = anon_sym_GT;
	v->a[89819] = anon_sym_LT_LT;
	small_parse_table_4491(v);
}

void	small_parse_table_4491(t_small_parse_table_array *v)
{
	v->a[89820] = anon_sym_GT_GT;
	v->a[89821] = anon_sym_SEMI_SEMI;
	v->a[89822] = anon_sym_SEMI_AMP;
	v->a[89823] = anon_sym_SEMI_SEMI_AMP;
	v->a[89824] = anon_sym_PIPE_AMP;
	v->a[89825] = anon_sym_AMP_GT;
	v->a[89826] = anon_sym_AMP_GT_GT;
	v->a[89827] = anon_sym_LT_AMP;
	v->a[89828] = anon_sym_GT_AMP;
	v->a[89829] = anon_sym_GT_PIPE;
	v->a[89830] = anon_sym_LT_AMP_DASH;
	v->a[89831] = anon_sym_GT_AMP_DASH;
	v->a[89832] = anon_sym_LT_LT_DASH;
	v->a[89833] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89834] = anon_sym_DOLLAR_LBRACK;
	v->a[89835] = anon_sym_DOLLAR;
	v->a[89836] = anon_sym_DQUOTE;
	v->a[89837] = sym_raw_string;
	v->a[89838] = sym_ansi_c_string;
	v->a[89839] = aux_sym_number_token1;
	small_parse_table_4492(v);
}

void	small_parse_table_4492(t_small_parse_table_array *v)
{
	v->a[89840] = aux_sym_number_token2;
	v->a[89841] = anon_sym_DOLLAR_LBRACE;
	v->a[89842] = anon_sym_DOLLAR_LPAREN;
	v->a[89843] = anon_sym_BQUOTE;
	v->a[89844] = anon_sym_DOLLAR_BQUOTE;
	v->a[89845] = anon_sym_LT_LPAREN;
	v->a[89846] = anon_sym_GT_LPAREN;
	v->a[89847] = aux_sym__simple_variable_name_token1;
	v->a[89848] = sym_word;
	v->a[89849] = 3;
	v->a[89850] = actions(3);
	v->a[89851] = 1;
	v->a[89852] = sym_comment;
	v->a[89853] = actions(1326);
	v->a[89854] = 5;
	v->a[89855] = sym_file_descriptor;
	v->a[89856] = sym__concat;
	v->a[89857] = sym_test_operator;
	v->a[89858] = sym__brace_start;
	v->a[89859] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4493(v);
}

void	small_parse_table_4493(t_small_parse_table_array *v)
{
	v->a[89860] = actions(1324);
	v->a[89861] = 39;
	v->a[89862] = anon_sym_LPAREN_LPAREN;
	v->a[89863] = anon_sym_SEMI;
	v->a[89864] = anon_sym_PIPE_PIPE;
	v->a[89865] = anon_sym_AMP_AMP;
	v->a[89866] = anon_sym_PIPE;
	v->a[89867] = anon_sym_AMP;
	v->a[89868] = anon_sym_LT;
	v->a[89869] = anon_sym_GT;
	v->a[89870] = anon_sym_LT_LT;
	v->a[89871] = anon_sym_GT_GT;
	v->a[89872] = anon_sym_RPAREN;
	v->a[89873] = anon_sym_SEMI_SEMI;
	v->a[89874] = anon_sym_PIPE_AMP;
	v->a[89875] = anon_sym_AMP_GT;
	v->a[89876] = anon_sym_AMP_GT_GT;
	v->a[89877] = anon_sym_LT_AMP;
	v->a[89878] = anon_sym_GT_AMP;
	v->a[89879] = anon_sym_GT_PIPE;
	small_parse_table_4494(v);
}

void	small_parse_table_4494(t_small_parse_table_array *v)
{
	v->a[89880] = anon_sym_LT_AMP_DASH;
	v->a[89881] = anon_sym_GT_AMP_DASH;
	v->a[89882] = anon_sym_LT_LT_DASH;
	v->a[89883] = anon_sym_LT_LT_LT;
	v->a[89884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89885] = anon_sym_DOLLAR_LBRACK;
	v->a[89886] = aux_sym_concatenation_token1;
	v->a[89887] = anon_sym_DOLLAR;
	v->a[89888] = sym__special_character;
	v->a[89889] = anon_sym_DQUOTE;
	v->a[89890] = sym_raw_string;
	v->a[89891] = sym_ansi_c_string;
	v->a[89892] = aux_sym_number_token1;
	v->a[89893] = aux_sym_number_token2;
	v->a[89894] = anon_sym_DOLLAR_LBRACE;
	v->a[89895] = anon_sym_DOLLAR_LPAREN;
	v->a[89896] = anon_sym_BQUOTE;
	v->a[89897] = anon_sym_DOLLAR_BQUOTE;
	v->a[89898] = anon_sym_LT_LPAREN;
	v->a[89899] = anon_sym_GT_LPAREN;
	small_parse_table_4495(v);
}

/* EOF small_parse_table_898.c */
