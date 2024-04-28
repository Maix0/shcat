/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_468.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2340(t_small_parse_table_array *v)
{
	v->a[46800] = anon_sym_GT;
	v->a[46801] = anon_sym_LT_LT;
	v->a[46802] = anon_sym_GT_GT;
	v->a[46803] = anon_sym_LPAREN;
	v->a[46804] = anon_sym_SEMI_SEMI;
	v->a[46805] = anon_sym_PIPE_AMP;
	v->a[46806] = anon_sym_EQ_TILDE;
	v->a[46807] = anon_sym_AMP_GT;
	v->a[46808] = anon_sym_AMP_GT_GT;
	v->a[46809] = anon_sym_LT_AMP;
	v->a[46810] = anon_sym_GT_AMP;
	v->a[46811] = anon_sym_GT_PIPE;
	v->a[46812] = anon_sym_LT_AMP_DASH;
	v->a[46813] = anon_sym_GT_AMP_DASH;
	v->a[46814] = anon_sym_LT_LT_DASH;
	v->a[46815] = anon_sym_LT_LT_LT;
	v->a[46816] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46817] = anon_sym_DOLLAR_LBRACK;
	v->a[46818] = aux_sym_concatenation_token1;
	v->a[46819] = anon_sym_DOLLAR;
	small_parse_table_2341(v);
}

void	small_parse_table_2341(t_small_parse_table_array *v)
{
	v->a[46820] = sym__special_character;
	v->a[46821] = anon_sym_DQUOTE;
	v->a[46822] = sym_raw_string;
	v->a[46823] = sym_ansi_c_string;
	v->a[46824] = aux_sym_number_token1;
	v->a[46825] = aux_sym_number_token2;
	v->a[46826] = anon_sym_DOLLAR_LBRACE;
	v->a[46827] = anon_sym_DOLLAR_LPAREN;
	v->a[46828] = anon_sym_BQUOTE;
	v->a[46829] = anon_sym_DOLLAR_BQUOTE;
	v->a[46830] = anon_sym_LT_LPAREN;
	v->a[46831] = anon_sym_GT_LPAREN;
	v->a[46832] = sym_word;
	v->a[46833] = 8;
	v->a[46834] = actions(3);
	v->a[46835] = 1;
	v->a[46836] = sym_comment;
	v->a[46837] = actions(1241);
	v->a[46838] = 1;
	v->a[46839] = sym_test_operator;
	small_parse_table_2342(v);
}

void	small_parse_table_2342(t_small_parse_table_array *v)
{
	v->a[46840] = actions(5086);
	v->a[46841] = 1;
	v->a[46842] = anon_sym_DQUOTE;
	v->a[46843] = actions(5090);
	v->a[46844] = 1;
	v->a[46845] = sym_variable_name;
	v->a[46846] = state(2442);
	v->a[46847] = 1;
	v->a[46848] = sym_string;
	v->a[46849] = actions(5088);
	v->a[46850] = 2;
	v->a[46851] = aux_sym__simple_variable_name_token1;
	v->a[46852] = aux_sym__multiline_variable_name_token1;
	v->a[46853] = actions(5084);
	v->a[46854] = 9;
	v->a[46855] = anon_sym_DASH;
	v->a[46856] = anon_sym_STAR;
	v->a[46857] = anon_sym_BANG;
	v->a[46858] = anon_sym_QMARK;
	v->a[46859] = anon_sym_DOLLAR;
	small_parse_table_2343(v);
}

void	small_parse_table_2343(t_small_parse_table_array *v)
{
	v->a[46860] = anon_sym_POUND;
	v->a[46861] = anon_sym_AT2;
	v->a[46862] = anon_sym_0;
	v->a[46863] = anon_sym__;
	v->a[46864] = actions(1239);
	v->a[46865] = 33;
	v->a[46866] = anon_sym_EQ;
	v->a[46867] = anon_sym_PLUS_PLUS;
	v->a[46868] = anon_sym_DASH_DASH;
	v->a[46869] = anon_sym_PLUS_EQ;
	v->a[46870] = anon_sym_DASH_EQ;
	v->a[46871] = anon_sym_STAR_EQ;
	v->a[46872] = anon_sym_SLASH_EQ;
	v->a[46873] = anon_sym_PERCENT_EQ;
	v->a[46874] = anon_sym_STAR_STAR_EQ;
	v->a[46875] = anon_sym_LT_LT_EQ;
	v->a[46876] = anon_sym_GT_GT_EQ;
	v->a[46877] = anon_sym_AMP_EQ;
	v->a[46878] = anon_sym_CARET_EQ;
	v->a[46879] = anon_sym_PIPE_EQ;
	small_parse_table_2344(v);
}

void	small_parse_table_2344(t_small_parse_table_array *v)
{
	v->a[46880] = anon_sym_PIPE_PIPE;
	v->a[46881] = anon_sym_AMP_AMP;
	v->a[46882] = anon_sym_PIPE;
	v->a[46883] = anon_sym_CARET;
	v->a[46884] = anon_sym_AMP;
	v->a[46885] = anon_sym_EQ_EQ;
	v->a[46886] = anon_sym_BANG_EQ;
	v->a[46887] = anon_sym_LT;
	v->a[46888] = anon_sym_GT;
	v->a[46889] = anon_sym_LT_EQ;
	v->a[46890] = anon_sym_GT_EQ;
	v->a[46891] = anon_sym_LT_LT;
	v->a[46892] = anon_sym_GT_GT;
	v->a[46893] = anon_sym_PLUS;
	v->a[46894] = anon_sym_SLASH;
	v->a[46895] = anon_sym_PERCENT;
	v->a[46896] = anon_sym_STAR_STAR;
	v->a[46897] = anon_sym_RBRACK_RBRACK;
	v->a[46898] = anon_sym_EQ_TILDE;
	v->a[46899] = 8;
	small_parse_table_2345(v);
}

/* EOF small_parse_table_468.c */
