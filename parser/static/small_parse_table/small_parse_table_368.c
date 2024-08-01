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
	v->a[36800] = 1;
	v->a[36801] = anon_sym_DOLLAR_LPAREN;
	v->a[36802] = actions(665);
	v->a[36803] = 1;
	v->a[36804] = anon_sym_BQUOTE;
	v->a[36805] = actions(1529);
	v->a[36806] = 1;
	v->a[36807] = anon_sym_DOLLAR;
	v->a[36808] = actions(1531);
	v->a[36809] = 1;
	v->a[36810] = sym__bare_dollar;
	v->a[36811] = actions(1527);
	v->a[36812] = 5;
	v->a[36813] = aux_sym_concatenation_token1;
	v->a[36814] = sym_raw_string;
	v->a[36815] = sym_number;
	v->a[36816] = sym__comment_word;
	v->a[36817] = sym_word;
	v->a[36818] = state(609);
	v->a[36819] = 5;
	small_parse_table_1841(v);
}

void	small_parse_table_1841(t_small_parse_table_array *v)
{
	v->a[36820] = sym_arithmetic_expansion;
	v->a[36821] = sym_string;
	v->a[36822] = sym_simple_expansion;
	v->a[36823] = sym_expansion;
	v->a[36824] = sym_command_substitution;
	v->a[36825] = 5;
	v->a[36826] = actions(3);
	v->a[36827] = 1;
	v->a[36828] = sym_comment;
	v->a[36829] = actions(1257);
	v->a[36830] = 1;
	v->a[36831] = sym_variable_name;
	v->a[36832] = actions(1254);
	v->a[36833] = 3;
	v->a[36834] = anon_sym_LT;
	v->a[36835] = anon_sym_GT;
	v->a[36836] = anon_sym_GT_GT;
	v->a[36837] = actions(1249);
	v->a[36838] = 4;
	v->a[36839] = anon_sym_PIPE;
	small_parse_table_1842(v);
}

void	small_parse_table_1842(t_small_parse_table_array *v)
{
	v->a[36840] = anon_sym_AMP_AMP;
	v->a[36841] = anon_sym_PIPE_PIPE;
	v->a[36842] = anon_sym_LT_LT;
	v->a[36843] = actions(1247);
	v->a[36844] = 9;
	v->a[36845] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36846] = anon_sym_DOLLAR;
	v->a[36847] = anon_sym_DQUOTE;
	v->a[36848] = sym_raw_string;
	v->a[36849] = sym_number;
	v->a[36850] = anon_sym_DOLLAR_LBRACE;
	v->a[36851] = anon_sym_DOLLAR_LPAREN;
	v->a[36852] = anon_sym_BQUOTE;
	v->a[36853] = sym_word;
	v->a[36854] = 10;
	v->a[36855] = actions(3);
	v->a[36856] = 1;
	v->a[36857] = sym_comment;
	v->a[36858] = actions(1535);
	v->a[36859] = 1;
	small_parse_table_1843(v);
}

void	small_parse_table_1843(t_small_parse_table_array *v)
{
	v->a[36860] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36861] = actions(1537);
	v->a[36862] = 1;
	v->a[36863] = anon_sym_DOLLAR;
	v->a[36864] = actions(1539);
	v->a[36865] = 1;
	v->a[36866] = anon_sym_DQUOTE;
	v->a[36867] = actions(1541);
	v->a[36868] = 1;
	v->a[36869] = anon_sym_DOLLAR_LBRACE;
	v->a[36870] = actions(1543);
	v->a[36871] = 1;
	v->a[36872] = anon_sym_DOLLAR_LPAREN;
	v->a[36873] = actions(1545);
	v->a[36874] = 1;
	v->a[36875] = anon_sym_BQUOTE;
	v->a[36876] = actions(1547);
	v->a[36877] = 1;
	v->a[36878] = sym__bare_dollar;
	v->a[36879] = actions(1533);
	small_parse_table_1844(v);
}

void	small_parse_table_1844(t_small_parse_table_array *v)
{
	v->a[36880] = 5;
	v->a[36881] = aux_sym_concatenation_token1;
	v->a[36882] = sym_raw_string;
	v->a[36883] = sym_number;
	v->a[36884] = sym__comment_word;
	v->a[36885] = sym_word;
	v->a[36886] = state(778);
	v->a[36887] = 5;
	v->a[36888] = sym_arithmetic_expansion;
	v->a[36889] = sym_string;
	v->a[36890] = sym_simple_expansion;
	v->a[36891] = sym_expansion;
	v->a[36892] = sym_command_substitution;
	v->a[36893] = 10;
	v->a[36894] = actions(3);
	v->a[36895] = 1;
	v->a[36896] = sym_comment;
	v->a[36897] = actions(655);
	v->a[36898] = 1;
	v->a[36899] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1845(v);
}

/* EOF small_parse_table_368.c */
