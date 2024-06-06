/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1217.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6085(t_small_parse_table_array *v)
{
	v->a[121700] = actions(6547);
	v->a[121701] = 1;
	v->a[121702] = sym__comment_word;
	v->a[121703] = actions(7043);
	v->a[121704] = 1;
	v->a[121705] = anon_sym_DOLLAR;
	v->a[121706] = actions(6545);
	v->a[121707] = 3;
	v->a[121708] = sym_test_operator;
	v->a[121709] = sym__bare_dollar;
	v->a[121710] = sym_raw_string;
	v->a[121711] = state(1400);
	v->a[121712] = 7;
	v->a[121713] = sym_arithmetic_expansion;
	v->a[121714] = sym_brace_expression;
	v->a[121715] = sym_string;
	v->a[121716] = sym_number;
	v->a[121717] = sym_simple_expansion;
	v->a[121718] = sym_expansion;
	v->a[121719] = sym_command_substitution;
	small_parse_table_6086(v);
}

void	small_parse_table_6086(t_small_parse_table_array *v)
{
	v->a[121720] = 16;
	v->a[121721] = actions(3);
	v->a[121722] = 1;
	v->a[121723] = sym_comment;
	v->a[121724] = actions(661);
	v->a[121725] = 1;
	v->a[121726] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121727] = actions(667);
	v->a[121728] = 1;
	v->a[121729] = anon_sym_DQUOTE;
	v->a[121730] = actions(671);
	v->a[121731] = 1;
	v->a[121732] = aux_sym_number_token1;
	v->a[121733] = actions(673);
	v->a[121734] = 1;
	v->a[121735] = aux_sym_number_token2;
	v->a[121736] = actions(675);
	v->a[121737] = 1;
	v->a[121738] = anon_sym_DOLLAR_LBRACE;
	v->a[121739] = actions(677);
	small_parse_table_6087(v);
}

void	small_parse_table_6087(t_small_parse_table_array *v)
{
	v->a[121740] = 1;
	v->a[121741] = anon_sym_DOLLAR_LPAREN;
	v->a[121742] = actions(679);
	v->a[121743] = 1;
	v->a[121744] = anon_sym_BQUOTE;
	v->a[121745] = actions(681);
	v->a[121746] = 1;
	v->a[121747] = anon_sym_DOLLAR_BQUOTE;
	v->a[121748] = actions(687);
	v->a[121749] = 1;
	v->a[121750] = sym__brace_start;
	v->a[121751] = actions(6541);
	v->a[121752] = 1;
	v->a[121753] = sym_word;
	v->a[121754] = actions(6543);
	v->a[121755] = 1;
	v->a[121756] = sym__special_character;
	v->a[121757] = actions(6547);
	v->a[121758] = 1;
	v->a[121759] = sym__comment_word;
	small_parse_table_6088(v);
}

void	small_parse_table_6088(t_small_parse_table_array *v)
{
	v->a[121760] = actions(7045);
	v->a[121761] = 1;
	v->a[121762] = anon_sym_DOLLAR;
	v->a[121763] = actions(6545);
	v->a[121764] = 3;
	v->a[121765] = sym_test_operator;
	v->a[121766] = sym__bare_dollar;
	v->a[121767] = sym_raw_string;
	v->a[121768] = state(1400);
	v->a[121769] = 7;
	v->a[121770] = sym_arithmetic_expansion;
	v->a[121771] = sym_brace_expression;
	v->a[121772] = sym_string;
	v->a[121773] = sym_number;
	v->a[121774] = sym_simple_expansion;
	v->a[121775] = sym_expansion;
	v->a[121776] = sym_command_substitution;
	v->a[121777] = 16;
	v->a[121778] = actions(3);
	v->a[121779] = 1;
	small_parse_table_6089(v);
}

void	small_parse_table_6089(t_small_parse_table_array *v)
{
	v->a[121780] = sym_comment;
	v->a[121781] = actions(369);
	v->a[121782] = 1;
	v->a[121783] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121784] = actions(375);
	v->a[121785] = 1;
	v->a[121786] = anon_sym_DQUOTE;
	v->a[121787] = actions(379);
	v->a[121788] = 1;
	v->a[121789] = aux_sym_number_token1;
	v->a[121790] = actions(381);
	v->a[121791] = 1;
	v->a[121792] = aux_sym_number_token2;
	v->a[121793] = actions(383);
	v->a[121794] = 1;
	v->a[121795] = anon_sym_DOLLAR_LBRACE;
	v->a[121796] = actions(385);
	v->a[121797] = 1;
	v->a[121798] = anon_sym_DOLLAR_LPAREN;
	v->a[121799] = actions(387);
	small_parse_table_6090(v);
}

/* EOF small_parse_table_1217.c */
