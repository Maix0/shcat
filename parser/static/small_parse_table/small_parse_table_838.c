/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_838.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4190(t_small_parse_table_array *v)
{
	v->a[83800] = actions(3);
	v->a[83801] = 1;
	v->a[83802] = sym_comment;
	v->a[83803] = actions(1011);
	v->a[83804] = 1;
	v->a[83805] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83806] = actions(1013);
	v->a[83807] = 1;
	v->a[83808] = anon_sym_DOLLAR;
	v->a[83809] = actions(1015);
	v->a[83810] = 1;
	v->a[83811] = anon_sym_DQUOTE;
	v->a[83812] = actions(1017);
	v->a[83813] = 1;
	v->a[83814] = anon_sym_DOLLAR_LBRACE;
	v->a[83815] = actions(1019);
	v->a[83816] = 1;
	v->a[83817] = anon_sym_DOLLAR_LPAREN;
	v->a[83818] = actions(1021);
	v->a[83819] = 1;
	small_parse_table_4191(v);
}

void	small_parse_table_4191(t_small_parse_table_array *v)
{
	v->a[83820] = anon_sym_BQUOTE;
	v->a[83821] = actions(3190);
	v->a[83822] = 1;
	v->a[83823] = sym__bare_dollar;
	v->a[83824] = actions(3188);
	v->a[83825] = 5;
	v->a[83826] = aux_sym_concatenation_token1;
	v->a[83827] = sym_raw_string;
	v->a[83828] = sym_number;
	v->a[83829] = sym__comment_word;
	v->a[83830] = sym_word;
	v->a[83831] = state(1026);
	v->a[83832] = 5;
	v->a[83833] = sym_arithmetic_expansion;
	v->a[83834] = sym_string;
	v->a[83835] = sym_simple_expansion;
	v->a[83836] = sym_expansion;
	v->a[83837] = sym_command_substitution;
	v->a[83838] = 10;
	v->a[83839] = actions(3);
	small_parse_table_4192(v);
}

void	small_parse_table_4192(t_small_parse_table_array *v)
{
	v->a[83840] = 1;
	v->a[83841] = sym_comment;
	v->a[83842] = actions(345);
	v->a[83843] = 1;
	v->a[83844] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83845] = actions(349);
	v->a[83846] = 1;
	v->a[83847] = anon_sym_DQUOTE;
	v->a[83848] = actions(353);
	v->a[83849] = 1;
	v->a[83850] = anon_sym_DOLLAR_LBRACE;
	v->a[83851] = actions(355);
	v->a[83852] = 1;
	v->a[83853] = anon_sym_DOLLAR_LPAREN;
	v->a[83854] = actions(357);
	v->a[83855] = 1;
	v->a[83856] = anon_sym_BQUOTE;
	v->a[83857] = actions(3194);
	v->a[83858] = 1;
	v->a[83859] = anon_sym_DOLLAR;
	small_parse_table_4193(v);
}

void	small_parse_table_4193(t_small_parse_table_array *v)
{
	v->a[83860] = actions(3196);
	v->a[83861] = 1;
	v->a[83862] = sym__bare_dollar;
	v->a[83863] = actions(3192);
	v->a[83864] = 5;
	v->a[83865] = aux_sym_concatenation_token1;
	v->a[83866] = sym_raw_string;
	v->a[83867] = sym_number;
	v->a[83868] = sym__comment_word;
	v->a[83869] = sym_word;
	v->a[83870] = state(982);
	v->a[83871] = 5;
	v->a[83872] = sym_arithmetic_expansion;
	v->a[83873] = sym_string;
	v->a[83874] = sym_simple_expansion;
	v->a[83875] = sym_expansion;
	v->a[83876] = sym_command_substitution;
	v->a[83877] = 10;
	v->a[83878] = actions(3);
	v->a[83879] = 1;
	small_parse_table_4194(v);
}

void	small_parse_table_4194(t_small_parse_table_array *v)
{
	v->a[83880] = sym_comment;
	v->a[83881] = actions(3200);
	v->a[83882] = 1;
	v->a[83883] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83884] = actions(3202);
	v->a[83885] = 1;
	v->a[83886] = anon_sym_DOLLAR;
	v->a[83887] = actions(3204);
	v->a[83888] = 1;
	v->a[83889] = anon_sym_DQUOTE;
	v->a[83890] = actions(3206);
	v->a[83891] = 1;
	v->a[83892] = anon_sym_DOLLAR_LBRACE;
	v->a[83893] = actions(3208);
	v->a[83894] = 1;
	v->a[83895] = anon_sym_DOLLAR_LPAREN;
	v->a[83896] = actions(3210);
	v->a[83897] = 1;
	v->a[83898] = anon_sym_BQUOTE;
	v->a[83899] = actions(3212);
	small_parse_table_4195(v);
}

/* EOF small_parse_table_838.c */
