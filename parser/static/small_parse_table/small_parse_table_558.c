/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_558.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2790(t_small_parse_table_array *v)
{
	v->a[55800] = sym_raw_string;
	v->a[55801] = sym_number;
	v->a[55802] = anon_sym_DOLLAR_LBRACE;
	v->a[55803] = anon_sym_DOLLAR_LPAREN;
	v->a[55804] = anon_sym_BQUOTE;
	v->a[55805] = sym_word;
	v->a[55806] = 10;
	v->a[55807] = actions(3);
	v->a[55808] = 1;
	v->a[55809] = sym_comment;
	v->a[55810] = actions(325);
	v->a[55811] = 1;
	v->a[55812] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55813] = actions(329);
	v->a[55814] = 1;
	v->a[55815] = anon_sym_DQUOTE;
	v->a[55816] = actions(333);
	v->a[55817] = 1;
	v->a[55818] = anon_sym_DOLLAR_LBRACE;
	v->a[55819] = actions(335);
	small_parse_table_2791(v);
}

void	small_parse_table_2791(t_small_parse_table_array *v)
{
	v->a[55820] = 1;
	v->a[55821] = anon_sym_DOLLAR_LPAREN;
	v->a[55822] = actions(337);
	v->a[55823] = 1;
	v->a[55824] = anon_sym_BQUOTE;
	v->a[55825] = actions(2197);
	v->a[55826] = 1;
	v->a[55827] = sym__bare_dollar;
	v->a[55828] = actions(2248);
	v->a[55829] = 1;
	v->a[55830] = anon_sym_DOLLAR;
	v->a[55831] = actions(2195);
	v->a[55832] = 5;
	v->a[55833] = aux_sym_concatenation_token1;
	v->a[55834] = sym_raw_string;
	v->a[55835] = sym_number;
	v->a[55836] = sym__comment_word;
	v->a[55837] = sym_word;
	v->a[55838] = state(689);
	v->a[55839] = 5;
	small_parse_table_2792(v);
}

void	small_parse_table_2792(t_small_parse_table_array *v)
{
	v->a[55840] = sym_arithmetic_expansion;
	v->a[55841] = sym_string;
	v->a[55842] = sym_simple_expansion;
	v->a[55843] = sym_expansion;
	v->a[55844] = sym_command_substitution;
	v->a[55845] = 6;
	v->a[55846] = actions(3);
	v->a[55847] = 1;
	v->a[55848] = sym_comment;
	v->a[55849] = actions(1599);
	v->a[55850] = 1;
	v->a[55851] = aux_sym_concatenation_token1;
	v->a[55852] = actions(2250);
	v->a[55853] = 1;
	v->a[55854] = sym__concat;
	v->a[55855] = state(722);
	v->a[55856] = 1;
	v->a[55857] = aux_sym_concatenation_repeat1;
	v->a[55858] = actions(1001);
	v->a[55859] = 2;
	small_parse_table_2793(v);
}

void	small_parse_table_2793(t_small_parse_table_array *v)
{
	v->a[55860] = sym_variable_name;
	v->a[55861] = aux_sym_heredoc_redirect_token1;
	v->a[55862] = actions(997);
	v->a[55863] = 12;
	v->a[55864] = anon_sym_PIPE;
	v->a[55865] = anon_sym_AMP_AMP;
	v->a[55866] = anon_sym_PIPE_PIPE;
	v->a[55867] = anon_sym_LT;
	v->a[55868] = anon_sym_GT;
	v->a[55869] = anon_sym_GT_GT;
	v->a[55870] = anon_sym_LT_AMP;
	v->a[55871] = anon_sym_GT_AMP;
	v->a[55872] = anon_sym_GT_PIPE;
	v->a[55873] = anon_sym_LT_GT;
	v->a[55874] = anon_sym_LT_LT;
	v->a[55875] = anon_sym_LT_LT_DASH;
	v->a[55876] = 12;
	v->a[55877] = actions(3);
	v->a[55878] = 1;
	v->a[55879] = sym_comment;
	small_parse_table_2794(v);
}

void	small_parse_table_2794(t_small_parse_table_array *v)
{
	v->a[55880] = actions(2031);
	v->a[55881] = 1;
	v->a[55882] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55883] = actions(2035);
	v->a[55884] = 1;
	v->a[55885] = anon_sym_DQUOTE;
	v->a[55886] = actions(2037);
	v->a[55887] = 1;
	v->a[55888] = anon_sym_DOLLAR_LBRACE;
	v->a[55889] = actions(2039);
	v->a[55890] = 1;
	v->a[55891] = anon_sym_DOLLAR_LPAREN;
	v->a[55892] = actions(2041);
	v->a[55893] = 1;
	v->a[55894] = anon_sym_BQUOTE;
	v->a[55895] = actions(2093);
	v->a[55896] = 1;
	v->a[55897] = anon_sym_DOLLAR;
	v->a[55898] = actions(2254);
	v->a[55899] = 1;
	small_parse_table_2795(v);
}

/* EOF small_parse_table_558.c */
