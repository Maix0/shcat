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
	v->a[36800] = anon_sym_POUND;
	v->a[36801] = anon_sym_AT;
	v->a[36802] = anon_sym_0;
	v->a[36803] = anon_sym__;
	v->a[36804] = actions(381);
	v->a[36805] = 19;
	v->a[36806] = anon_sym_AMP_AMP;
	v->a[36807] = anon_sym_PIPE_PIPE;
	v->a[36808] = anon_sym_LT;
	v->a[36809] = anon_sym_GT;
	v->a[36810] = anon_sym_GT_GT;
	v->a[36811] = anon_sym_LT_AMP;
	v->a[36812] = anon_sym_GT_AMP;
	v->a[36813] = anon_sym_GT_PIPE;
	v->a[36814] = anon_sym_LT_AMP_DASH;
	v->a[36815] = anon_sym_GT_AMP_DASH;
	v->a[36816] = aux_sym_heredoc_redirect_token1;
	v->a[36817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36818] = anon_sym_DQUOTE;
	v->a[36819] = sym_raw_string;
	small_parse_table_1841(v);
}

void	small_parse_table_1841(t_small_parse_table_array *v)
{
	v->a[36820] = sym_number;
	v->a[36821] = anon_sym_DOLLAR_LBRACE;
	v->a[36822] = anon_sym_DOLLAR_LPAREN;
	v->a[36823] = anon_sym_BQUOTE;
	v->a[36824] = sym_word;
	v->a[36825] = 5;
	v->a[36826] = actions(3);
	v->a[36827] = 1;
	v->a[36828] = sym_comment;
	v->a[36829] = actions(575);
	v->a[36830] = 2;
	v->a[36831] = sym_file_descriptor;
	v->a[36832] = sym_variable_name;
	v->a[36833] = state(430);
	v->a[36834] = 2;
	v->a[36835] = sym_concatenation;
	v->a[36836] = aux_sym_for_statement_repeat1;
	v->a[36837] = state(778);
	v->a[36838] = 5;
	v->a[36839] = sym_arithmetic_expansion;
	small_parse_table_1842(v);
}

void	small_parse_table_1842(t_small_parse_table_array *v)
{
	v->a[36840] = sym_string;
	v->a[36841] = sym_simple_expansion;
	v->a[36842] = sym_expansion;
	v->a[36843] = sym_command_substitution;
	v->a[36844] = actions(573);
	v->a[36845] = 23;
	v->a[36846] = anon_sym_PIPE;
	v->a[36847] = anon_sym_AMP_AMP;
	v->a[36848] = anon_sym_PIPE_PIPE;
	v->a[36849] = anon_sym_LT;
	v->a[36850] = anon_sym_GT;
	v->a[36851] = anon_sym_GT_GT;
	v->a[36852] = anon_sym_LT_AMP;
	v->a[36853] = anon_sym_GT_AMP;
	v->a[36854] = anon_sym_GT_PIPE;
	v->a[36855] = anon_sym_LT_AMP_DASH;
	v->a[36856] = anon_sym_GT_AMP_DASH;
	v->a[36857] = anon_sym_LT_LT;
	v->a[36858] = anon_sym_LT_LT_DASH;
	v->a[36859] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1843(v);
}

void	small_parse_table_1843(t_small_parse_table_array *v)
{
	v->a[36860] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36861] = anon_sym_DOLLAR;
	v->a[36862] = anon_sym_DQUOTE;
	v->a[36863] = sym_raw_string;
	v->a[36864] = sym_number;
	v->a[36865] = anon_sym_DOLLAR_LBRACE;
	v->a[36866] = anon_sym_DOLLAR_LPAREN;
	v->a[36867] = anon_sym_BQUOTE;
	v->a[36868] = sym_word;
	v->a[36869] = 3;
	v->a[36870] = actions(3);
	v->a[36871] = 1;
	v->a[36872] = sym_comment;
	v->a[36873] = actions(1033);
	v->a[36874] = 3;
	v->a[36875] = sym_file_descriptor;
	v->a[36876] = sym__concat;
	v->a[36877] = sym__bare_dollar;
	v->a[36878] = actions(1031);
	v->a[36879] = 28;
	small_parse_table_1844(v);
}

void	small_parse_table_1844(t_small_parse_table_array *v)
{
	v->a[36880] = anon_sym_PIPE;
	v->a[36881] = anon_sym_RPAREN;
	v->a[36882] = anon_sym_SEMI_SEMI;
	v->a[36883] = anon_sym_AMP_AMP;
	v->a[36884] = anon_sym_PIPE_PIPE;
	v->a[36885] = anon_sym_LT;
	v->a[36886] = anon_sym_GT;
	v->a[36887] = anon_sym_GT_GT;
	v->a[36888] = anon_sym_LT_AMP;
	v->a[36889] = anon_sym_GT_AMP;
	v->a[36890] = anon_sym_GT_PIPE;
	v->a[36891] = anon_sym_LT_AMP_DASH;
	v->a[36892] = anon_sym_GT_AMP_DASH;
	v->a[36893] = anon_sym_LT_LT;
	v->a[36894] = anon_sym_LT_LT_DASH;
	v->a[36895] = aux_sym_heredoc_redirect_token1;
	v->a[36896] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36897] = anon_sym_AMP;
	v->a[36898] = aux_sym_concatenation_token1;
	v->a[36899] = anon_sym_DOLLAR;
	small_parse_table_1845(v);
}

/* EOF small_parse_table_368.c */
