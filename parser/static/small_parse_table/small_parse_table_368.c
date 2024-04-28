/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_368.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1840(t_small_parse_table_array *v)
{
	v->a[36800] = aux_sym_concatenation_token1;
	v->a[36801] = actions(4875);
	v->a[36802] = 1;
	v->a[36803] = sym__concat;
	v->a[36804] = state(996);
	v->a[36805] = 1;
	v->a[36806] = aux_sym_concatenation_repeat1;
	v->a[36807] = actions(1267);
	v->a[36808] = 6;
	v->a[36809] = sym_file_descriptor;
	v->a[36810] = sym_test_operator;
	v->a[36811] = sym__bare_dollar;
	v->a[36812] = sym__brace_start;
	v->a[36813] = ts_builtin_sym_end;
	v->a[36814] = aux_sym_heredoc_redirect_token1;
	v->a[36815] = actions(1265);
	v->a[36816] = 40;
	v->a[36817] = anon_sym_LPAREN_LPAREN;
	v->a[36818] = anon_sym_SEMI;
	v->a[36819] = anon_sym_PIPE_PIPE;
	small_parse_table_1841(v);
}

void	small_parse_table_1841(t_small_parse_table_array *v)
{
	v->a[36820] = anon_sym_AMP_AMP;
	v->a[36821] = anon_sym_PIPE;
	v->a[36822] = anon_sym_AMP;
	v->a[36823] = anon_sym_EQ_EQ;
	v->a[36824] = anon_sym_LT;
	v->a[36825] = anon_sym_GT;
	v->a[36826] = anon_sym_LT_LT;
	v->a[36827] = anon_sym_GT_GT;
	v->a[36828] = anon_sym_LPAREN;
	v->a[36829] = anon_sym_SEMI_SEMI;
	v->a[36830] = anon_sym_PIPE_AMP;
	v->a[36831] = anon_sym_EQ_TILDE;
	v->a[36832] = anon_sym_AMP_GT;
	v->a[36833] = anon_sym_AMP_GT_GT;
	v->a[36834] = anon_sym_LT_AMP;
	v->a[36835] = anon_sym_GT_AMP;
	v->a[36836] = anon_sym_GT_PIPE;
	v->a[36837] = anon_sym_LT_AMP_DASH;
	v->a[36838] = anon_sym_GT_AMP_DASH;
	v->a[36839] = anon_sym_LT_LT_DASH;
	small_parse_table_1842(v);
}

void	small_parse_table_1842(t_small_parse_table_array *v)
{
	v->a[36840] = anon_sym_LT_LT_LT;
	v->a[36841] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36842] = anon_sym_DOLLAR_LBRACK;
	v->a[36843] = anon_sym_DOLLAR;
	v->a[36844] = sym__special_character;
	v->a[36845] = anon_sym_DQUOTE;
	v->a[36846] = sym_raw_string;
	v->a[36847] = sym_ansi_c_string;
	v->a[36848] = aux_sym_number_token1;
	v->a[36849] = aux_sym_number_token2;
	v->a[36850] = anon_sym_DOLLAR_LBRACE;
	v->a[36851] = anon_sym_DOLLAR_LPAREN;
	v->a[36852] = anon_sym_BQUOTE;
	v->a[36853] = anon_sym_DOLLAR_BQUOTE;
	v->a[36854] = anon_sym_LT_LPAREN;
	v->a[36855] = anon_sym_GT_LPAREN;
	v->a[36856] = sym_word;
	v->a[36857] = 8;
	v->a[36858] = actions(3);
	v->a[36859] = 1;
	small_parse_table_1843(v);
}

void	small_parse_table_1843(t_small_parse_table_array *v)
{
	v->a[36860] = sym_comment;
	v->a[36861] = actions(4867);
	v->a[36862] = 1;
	v->a[36863] = anon_sym_DQUOTE;
	v->a[36864] = actions(4871);
	v->a[36865] = 1;
	v->a[36866] = sym_variable_name;
	v->a[36867] = state(2525);
	v->a[36868] = 1;
	v->a[36869] = sym_string;
	v->a[36870] = actions(4869);
	v->a[36871] = 2;
	v->a[36872] = aux_sym__simple_variable_name_token1;
	v->a[36873] = aux_sym__multiline_variable_name_token1;
	v->a[36874] = actions(1241);
	v->a[36875] = 3;
	v->a[36876] = sym_file_descriptor;
	v->a[36877] = sym_test_operator;
	v->a[36878] = sym__brace_start;
	v->a[36879] = actions(4865);
	small_parse_table_1844(v);
}

void	small_parse_table_1844(t_small_parse_table_array *v)
{
	v->a[36880] = 9;
	v->a[36881] = anon_sym_DASH;
	v->a[36882] = anon_sym_STAR;
	v->a[36883] = anon_sym_BANG;
	v->a[36884] = anon_sym_QMARK;
	v->a[36885] = anon_sym_DOLLAR;
	v->a[36886] = anon_sym_POUND;
	v->a[36887] = anon_sym_AT2;
	v->a[36888] = anon_sym_0;
	v->a[36889] = anon_sym__;
	v->a[36890] = actions(1239);
	v->a[36891] = 32;
	v->a[36892] = anon_sym_LPAREN_LPAREN;
	v->a[36893] = anon_sym_PIPE_PIPE;
	v->a[36894] = anon_sym_AMP_AMP;
	v->a[36895] = anon_sym_PIPE;
	v->a[36896] = anon_sym_LT;
	v->a[36897] = anon_sym_GT;
	v->a[36898] = anon_sym_LT_LT;
	v->a[36899] = anon_sym_GT_GT;
	small_parse_table_1845(v);
}

/* EOF small_parse_table_368.c */
