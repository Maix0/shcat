/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_867.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4335(t_small_parse_table_array *v)
{
	v->a[86700] = 5;
	v->a[86701] = sym_arithmetic_expansion;
	v->a[86702] = sym_string;
	v->a[86703] = sym_simple_expansion;
	v->a[86704] = sym_expansion;
	v->a[86705] = sym_command_substitution;
	v->a[86706] = 10;
	v->a[86707] = actions(3);
	v->a[86708] = 1;
	v->a[86709] = sym_comment;
	v->a[86710] = actions(497);
	v->a[86711] = 1;
	v->a[86712] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86713] = actions(501);
	v->a[86714] = 1;
	v->a[86715] = anon_sym_DQUOTE;
	v->a[86716] = actions(503);
	v->a[86717] = 1;
	v->a[86718] = anon_sym_DOLLAR_LBRACE;
	v->a[86719] = actions(505);
	small_parse_table_4336(v);
}

void	small_parse_table_4336(t_small_parse_table_array *v)
{
	v->a[86720] = 1;
	v->a[86721] = anon_sym_DOLLAR_LPAREN;
	v->a[86722] = actions(507);
	v->a[86723] = 1;
	v->a[86724] = anon_sym_BQUOTE;
	v->a[86725] = actions(3425);
	v->a[86726] = 1;
	v->a[86727] = sym__bare_dollar;
	v->a[86728] = actions(3505);
	v->a[86729] = 1;
	v->a[86730] = anon_sym_DOLLAR;
	v->a[86731] = actions(3423);
	v->a[86732] = 5;
	v->a[86733] = aux_sym_concatenation_token1;
	v->a[86734] = sym_raw_string;
	v->a[86735] = sym_number;
	v->a[86736] = sym__comment_word;
	v->a[86737] = sym_word;
	v->a[86738] = state(431);
	v->a[86739] = 5;
	small_parse_table_4337(v);
}

void	small_parse_table_4337(t_small_parse_table_array *v)
{
	v->a[86740] = sym_arithmetic_expansion;
	v->a[86741] = sym_string;
	v->a[86742] = sym_simple_expansion;
	v->a[86743] = sym_expansion;
	v->a[86744] = sym_command_substitution;
	v->a[86745] = 10;
	v->a[86746] = actions(3);
	v->a[86747] = 1;
	v->a[86748] = sym_comment;
	v->a[86749] = actions(3377);
	v->a[86750] = 1;
	v->a[86751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86752] = actions(3379);
	v->a[86753] = 1;
	v->a[86754] = anon_sym_DOLLAR;
	v->a[86755] = actions(3381);
	v->a[86756] = 1;
	v->a[86757] = anon_sym_DQUOTE;
	v->a[86758] = actions(3383);
	v->a[86759] = 1;
	small_parse_table_4338(v);
}

void	small_parse_table_4338(t_small_parse_table_array *v)
{
	v->a[86760] = anon_sym_DOLLAR_LBRACE;
	v->a[86761] = actions(3385);
	v->a[86762] = 1;
	v->a[86763] = anon_sym_DOLLAR_LPAREN;
	v->a[86764] = actions(3387);
	v->a[86765] = 1;
	v->a[86766] = anon_sym_BQUOTE;
	v->a[86767] = actions(3509);
	v->a[86768] = 1;
	v->a[86769] = sym__bare_dollar;
	v->a[86770] = actions(3507);
	v->a[86771] = 5;
	v->a[86772] = aux_sym_concatenation_token1;
	v->a[86773] = sym_raw_string;
	v->a[86774] = sym_number;
	v->a[86775] = sym__comment_word;
	v->a[86776] = sym_word;
	v->a[86777] = state(498);
	v->a[86778] = 5;
	v->a[86779] = sym_arithmetic_expansion;
	small_parse_table_4339(v);
}

void	small_parse_table_4339(t_small_parse_table_array *v)
{
	v->a[86780] = sym_string;
	v->a[86781] = sym_simple_expansion;
	v->a[86782] = sym_expansion;
	v->a[86783] = sym_command_substitution;
	v->a[86784] = 10;
	v->a[86785] = actions(3);
	v->a[86786] = 1;
	v->a[86787] = sym_comment;
	v->a[86788] = actions(824);
	v->a[86789] = 1;
	v->a[86790] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86791] = actions(828);
	v->a[86792] = 1;
	v->a[86793] = anon_sym_DQUOTE;
	v->a[86794] = actions(830);
	v->a[86795] = 1;
	v->a[86796] = anon_sym_DOLLAR_LBRACE;
	v->a[86797] = actions(832);
	v->a[86798] = 1;
	v->a[86799] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4340(v);
}

/* EOF small_parse_table_867.c */
