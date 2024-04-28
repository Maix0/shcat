/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2037.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10185(t_small_parse_table_array *v)
{
	v->a[203700] = actions(8830);
	v->a[203701] = 1;
	v->a[203702] = anon_sym_BQUOTE;
	v->a[203703] = actions(8832);
	v->a[203704] = 1;
	v->a[203705] = anon_sym_DOLLAR_BQUOTE;
	v->a[203706] = actions(9412);
	v->a[203707] = 1;
	v->a[203708] = sym_word;
	v->a[203709] = actions(9414);
	v->a[203710] = 1;
	v->a[203711] = anon_sym_DOLLAR;
	v->a[203712] = actions(9420);
	v->a[203713] = 1;
	v->a[203714] = sym__comment_word;
	v->a[203715] = actions(8818);
	v->a[203716] = 2;
	v->a[203717] = anon_sym_LPAREN_LPAREN;
	v->a[203718] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[203719] = actions(8834);
	small_parse_table_10186(v);
}

void	small_parse_table_10186(t_small_parse_table_array *v)
{
	v->a[203720] = 2;
	v->a[203721] = anon_sym_LT_LPAREN;
	v->a[203722] = anon_sym_GT_LPAREN;
	v->a[203723] = actions(9416);
	v->a[203724] = 2;
	v->a[203725] = sym_test_operator;
	v->a[203726] = sym__special_character;
	v->a[203727] = actions(9418);
	v->a[203728] = 3;
	v->a[203729] = sym__bare_dollar;
	v->a[203730] = sym_raw_string;
	v->a[203731] = sym_ansi_c_string;
	v->a[203732] = state(4810);
	v->a[203733] = 9;
	v->a[203734] = sym_arithmetic_expansion;
	v->a[203735] = sym_brace_expression;
	v->a[203736] = sym_string;
	v->a[203737] = sym_translated_string;
	v->a[203738] = sym_number;
	v->a[203739] = sym_simple_expansion;
	small_parse_table_10187(v);
}

void	small_parse_table_10187(t_small_parse_table_array *v)
{
	v->a[203740] = sym_expansion;
	v->a[203741] = sym_command_substitution;
	v->a[203742] = sym_process_substitution;
	v->a[203743] = 18;
	v->a[203744] = actions(3);
	v->a[203745] = 1;
	v->a[203746] = sym_comment;
	v->a[203747] = actions(3737);
	v->a[203748] = 1;
	v->a[203749] = aux_sym_number_token1;
	v->a[203750] = actions(3739);
	v->a[203751] = 1;
	v->a[203752] = aux_sym_number_token2;
	v->a[203753] = actions(3743);
	v->a[203754] = 1;
	v->a[203755] = anon_sym_DOLLAR_LPAREN;
	v->a[203756] = actions(3755);
	v->a[203757] = 1;
	v->a[203758] = sym__brace_start;
	v->a[203759] = actions(8820);
	small_parse_table_10188(v);
}

void	small_parse_table_10188(t_small_parse_table_array *v)
{
	v->a[203760] = 1;
	v->a[203761] = anon_sym_DOLLAR_LBRACK;
	v->a[203762] = actions(8824);
	v->a[203763] = 1;
	v->a[203764] = anon_sym_DQUOTE;
	v->a[203765] = actions(8828);
	v->a[203766] = 1;
	v->a[203767] = anon_sym_DOLLAR_LBRACE;
	v->a[203768] = actions(8830);
	v->a[203769] = 1;
	v->a[203770] = anon_sym_BQUOTE;
	v->a[203771] = actions(8832);
	v->a[203772] = 1;
	v->a[203773] = anon_sym_DOLLAR_BQUOTE;
	v->a[203774] = actions(9412);
	v->a[203775] = 1;
	v->a[203776] = sym_word;
	v->a[203777] = actions(9420);
	v->a[203778] = 1;
	v->a[203779] = sym__comment_word;
	small_parse_table_10189(v);
}

void	small_parse_table_10189(t_small_parse_table_array *v)
{
	v->a[203780] = actions(9422);
	v->a[203781] = 1;
	v->a[203782] = anon_sym_DOLLAR;
	v->a[203783] = actions(8818);
	v->a[203784] = 2;
	v->a[203785] = anon_sym_LPAREN_LPAREN;
	v->a[203786] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[203787] = actions(8834);
	v->a[203788] = 2;
	v->a[203789] = anon_sym_LT_LPAREN;
	v->a[203790] = anon_sym_GT_LPAREN;
	v->a[203791] = actions(9416);
	v->a[203792] = 2;
	v->a[203793] = sym_test_operator;
	v->a[203794] = sym__special_character;
	v->a[203795] = actions(9418);
	v->a[203796] = 3;
	v->a[203797] = sym__bare_dollar;
	v->a[203798] = sym_raw_string;
	v->a[203799] = sym_ansi_c_string;
	small_parse_table_10190(v);
}

/* EOF small_parse_table_2037.c */
