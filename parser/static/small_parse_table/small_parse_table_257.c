/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_257.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1285(t_small_parse_table_array *v)
{
	v->a[25700] = anon_sym_LT;
	v->a[25701] = anon_sym_GT;
	v->a[25702] = anon_sym_GT_GT;
	v->a[25703] = anon_sym_LT_AMP;
	v->a[25704] = anon_sym_GT_AMP;
	v->a[25705] = anon_sym_GT_PIPE;
	v->a[25706] = anon_sym_LT_GT;
	v->a[25707] = 19;
	v->a[25708] = actions(3);
	v->a[25709] = 1;
	v->a[25710] = sym_comment;
	v->a[25711] = actions(17);
	v->a[25712] = 1;
	v->a[25713] = anon_sym_LPAREN;
	v->a[25714] = actions(53);
	v->a[25715] = 1;
	v->a[25716] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25717] = actions(55);
	v->a[25718] = 1;
	v->a[25719] = anon_sym_DOLLAR;
	small_parse_table_1286(v);
}

void	small_parse_table_1286(t_small_parse_table_array *v)
{
	v->a[25720] = actions(57);
	v->a[25721] = 1;
	v->a[25722] = anon_sym_DQUOTE;
	v->a[25723] = actions(61);
	v->a[25724] = 1;
	v->a[25725] = anon_sym_DOLLAR_LBRACE;
	v->a[25726] = actions(63);
	v->a[25727] = 1;
	v->a[25728] = anon_sym_DOLLAR_LPAREN;
	v->a[25729] = actions(65);
	v->a[25730] = 1;
	v->a[25731] = anon_sym_BQUOTE;
	v->a[25732] = actions(214);
	v->a[25733] = 1;
	v->a[25734] = sym_variable_name;
	v->a[25735] = state(227);
	v->a[25736] = 1;
	v->a[25737] = sym_command_name;
	v->a[25738] = state(506);
	v->a[25739] = 1;
	small_parse_table_1287(v);
}

void	small_parse_table_1287(t_small_parse_table_array *v)
{
	v->a[25740] = aux_sym_command_repeat1;
	v->a[25741] = state(602);
	v->a[25742] = 1;
	v->a[25743] = sym_concatenation;
	v->a[25744] = state(607);
	v->a[25745] = 1;
	v->a[25746] = sym_variable_assignment;
	v->a[25747] = state(1007);
	v->a[25748] = 1;
	v->a[25749] = sym_subshell;
	v->a[25750] = state(1009);
	v->a[25751] = 1;
	v->a[25752] = sym_command;
	v->a[25753] = state(1073);
	v->a[25754] = 1;
	v->a[25755] = sym_file_redirect;
	v->a[25756] = actions(212);
	v->a[25757] = 3;
	v->a[25758] = sym_raw_string;
	v->a[25759] = sym_number;
	small_parse_table_1288(v);
}

void	small_parse_table_1288(t_small_parse_table_array *v)
{
	v->a[25760] = sym_word;
	v->a[25761] = state(327);
	v->a[25762] = 5;
	v->a[25763] = sym_arithmetic_expansion;
	v->a[25764] = sym_string;
	v->a[25765] = sym_simple_expansion;
	v->a[25766] = sym_expansion;
	v->a[25767] = sym_command_substitution;
	v->a[25768] = actions(965);
	v->a[25769] = 7;
	v->a[25770] = anon_sym_LT;
	v->a[25771] = anon_sym_GT;
	v->a[25772] = anon_sym_GT_GT;
	v->a[25773] = anon_sym_LT_AMP;
	v->a[25774] = anon_sym_GT_AMP;
	v->a[25775] = anon_sym_GT_PIPE;
	v->a[25776] = anon_sym_LT_GT;
	v->a[25777] = 19;
	v->a[25778] = actions(3);
	v->a[25779] = 1;
	small_parse_table_1289(v);
}

void	small_parse_table_1289(t_small_parse_table_array *v)
{
	v->a[25780] = sym_comment;
	v->a[25781] = actions(89);
	v->a[25782] = 1;
	v->a[25783] = anon_sym_LPAREN;
	v->a[25784] = actions(99);
	v->a[25785] = 1;
	v->a[25786] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25787] = actions(101);
	v->a[25788] = 1;
	v->a[25789] = anon_sym_DOLLAR;
	v->a[25790] = actions(103);
	v->a[25791] = 1;
	v->a[25792] = anon_sym_DQUOTE;
	v->a[25793] = actions(107);
	v->a[25794] = 1;
	v->a[25795] = anon_sym_DOLLAR_LBRACE;
	v->a[25796] = actions(109);
	v->a[25797] = 1;
	v->a[25798] = anon_sym_DOLLAR_LPAREN;
	v->a[25799] = actions(111);
	small_parse_table_1290(v);
}

/* EOF small_parse_table_257.c */
