/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_485.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2425(t_small_parse_table_array *v)
{
	v->a[48500] = anon_sym_GT;
	v->a[48501] = anon_sym_GT_GT;
	v->a[48502] = anon_sym_AMP_GT;
	v->a[48503] = anon_sym_AMP_GT_GT;
	v->a[48504] = anon_sym_LT_AMP;
	v->a[48505] = anon_sym_GT_AMP;
	v->a[48506] = anon_sym_GT_PIPE;
	v->a[48507] = 17;
	v->a[48508] = actions(3);
	v->a[48509] = 1;
	v->a[48510] = sym_comment;
	v->a[48511] = actions(59);
	v->a[48512] = 1;
	v->a[48513] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48514] = actions(61);
	v->a[48515] = 1;
	v->a[48516] = anon_sym_DOLLAR;
	v->a[48517] = actions(63);
	v->a[48518] = 1;
	v->a[48519] = anon_sym_DQUOTE;
	small_parse_table_2426(v);
}

void	small_parse_table_2426(t_small_parse_table_array *v)
{
	v->a[48520] = actions(67);
	v->a[48521] = 1;
	v->a[48522] = anon_sym_DOLLAR_LBRACE;
	v->a[48523] = actions(69);
	v->a[48524] = 1;
	v->a[48525] = anon_sym_DOLLAR_LPAREN;
	v->a[48526] = actions(71);
	v->a[48527] = 1;
	v->a[48528] = anon_sym_BQUOTE;
	v->a[48529] = actions(377);
	v->a[48530] = 1;
	v->a[48531] = sym_variable_name;
	v->a[48532] = actions(1068);
	v->a[48533] = 1;
	v->a[48534] = sym_file_descriptor;
	v->a[48535] = state(190);
	v->a[48536] = 1;
	v->a[48537] = sym_command_name;
	v->a[48538] = state(624);
	v->a[48539] = 1;
	small_parse_table_2427(v);
}

void	small_parse_table_2427(t_small_parse_table_array *v)
{
	v->a[48540] = sym_concatenation;
	v->a[48541] = state(1343);
	v->a[48542] = 1;
	v->a[48543] = sym_file_redirect;
	v->a[48544] = actions(1066);
	v->a[48545] = 2;
	v->a[48546] = anon_sym_LT_AMP_DASH;
	v->a[48547] = anon_sym_GT_AMP_DASH;
	v->a[48548] = state(1100);
	v->a[48549] = 2;
	v->a[48550] = sym_variable_assignment;
	v->a[48551] = aux_sym_command_repeat1;
	v->a[48552] = actions(65);
	v->a[48553] = 3;
	v->a[48554] = sym_raw_string;
	v->a[48555] = sym_number;
	v->a[48556] = sym_word;
	v->a[48557] = state(420);
	v->a[48558] = 5;
	v->a[48559] = sym_arithmetic_expansion;
	small_parse_table_2428(v);
}

void	small_parse_table_2428(t_small_parse_table_array *v)
{
	v->a[48560] = sym_string;
	v->a[48561] = sym_simple_expansion;
	v->a[48562] = sym_expansion;
	v->a[48563] = sym_command_substitution;
	v->a[48564] = actions(1064);
	v->a[48565] = 8;
	v->a[48566] = anon_sym_LT;
	v->a[48567] = anon_sym_GT;
	v->a[48568] = anon_sym_GT_GT;
	v->a[48569] = anon_sym_AMP_GT;
	v->a[48570] = anon_sym_AMP_GT_GT;
	v->a[48571] = anon_sym_LT_AMP;
	v->a[48572] = anon_sym_GT_AMP;
	v->a[48573] = anon_sym_GT_PIPE;
	v->a[48574] = 6;
	v->a[48575] = actions(3);
	v->a[48576] = 1;
	v->a[48577] = sym_comment;
	v->a[48578] = actions(959);
	v->a[48579] = 1;
	small_parse_table_2429(v);
}

void	small_parse_table_2429(t_small_parse_table_array *v)
{
	v->a[48580] = aux_sym_concatenation_token1;
	v->a[48581] = actions(1027);
	v->a[48582] = 1;
	v->a[48583] = sym__concat;
	v->a[48584] = state(694);
	v->a[48585] = 1;
	v->a[48586] = aux_sym_concatenation_repeat1;
	v->a[48587] = actions(1000);
	v->a[48588] = 2;
	v->a[48589] = sym_file_descriptor;
	v->a[48590] = sym__bare_dollar;
	v->a[48591] = actions(993);
	v->a[48592] = 26;
	v->a[48593] = anon_sym_LPAREN;
	v->a[48594] = anon_sym_PIPE;
	v->a[48595] = anon_sym_AMP_AMP;
	v->a[48596] = anon_sym_PIPE_PIPE;
	v->a[48597] = anon_sym_LT;
	v->a[48598] = anon_sym_GT;
	v->a[48599] = anon_sym_GT_GT;
	small_parse_table_2430(v);
}

/* EOF small_parse_table_485.c */
