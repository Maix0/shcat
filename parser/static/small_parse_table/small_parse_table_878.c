/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_878.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4390(t_small_parse_table_array *v)
{
	v->a[87800] = actions(892);
	v->a[87801] = 1;
	v->a[87802] = anon_sym_DOLLAR_LPAREN;
	v->a[87803] = actions(894);
	v->a[87804] = 1;
	v->a[87805] = anon_sym_BQUOTE;
	v->a[87806] = actions(3563);
	v->a[87807] = 1;
	v->a[87808] = aux_sym_heredoc_redirect_token1;
	v->a[87809] = state(1613);
	v->a[87810] = 1;
	v->a[87811] = aux_sym__heredoc_command;
	v->a[87812] = state(2098);
	v->a[87813] = 1;
	v->a[87814] = sym_concatenation;
	v->a[87815] = actions(872);
	v->a[87816] = 3;
	v->a[87817] = sym_raw_string;
	v->a[87818] = sym_number;
	v->a[87819] = sym_word;
	small_parse_table_4391(v);
}

void	small_parse_table_4391(t_small_parse_table_array *v)
{
	v->a[87820] = state(1944);
	v->a[87821] = 5;
	v->a[87822] = sym_arithmetic_expansion;
	v->a[87823] = sym_string;
	v->a[87824] = sym_simple_expansion;
	v->a[87825] = sym_expansion;
	v->a[87826] = sym_command_substitution;
	v->a[87827] = 10;
	v->a[87828] = actions(3);
	v->a[87829] = 1;
	v->a[87830] = sym_comment;
	v->a[87831] = actions(3397);
	v->a[87832] = 1;
	v->a[87833] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87834] = actions(3401);
	v->a[87835] = 1;
	v->a[87836] = anon_sym_DQUOTE;
	v->a[87837] = actions(3403);
	v->a[87838] = 1;
	v->a[87839] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4392(v);
}

void	small_parse_table_4392(t_small_parse_table_array *v)
{
	v->a[87840] = actions(3405);
	v->a[87841] = 1;
	v->a[87842] = anon_sym_DOLLAR_LPAREN;
	v->a[87843] = actions(3407);
	v->a[87844] = 1;
	v->a[87845] = anon_sym_BQUOTE;
	v->a[87846] = actions(3409);
	v->a[87847] = 1;
	v->a[87848] = sym__bare_dollar;
	v->a[87849] = actions(3565);
	v->a[87850] = 1;
	v->a[87851] = anon_sym_DOLLAR;
	v->a[87852] = actions(3395);
	v->a[87853] = 5;
	v->a[87854] = aux_sym_concatenation_token1;
	v->a[87855] = sym_raw_string;
	v->a[87856] = sym_number;
	v->a[87857] = sym__comment_word;
	v->a[87858] = sym_word;
	v->a[87859] = state(1374);
	small_parse_table_4393(v);
}

void	small_parse_table_4393(t_small_parse_table_array *v)
{
	v->a[87860] = 5;
	v->a[87861] = sym_arithmetic_expansion;
	v->a[87862] = sym_string;
	v->a[87863] = sym_simple_expansion;
	v->a[87864] = sym_expansion;
	v->a[87865] = sym_command_substitution;
	v->a[87866] = 10;
	v->a[87867] = actions(3);
	v->a[87868] = 1;
	v->a[87869] = sym_comment;
	v->a[87870] = actions(729);
	v->a[87871] = 1;
	v->a[87872] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87873] = actions(733);
	v->a[87874] = 1;
	v->a[87875] = anon_sym_DQUOTE;
	v->a[87876] = actions(735);
	v->a[87877] = 1;
	v->a[87878] = anon_sym_DOLLAR_LBRACE;
	v->a[87879] = actions(737);
	small_parse_table_4394(v);
}

void	small_parse_table_4394(t_small_parse_table_array *v)
{
	v->a[87880] = 1;
	v->a[87881] = anon_sym_DOLLAR_LPAREN;
	v->a[87882] = actions(739);
	v->a[87883] = 1;
	v->a[87884] = anon_sym_BQUOTE;
	v->a[87885] = actions(3357);
	v->a[87886] = 1;
	v->a[87887] = sym__bare_dollar;
	v->a[87888] = actions(3567);
	v->a[87889] = 1;
	v->a[87890] = anon_sym_DOLLAR;
	v->a[87891] = actions(3355);
	v->a[87892] = 5;
	v->a[87893] = aux_sym_concatenation_token1;
	v->a[87894] = sym_raw_string;
	v->a[87895] = sym_number;
	v->a[87896] = sym__comment_word;
	v->a[87897] = sym_word;
	v->a[87898] = state(620);
	v->a[87899] = 5;
	small_parse_table_4395(v);
}

/* EOF small_parse_table_878.c */
