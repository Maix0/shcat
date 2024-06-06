/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1157.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5785(t_small_parse_table_array *v)
{
	v->a[115700] = 1;
	v->a[115701] = sym__special_character;
	v->a[115702] = actions(6338);
	v->a[115703] = 1;
	v->a[115704] = sym__comment_word;
	v->a[115705] = actions(6777);
	v->a[115706] = 1;
	v->a[115707] = anon_sym_DOLLAR;
	v->a[115708] = actions(6336);
	v->a[115709] = 3;
	v->a[115710] = sym_test_operator;
	v->a[115711] = sym__bare_dollar;
	v->a[115712] = sym_raw_string;
	v->a[115713] = state(836);
	v->a[115714] = 7;
	v->a[115715] = sym_arithmetic_expansion;
	v->a[115716] = sym_brace_expression;
	v->a[115717] = sym_string;
	v->a[115718] = sym_number;
	v->a[115719] = sym_simple_expansion;
	small_parse_table_5786(v);
}

void	small_parse_table_5786(t_small_parse_table_array *v)
{
	v->a[115720] = sym_expansion;
	v->a[115721] = sym_command_substitution;
	v->a[115722] = 16;
	v->a[115723] = actions(3);
	v->a[115724] = 1;
	v->a[115725] = sym_comment;
	v->a[115726] = actions(2460);
	v->a[115727] = 1;
	v->a[115728] = anon_sym_DOLLAR;
	v->a[115729] = actions(2466);
	v->a[115730] = 1;
	v->a[115731] = aux_sym_number_token1;
	v->a[115732] = actions(2468);
	v->a[115733] = 1;
	v->a[115734] = aux_sym_number_token2;
	v->a[115735] = actions(2472);
	v->a[115736] = 1;
	v->a[115737] = anon_sym_DOLLAR_LPAREN;
	v->a[115738] = actions(2482);
	v->a[115739] = 1;
	small_parse_table_5787(v);
}

void	small_parse_table_5787(t_small_parse_table_array *v)
{
	v->a[115740] = sym__brace_start;
	v->a[115741] = actions(6051);
	v->a[115742] = 1;
	v->a[115743] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115744] = actions(6055);
	v->a[115745] = 1;
	v->a[115746] = anon_sym_DQUOTE;
	v->a[115747] = actions(6057);
	v->a[115748] = 1;
	v->a[115749] = anon_sym_DOLLAR_LBRACE;
	v->a[115750] = actions(6059);
	v->a[115751] = 1;
	v->a[115752] = anon_sym_BQUOTE;
	v->a[115753] = actions(6061);
	v->a[115754] = 1;
	v->a[115755] = anon_sym_DOLLAR_BQUOTE;
	v->a[115756] = actions(6779);
	v->a[115757] = 1;
	v->a[115758] = sym_word;
	v->a[115759] = actions(6781);
	small_parse_table_5788(v);
}

void	small_parse_table_5788(t_small_parse_table_array *v)
{
	v->a[115760] = 1;
	v->a[115761] = sym__special_character;
	v->a[115762] = actions(6785);
	v->a[115763] = 1;
	v->a[115764] = sym__comment_word;
	v->a[115765] = actions(6783);
	v->a[115766] = 3;
	v->a[115767] = sym_test_operator;
	v->a[115768] = sym__bare_dollar;
	v->a[115769] = sym_raw_string;
	v->a[115770] = state(2646);
	v->a[115771] = 7;
	v->a[115772] = sym_arithmetic_expansion;
	v->a[115773] = sym_brace_expression;
	v->a[115774] = sym_string;
	v->a[115775] = sym_number;
	v->a[115776] = sym_simple_expansion;
	v->a[115777] = sym_expansion;
	v->a[115778] = sym_command_substitution;
	v->a[115779] = 16;
	small_parse_table_5789(v);
}

void	small_parse_table_5789(t_small_parse_table_array *v)
{
	v->a[115780] = actions(3);
	v->a[115781] = 1;
	v->a[115782] = sym_comment;
	v->a[115783] = actions(923);
	v->a[115784] = 1;
	v->a[115785] = anon_sym_DOLLAR;
	v->a[115786] = actions(929);
	v->a[115787] = 1;
	v->a[115788] = aux_sym_number_token1;
	v->a[115789] = actions(931);
	v->a[115790] = 1;
	v->a[115791] = aux_sym_number_token2;
	v->a[115792] = actions(935);
	v->a[115793] = 1;
	v->a[115794] = anon_sym_DOLLAR_LPAREN;
	v->a[115795] = actions(945);
	v->a[115796] = 1;
	v->a[115797] = sym__brace_start;
	v->a[115798] = actions(6685);
	v->a[115799] = 1;
	small_parse_table_5790(v);
}

/* EOF small_parse_table_1157.c */
